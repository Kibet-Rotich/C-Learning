#include "linear_regression.h"
#include <stdlib.h>


LinearModel* create_model(int num_features) {
    // Creates space for model and its weights in heap
    LinearModel *model = (LinearModel*)malloc(sizeof(LinearModel));
    if (model == NULL) return NULL; // Safety check

    model->weights = (double*)malloc(sizeof(double) * num_features);
    if (model->weights == NULL) {
        free(model); // Clean up the struct if the array failed
        return NULL;
    }

    // Initialize
    for(int i = 0; i < num_features; i++) {
        model->weights[i] = 0.0;
    }
    model->num_features = num_features;
    model->bias = 0.0;

    return model;
}

void free_model(LinearModel* model) {
    if (model) {
        free(model->weights);
        free(model);
    }
}

double predict(LinearModel* model, double* x_row) {
    double prediction = model->bias;
    for(int i = 0; i < model->num_features; i++) {
        prediction += (model->weights[i] * x_row[i]);
    }
    return prediction;
}


void train(LinearModel* model, double* X, double* y, int n_samples, double learning_rate, int epochs) {
    int m = model->num_features;

    // perform simple batch gradient descent for the number of epochs 
    for (int e = 0; e < epochs; e++) {
        
        double *dw = (double*)calloc(m, sizeof(double));
        if (dw == NULL) {
            return;
        }
        double db = 0.0;

        /* accumulate gradients over all samples */
        for (int i = 0; i < n_samples; i++) {
            double *x_row = &X[i * m];            // pointer to the start of sample i
            double prediction = predict(model, x_row);
            double error = y[i] - prediction;

            for (int j = 0; j < m; j++) {
                dw[j] += error * x_row[j];
            }
            db += error;
        }

        // update parameters
        for (int j = 0; j < m; j++) {
            model->weights[j] += ((learning_rate * dw[j]) / n_samples)*2;
        }
        model->bias += 2*((learning_rate * db) / n_samples);

        free(dw);
    }
}
