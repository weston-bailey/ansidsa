Math Roadmap for Simulation, Graphics, and Generative Systems

This roadmap focuses on the mathematical foundations required to support physics simulation, graphics programming, procedural generation, and machine learning. It is organized by tier and domain, with cross-cutting structural frameworks emphasized for system-level thinking and implementation.


---

Tier 0: Core Foundations

Arithmetic & Algebra

Order of operations

Variables, equations, and expressions

Systems of linear equations

Factorization, polynomials


Logic & Discrete Math

Boolean Algebra

Propositional logic

Set Theory

Functions and mappings

Modular arithmetic (used in cryptography, procedural gen)


Number Systems

Integers, rationals, reals, floats

Binary and hexadecimal systems

Fixed-point vs floating-point arithmetic



---

Tier 1: Geometry & Trigonometry

Euclidean Geometry

Points, lines, angles, circles, polygons

Distance formulas, midpoints

Transformations: translation, rotation, scaling


Trigonometry

Sine, cosine, tangent

Inverse trig functions

Unit circle

Law of sines/cosines

Periodic functions and oscillations


Coordinate Systems

Cartesian (2D/3D)

Polar / Cylindrical / Spherical

Local vs Global coordinate systems



---

Tier 2: Linear Algebra (Core for Everything)

Vectors

Vector addition/subtraction

Dot and cross product

Norms, unit vectors

Projection and orthogonality


Matrices

Matrix multiplication

Identity, transpose, inverse

Determinants

Change of basis


Transformations

Affine transformations (translation, rotation, scale)

Homogeneous coordinates

Composition of transformations

Model-View-Projection pipeline (graphics)


Spaces

Vector spaces & subspaces

Basis, span, rank

Eigenvalues and eigenvectors



---

Tier 3: Calculus & Differential Equations

Calculus I: Single Variable

Limits and continuity

Derivatives

Integrals

Chain rule, product rule

Applications to motion, growth, change


Calculus II: Multivariable

Partial derivatives

Gradient vector

Jacobian and Hessian matrices

Line and surface integrals


Differential Equations

ODEs: first-order, second-order

Systems of ODEs

Numerical solvers (Euler, RK4)

PDEs: heat, wave, Laplace equations



---

Tier 4: Probability, Statistics & Randomness

Probability Theory

Sample spaces, events, probability rules

Conditional probability

Bayes’ Theorem

Distributions (Uniform, Gaussian, Binomial, Poisson)


Statistics

Mean, median, variance, standard deviation

Covariance and correlation

Regression basics


Random Processes

Markov Chains

Noise generation: white noise, Perlin, simplex

Pseudorandom number generation (PRNGs)



---

Tier 5: Advanced / Domain-Specific Topics

Graphics

Barycentric coordinates

Interpolation techniques

Ray-geometry intersections

Signed distance fields (SDF)

Bezier curves, splines

Fourier Transforms (image processing)


Simulation

Rigid body dynamics: torque, inertia tensors

Collision detection: SAT, GJK

Constraint systems: Lagrange multipliers

Particle systems and fluid dynamics

Matrix solvers and optimization


Machine Learning

Loss functions and cost surfaces

Gradient descent and optimization

Matrix calculus

Linear regression, PCA, SVD


Procedural Generation

Graph theory (nodes, edges, traversals)

Combinatorics (used in name/item generation)

Noise and turbulence functions

Fractals and recursive geometry

Cellular automata and simulation grids



---

Structural Concepts & Frameworks

Coordinate & Space Abstractions

Structuring 2D/3D data with Vec2, Vec3, Mat4 types

Local/global transform hierarchies

Scene graphs and transformation stacks


Simulation Frameworks

Fixed timestep simulation

Accumulators and time smoothing

State interpolation and rollback


Math Libraries & Tools

GLM (OpenGL Math Library)

Eigen (C++ Linear Algebra)

NumPy (Python)

SymPy (Symbolic Math)

JAX / PyTorch (Auto-diff, ML)


Implementation Patterns

SoA vs AoS (Structure of Arrays vs Array of Structures)

Bitmasking and flags for systems

Lookup tables and precomputation



---

This roadmap is meant to unify the mathematical foundations required for simulating complex systems, rendering immersive worlds, and generating rich procedural content. Mastering this will give you total dominion over motion, form, structure, and emergence.


