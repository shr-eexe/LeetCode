class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> x;
        vector<int> y;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    x.push_back(i);
                    y.push_back(j);
                }
            }
        }
        for(int i=0;i<x.size();i++){
            int r=x[i];
            int c=y[i];
            for(int j=0;j<n;j++) {
                matrix[r][j]=0;
            }
            for(int j=0;j<m;j++){
                matrix[j][c]=0;
            }
        }
        /*for(int i=0;i<y.size();i++){
            int c=y[i];
            for (int j=0;j<m;j++){
                matrix[j][c]=0;
            }
        }*/

    }
};
