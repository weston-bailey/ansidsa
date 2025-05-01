# Compiler and flags
CC ?= clang
CFLAGS = -Wall -Wextra -Wpedantic -Wshadow -Wconversion -g -O0 \
         -fsanitize=address,undefined -fno-omit-frame-pointer \
		 -pedantic -ansi
LDFLAGS = -lm

# Install metadata
VERSION = 0.0.0
LINK_NAME = dsa
LIB_NAME = lib$(LINK_NAME).a

INSTALL_PREFIX = /usr/local
INSTALL_INCLUDE_SUBDIR = protoverse/$(LINK_NAME)/$(VERSION)
INSTALL_INCLUDE_DIR = $(INSTALL_PREFIX)/include/$(INSTALL_INCLUDE_SUBDIR)
INSTALL_LIB_DIR = $(INSTALL_PREFIX)/lib
INSTALL_LIB = $(INSTALL_LIB_DIR)/$(LIB_NAME)

# Directories
SRC_DIR = src
OBJ_DIR = obj
LIB_DIR = lib
TEST_DIR = tests
TEST_BIN_DIR = $(TEST_DIR)/bin

# Files
SRCS = $(wildcard $(SRC_DIR)/*.c)
HEADERS = $(wildcard $(SRC_DIR)/*.h)
OBJS = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))
TEST_SRCS = $(wildcard $(TEST_DIR)/*.c)
TEST_BINS = $(patsubst $(TEST_DIR)/%.c,$(TEST_BIN_DIR)/%,$(TEST_SRCS))

.PHONY: all debug clean test termux-test install uninstall usage

# === DESKTOP BUILD ===

all: $(LIB_DIR)/$(LIB_NAME) test

debug: CFLAGS += -fsanitize=address,undefined -g
debug: LDFLAGS += -fsanitize=address,undefined
debug: all

$(LIB_DIR)/$(LIB_NAME): $(LIB_DIR) $(OBJ_DIR) $(OBJS)
	$(RM) $@
	ar -cvrs $@ $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(SRC_DIR)/%.h
	$(CC) $(CFLAGS) -c $< -o $@

# DESKTOP TEST RULE: requires static lib
$(TEST_BIN_DIR)/%: $(TEST_DIR)/%.c $(LIB_DIR)/$(LIB_NAME)
	$(CC) $(CFLAGS) $< $(OBJS) -o $@ $(LDFLAGS)

test: $(TEST_BIN_DIR) $(TEST_BINS)
	@for t in $(TEST_BINS); do echo "Running $$t..."; ./$$t; done

# === TERMUX TEST ===

termux-test: CFLAGS += -fsanitize=address,undefined -g
termux-test: LDFLAGS += -fsanitize=address,undefined
termux-test: $(OBJ_DIR) $(TEST_BIN_DIR) $(TEST_SRCS)
	@for src in $(TEST_SRCS); do \
		base=$$(basename $$src .c); \
		out=$(TEST_BIN_DIR)/$$base; \
		echo "Building $$out"; \
		$(CC) $(CFLAGS) $$src $(OBJS) -o $$out $(LDFLAGS); \
		echo "Running $$out..."; \
		./$$out; \
	done

# === INSTALL / UNINSTALL ===

install: $(LIB_DIR)/$(LIB_NAME)
	sudo install -d $(INSTALL_INCLUDE_DIR)
	sudo install -m 644 $(HEADERS) $(INSTALL_INCLUDE_DIR)
	sudo install -m 644 $(LIB_DIR)/$(LIB_NAME) $(INSTALL_LIB)
	sudo ldconfig

uninstall:
	sudo rm -rf $(INSTALL_INCLUDE_DIR)
	sudo rm -f $(INSTALL_LIB)
	sudo ldconfig

usage:
	@echo "Usage:"
	@echo "$(CC) -I$(INSTALL_INCLUDE_DIR) -L$(INSTALL_LIB_DIR) -l$(LINK_NAME) your_code.c"

# === MISC ===

$(OBJ_DIR) $(LIB_DIR) $(TEST_BIN_DIR):
	mkdir -p $@

clean:
	rm -rf $(OBJ_DIR) $(LIB_DIR) $(TEST_BIN_DIR)
