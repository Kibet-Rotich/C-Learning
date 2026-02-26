#include <stdio.h>
#include <stdlib.h>
#include "linear_regression.h"

int main(void) {
    /* create a model with two features */
    int num_features = 2;
    LinearModel *model = create_model(num_features);
    if (model == NULL) {
        fprintf(stderr, "failed to allocate model\n");
        return 1;
    }

    /* simple dataset: y = 3*x1 + 5*x2 + 7 */
    int n_samples = 4;
    double X[] = {
        1.0, 2.0,   // sample 0
        2.0, 0.5,   // sample 1
        0.0, 1.0,   // sample 2
        3.0, 1.5    // sample 3
    };
    double y[] = {
        3*1.0 + 5*2.0 + 7,
        3*2.0 + 5*0.5 + 7,
        3*0.0 + 5*1.0 + 7,
        3*3.0 + 5*1.5 + 7
    };

    /* before training: predictions */
    printf("weights before training: ");
    for (int i = 0; i < num_features; i++)
        printf("%f ", model->weights[i]);
    printf("\nbias: %f\n", model->bias);

    for (int i = 0; i < n_samples; i++) {
        double *row = &X[i * num_features];
        double pred = predict(model, row);
        printf("sample %d, prediction = %f, actual = %f\n", i, pred, y[i]);
    }

    /* train the model */
    train(model, X, y, n_samples, 0.01, 10000);

    printf("\nweights after training: ");
    for (int i = 0; i < num_features; i++)
        printf("%f ", model->weights[i]);
    printf("\nbias: %f\n", model->bias);

    for (int i = 0; i < n_samples; i++) {
        double *row = &X[i * num_features];
        double pred = predict(model, row);
        printf("sample %d, prediction = %f, actual = %f\n", i, pred, y[i]);
    }

    free_model(model);
    return 0;
}
