# include<iostream>
# include<vector>

using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        //

        vector<int> columnZero(n, 0);
        vector<int> rowZero(m, 0);

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0){
                    columnZero[j] = 1;
                    rowZero[i] = 1;
                }
            }
        }        

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(columnZero[j] == 1|| rowZero[i] == 1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
