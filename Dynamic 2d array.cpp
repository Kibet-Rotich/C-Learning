#include<iostream>

using namespace std;

int** creatematrix(int rows,int columns){
    int** rowptrs = new int*[rows];
    for(int i = 0;i<rows;i++){
        rowptrs[i] = new int[columns];
    }

    return rowptrs;
}

void insertvalue(int** v,int row, int column, int value){

    v[row][column] = value;

}


void printmatrix(int** m,int rows,int columns){

    for(int i=0;i<rows;i++){
        for(int j = 0;j<columns;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

}

void freematrix(int** m,int rows){
    for(int i = 0; i<rows;i++){
        delete[] m[i];
    }
    delete[] m;
}

int** transpose(int** m,int rows, int columns){
    int** tmatrix = creatematrix(columns,rows);
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<columns;j++){
                tmatrix[j][i] = m[i][j];

        }
    }
    return tmatrix;
}

int main()
{

    int rows =3,cols = 4;

    int** matrix = creatematrix(rows,cols);
    int value = 3;
    for(int i = 0; i<rows;i++){
        for(int j = 0;j<cols;j++){
            matrix[i][j] = value;
            value++;
        }
    }

    cout<<"Original matrix"<<endl;
    printmatrix(matrix,rows, cols);

    cout<<"Transposed matrix"<<endl;
    int** transposed = transpose(matrix,rows,cols);
    printmatrix(transposed,cols,rows);

    freematrix(matrix,rows);
    freematrix(transposed,cols);
}
