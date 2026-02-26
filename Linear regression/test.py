import ctypes
import numpy as np
import pandas as pd

# 1. Load the shared library
lib = ctypes.CDLL('./libregression.so')

# 2. Define the argument and return types for C functions
# This tells Python how to handle the memory pointers
class LinearModel(ctypes.Structure):
    _fields_ = [("num_features", ctypes.c_int),
                ("weights", ctypes.POINTER(ctypes.c_double)),
                ("bias", ctypes.c_double)]

lib.create_model.restype = ctypes.POINTER(LinearModel)
lib.create_model.argtypes = [ctypes.c_int]

lib.train.argtypes = [
    ctypes.POINTER(LinearModel), 
    ctypes.POINTER(ctypes.c_double), # X pointer
    ctypes.POINTER(ctypes.c_double), # y pointer
    ctypes.c_int,                    # n_samples
    ctypes.c_double,                 # learning_rate
    ctypes.c_int                     # epochs
]

# 3. Create Sample Data
X = np.array([[1.0, 2.0], [2.0, 3.0], [4.0, 5.0]], dtype=np.float64)
y = np.array([5.0, 8.0, 14.0], dtype=np.float64) # y = 2x1 + 1x2 + 1 (approx)

n_samples, n_features = X.shape

# 4. Initialize the C Model
model = lib.create_model(n_features)

# 5. Train the model
# .ctypes.data_as(...) sends the raw memory address of the NumPy array to C
lib.train(
    model, 
    X.ctypes.data_as(ctypes.POINTER(ctypes.c_double)),
    y.ctypes.data_as(ctypes.POINTER(ctypes.c_double)),
    n_samples, 
    0.01, 
    10000
)

# 6. Check results
print(f"Bias: {model.contents.bias}")
for i in range(n_features):
    print(f"Weight {i}: {model.contents.weights[i]}")

lib.free_model(model)