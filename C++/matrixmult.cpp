#include<iostream>
#include<vector>


using namespace std;



vector<vector<int>> matmul(const vector<vector<int>>& mat1, const vector<vector<int>>& mat2){
    int rowsA = (int)mat1.size();
    int colsA = rowsA ? (int)mat1[0].size() : 0;
    int rowsB = (int)mat2.size();
    int colsB = rowsB ? (int)mat2[0].size() : 0;

    vector<vector<int>> result(rowsA, vector<int>(colsB, 0));
    if(colsA != rowsB) return result; // incompatible sizes -> return zeroed result

    for(int i = 0; i < rowsA; ++i){
        for(int j = 0; j < colsB; ++j){
            long long sum = 0;
            for(int k = 0; k < colsA; ++k){
                sum += (long long)mat1[i][k] * mat2[k][j];
            }
            result[i][j] = (int)sum;
        }
    }

    return result;
}

int main(){

    int rows = 5;
    int cols = 5;
    vector<vector<int>> matrix(rows, vector<int>(cols, 0));
    vector<vector<int>> matrix2(rows, vector<int>(cols, 0));

    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
           matrix[i][j] = i * j;
        }
    }
    cout << "Matrix A:\n";
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
           cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
           matrix2[i][j] = i + j; // different values for demonstration
        }
    }
    cout << "\nMatrix B:\n";
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
           cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

    vector<vector<int>> result = matmul(matrix, matrix2);
    cout << "\nResult (A x B):\n";
    for(int i = 0; i < (int)result.size(); ++i){
        for(int j = 0; j < (int)result[i].size(); ++j){
           cout << result[i][j] << " ";
        }
        cout << endl;
    }





}