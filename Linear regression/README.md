# Linear Regression in C with Python Interface

This project demonstrates a simple yet powerful implementation of a linear regression algorithm in C. It allows you to:

- **Train** a linear regression model on your data
- **Predict** outcomes using the trained model
- Leverage the speed and efficiency of C for computationally intensive tasks

## Python Integration

To showcase interoperability, a Python test script is included. This script interfaces with the C implementation, demonstrating how you can:

- Run performance-critical code in C for maximum speed
- Use Python for ease of use, rapid prototyping, and integration

This approach is ideal for scenarios where you need both the raw speed of C and the flexibility of Python.

## Future Improvements

A potential next step is to develop a full-fledged Python module (using tools like Cython or Python's C API). This would allow you to call C functions directly from Python, seamlessly offloading heavy computations to C while keeping your workflow in Python.


## How to Compile as a Shared Library

To build the C code as a shared library (for use with Python or other languages), run:

```bash
gcc -shared -fPIC -o libregression.so linear_regression.c
```

This will produce `libregression.so`, which can be loaded by Python or other programs that support dynamic libraries.

## Files

- `linear_regression.c`, `linear_regression.h`: Core C implementation of linear regression
- `test.c`: C test file for validating the algorithm
- `test.py`: Python script interfacing with the C code

---

Feel free to explore, modify, and extend this project for your own use cases!
