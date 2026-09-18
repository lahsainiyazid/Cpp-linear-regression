# Simple Linear Regression from Scratch in C++

A lightweight, educational implementation of **Simple Linear Regression** built entirely from scratch in C++ using standard `std::vector`. This project avoids external machine learning or linear algebra libraries to demonstrate the fundamental mathematics and data structures behind predictive modeling.

## Project Structure

```text
├── main.cpp          # Entry point demonstrating training and prediction
├── vectorutils.hpp   # Vector math declarations (mean, variance, covariance, etc.)
├── vectorutils.cpp   # Vector math implementations
├── function.hpp      # Regression training and prediction declarations
├── function.cpp      # Slope, intercept, train, and predict logic
├── metrics.hpp       # Evaluation metric declarations (MAE, MSE, RMSE)
└── metrics.cpp       # Evaluation metric implementations
```

## Features

- **Vector Utilities (`vectorutils`)**: Safe vector operations with bounds checking and exception handling for operations like addition, mean, variance, covariance, and printing.
- **Model Training (`function`)**: Analytical least-squares estimation to compute the optimal slope ($m$) and intercept ($b$) for $y = mx + b$.
- **Inference (`predict`)**: Generates model predictions given a test vector of input features.
- **Evaluation Metrics (`metrics`)**: Built-in performance assessment including:
  - Mean Absolute Error (MAE)
  - Mean Squared Error (MSE)
  - Root Mean Squared Error (RMSE)

## Getting Started

### Prerequisites
You need a modern C++ compiler supporting C++11 or higher (e.g., `g++` or `clang++`).

### Compilation & Execution
Compile all source files together using your preferred compiler:

```bash
g++ -std=c++11 main.cpp vectorutils.cpp function.cpp metrics.cpp -o linear_regression
./linear_regression
```

## Next Steps
This project serves as **Project 1** in an evolutionary portfolio. Future milestones include wrapping these utilities into a dedicated custom **Matrix Library** and expanding to **Multiple Linear Regression** using matrix operations and gradient descent.