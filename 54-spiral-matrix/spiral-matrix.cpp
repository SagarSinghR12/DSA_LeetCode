class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int total = m*n;
        vector<int> ans;
        
        int startRow = 0;
        int endCol = n-1;
        int endRow = m-1;
        int startCol = 0;
        int count = 0;

        while(count < total){
            // Printing startRow
            for(int i = startCol; i <= endCol && count < total; i++){
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;
            // Printing endCol
            for(int i = startRow; i <= endRow && count < total; i++){
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;
            // Printing endRow
            for(int i = endCol; i >= startCol && count < total; i--){
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;
            // Printing startCol
            for(int i = endRow; i >= startRow && count < total; i--){
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
        }

        return ans;
    }
};