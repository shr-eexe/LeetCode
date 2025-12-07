class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> y;
        for(int i=0;i<n;i++){
            vector<int> x;
            for(int j=0;j<=i;j++){
                if(j==0||j==i){
                    x.push_back(1);
                }
                else{
                    x.push_back(y[i-1][j]+y[i-1][j-1]);
                }

            }
            y.push_back(x);
        
        }
        return y;
    }
};
