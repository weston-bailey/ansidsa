Cryptography Master Roadmap

This roadmap guides you through the fundamentals, intermediate, and advanced topics in cryptography—both theoretical and practical. It is structured in tiers to build a solid progression from basic to expert-level knowledge.


---

Tier 0: Prerequisites

Discrete Math:

Sets, Relations, Functions

Logic & Proofs

Modular Arithmetic

Prime Numbers, GCD, Euclidean Algorithm

Exponentiation & Logarithms


Number Theory:

Congruences

Fermat's Little Theorem

Euler’s Theorem

Chinese Remainder Theorem

Modular Inverses


Algebra:

Groups, Rings, Fields

Finite Fields (GF(p), GF(2^n))




---

Tier 1: Core Concepts & Classical Cryptography

Historical Ciphers

Caesar Cipher

Affine Cipher

Vigenère Cipher

Playfair Cipher

Enigma Machine (conceptual understanding)


Cryptographic Terminology

Plaintext, Ciphertext

Key, Keyspace

Encryption vs Decryption

Symmetric vs Asymmetric

Confidentiality, Integrity, Authenticity

Adversary Models (CPA, CCA)


Basic Security Concepts

Kerckhoffs’s Principle

One-Time Pad (Unbreakable but impractical)

Frequency Analysis

Key Entropy



---

Tier 2: Symmetric Cryptography

Block Ciphers

Substitution-Permutation Networks

Feistel Networks

DES (Data Encryption Standard)

AES (Advanced Encryption Standard)

Modes of Operation:

ECB, CBC, CFB, OFB, CTR, GCM



Stream Ciphers

LFSR (Linear Feedback Shift Register)

RC4 (Deprecated)

ChaCha20 / Salsa20


Hash Functions

MD5 (Broken)

SHA-1 (Broken)

SHA-2 Family (SHA-224/256/512)

SHA-3 (Keccak)

HMAC (Hashed Message Authentication Code)

Merkle–Damgård construction

Sponge construction



---

Tier 3: Asymmetric Cryptography

Public-Key Cryptosystems

RSA (Rivest–Shamir–Adleman)

Key Generation, Encryption, Decryption

RSA Attacks (Timing, Padding Oracle)


Diffie–Hellman Key Exchange

ElGamal Encryption

Elliptic Curve Cryptography (ECC)

ECDH (Key Exchange)

ECDSA (Signature Algorithm)


Lattice-based Cryptography (Intro to Post-Quantum)


Digital Signatures

RSA Signatures

DSA (Digital Signature Algorithm)

ECDSA (Elliptic Curve DSA)



---

Tier 4: Cryptanalysis & Security

Cryptanalysis Techniques

Frequency Analysis

Known Plaintext & Chosen Ciphertext Attacks

Differential Cryptanalysis

Linear Cryptanalysis

Side-channel Attacks (Timing, Power)

Padding Oracle Attacks


Protocol & Application Layer

TLS/SSL

HTTPS

Signal Protocol (Double Ratchet)

VPN Encryption (IPsec, WireGuard)

Email Encryption (PGP, S/MIME)



---

Tier 5: Modern & Advanced Cryptography

Zero-Knowledge Proofs

Schnorr Protocol

zk-SNARKs, zk-STARKs


Homomorphic Encryption

Partially Homomorphic (Paillier, RSA)

Fully Homomorphic Encryption (FHE)


Multi-Party Computation (MPC)

Secret Sharing (Shamir’s Secret Sharing)

Threshold Cryptography


Post-Quantum Cryptography

Lattice-based (NTRU, Kyber)

Code-based (McEliece)

Hash-based Signatures (XMSS, SPHINCS+)

Multivariate & Isogeny-based Cryptography



---

Bonus: Real-World Skills & Tools

Implement Ciphers from Scratch in C or Python

Use openssl, gpg, and libsodium

Understand Key Management Systems (KMS)

Practice with Capture-The-Flag (CTF) crypto challenges

Follow NIST Cryptography Standards

Explore Cryptographic Libraries (libsodium, OpenSSL, BouncyCastle)



---



