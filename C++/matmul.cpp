#include<iostream>
#include<vector>

using namespace std;

vector<vector <int>> elementwisemult(const vector<vector <int>>& mat1, const vector<vector <int>>& mat2){
    size_t rowsa = (int)mat1.size();
    if(rowsa == 0){
        return {};
    }

    size_t rowsb = (int)mat2.size();
    if(rowsa == 0){
        return {};
    }
    size_t colsa = (int)mat1[0].size();
    size_t colsb = (int)mat2[0].size();

    

    vector<vector <int>> result(rowsa, vector<int>(colsa,0));
    if(colsa != colsb){
        return result;
    }
    if(rowsa != rowsb){
        return result;
    }

    for(int i = 0;i<rowsa;i++){
        for(int j = 0;j<colsa;j++){
        result[i][j] = mat1[i][j]*mat2[i][j];
    }

    


}

return result;
}

int main(){
    vector<vector <int>> matrix(5,vector<int>(5,0));
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
        matrix[i][j] = i*j;
    }
    }
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
    }

    cout<<endl;

    vector<vector <int>> matrix2(5,vector<int>(5,0));
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
        matrix2[i][j] = i+j;
    }
    }
    cout<<endl;
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
        cout<<matrix2[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<endl;

    vector<vector<int>> result = elementwisemult(matrix,matrix2);
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
    }




}