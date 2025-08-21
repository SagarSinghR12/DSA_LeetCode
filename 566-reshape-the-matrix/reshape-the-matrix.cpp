class Solution {
public:
    vector<vector<int>> method_1(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if(m*n != r*c)
            return mat;

        vector<vector<int>> newMat(r, vector<int>(c,0));
        int k=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                newMat[k/c][k%c] = mat[i][j];
                k++;
            }
        }

        return newMat;
    }

    vector<vector<int>> method_2(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if(m*n != r*c)
            return mat;

        vector<vector<int>> newMat(r, vector<int>(c));
        
        for(int i=0; i<m*n; i++){
            newMat[i/c][i%c] = mat[i/n][i%n];
        }

        return newMat;
    }

    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        // Method-1:
        // return method_1(mat, r, c);

        // Method-2:
        return method_2(mat, r, c);
    }
};