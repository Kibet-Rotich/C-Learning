#ifndef LINEAR_REGRESSION_H
#define LINEAR_REGRESSION_H

typedef struct {
    int num_features;
    double* weights;
    double bias;
} LinearModel;

// Functions that Python will call

LinearModel* create_model(int num_features);
void free_model(LinearModel* model);

// The training function that does the heavy lifting
void train(LinearModel* model, double* X, double* y, int n_samples, double learning_rate, int epochs);

// For individual predictions
double predict(LinearModel* model, double* x_row);

#endif
