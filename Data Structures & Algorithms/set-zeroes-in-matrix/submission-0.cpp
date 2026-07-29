class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();       
        int n = matrix[0].size();    

        vector<int> rowMarker(m, 0);
        vector<int> colMarker(n, 0);  

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == 0) 
                {
                    rowMarker[i] = 1; 
                    colMarker[j] = 1; 
                }
            }
        } 

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(rowMarker[i] == 1 || colMarker[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        } 
    }
};
