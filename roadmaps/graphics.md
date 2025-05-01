Graphics Programming Roadmap

This roadmap is designed for learning graphics programming from the ground up, with an emphasis on real-time rendering, shader development, and low-level control. It's ideal for game engine development, simulation visualization, and generative graphics.


---

Tier 0: Prerequisites

Math Foundations

Linear Algebra:

Vectors, Matrices, Dot/Cross Products

Transformations: Translation, Rotation, Scaling

Matrix Multiplication & Homogeneous Coordinates


Geometry Basics:

Coordinate Systems

Planes, Normals, Angles


Trigonometry

Basic Calculus (optional but helpful)


Programming Foundations

C / C++ (preferred for performance and low-level control)

Understanding pointers, memory layout

Basic I/O and math libraries



---

Tier 1: 2D Graphics Fundamentals

Rendering Basics

Framebuffers & Pixels

Drawing Lines, Shapes, and Sprites

Rasterization


Libraries & Tools

SDL (Simple DirectMedia Layer)

SFML or Allegro (alternatives)

Cairo (vector graphics)


Image Management

Color Models (RGB, HSV)

Loading & Manipulating Bitmaps

Transparency & Alpha Blending



---

Tier 2: Modern OpenGL & Shaders

OpenGL Essentials

OpenGL Context Setup

Drawing with Vertex Buffers

Vertex Arrays and Index Buffers

GL Pipeline Overview


Shader Programming (GLSL)

Vertex Shaders

Fragment Shaders

Uniforms and Attributes

GLSL Syntax & Data Types


Transformations in 3D

Model, View, Projection (MVP) Matrices

Camera Systems

Perspective & Orthographic Projection



---

Tier 3: Real-Time 3D Graphics

Rendering Pipeline Concepts

Backface Culling

Depth Testing

Alpha Testing & Blending

View Frustum & Clipping


Lighting & Materials

Phong & Blinn-Phong Lighting

Gouraud vs Flat vs Per-Pixel Shading

Ambient, Diffuse, Specular Components


Texturing

UV Mapping

Texture Wrapping & Filtering

Normal & Specular Maps


Models

Loading 3D Models (OBJ, glTF, etc.)

Scene Graphs

Basic Animation (keyframes, interpolation)



---

Tier 4: Advanced Techniques

Advanced Lighting

Shadow Mapping

Deferred Shading

Physically Based Rendering (PBR)

HDR & Tone Mapping


Shader Effects

Procedural Textures (noise, stripes, marble)

Post-Processing Effects (bloom, motion blur)

Screen Space Reflections / Ambient Occlusion


Instancing & Optimization

Hardware Instancing

Occlusion Culling

Frustum Culling

Level of Detail (LOD)



---

Tier 5: Engine Architecture & GPU Programming

Rendering Engines

Forward vs Deferred Renderers

ECS Integration

Render Graphs & Frame Graphs


GPU-Level Programming

GLSL (continued)

Compute Shaders

WebGL / Vulkan / DirectX intros

Shader Toy & Live Coding


Offscreen Rendering

Framebuffer Objects (FBOs)

Render to Texture

Shadow Buffers



---

Tier 6: Advanced Topics & Techniques

Ray Tracing

Ray-Sphere, Ray-Plane Intersections

Bounding Volume Hierarchies (BVH)

Path Tracing Basics

RTX / Vulkan Ray Tracing APIs


Procedural Geometry

Parametric Surfaces

Marching Cubes / Tetrahedrons

Signed Distance Fields

Geometry Shaders


Animation & Simulation Integration

Skeletal Animation (Bone Transforms)

Vertex Skinning

Morph Targets / Blend Shapes

GPU Particles



---

Bonus: Tooling, Ecosystem & Practice

ImGui for Debug UIs

GLM (OpenGL Math Library)

Assimp (Asset Import Library)

stb_image, tinyobjloader, etc.

ShaderToy / GLSL Sandbox

OBS for recording/debugging output



---

This roadmap is perfect for graphics programmers, technical artists, and engine developers. It can be followed sequentially or jumped into at any tier depending on your background. The ultimate goal: real-time, performant, visually stunning graphics — and the power to bend pixels to your will.


