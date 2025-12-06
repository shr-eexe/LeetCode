class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix="";
        if(strs.size()==0) return prefix;
        bool flag=true;
        int k=0;
        int n=strs[0].length();
        while(flag){
            int count=1;
            char c=strs[0][k];
            for (int i = 1; i < strs.size(); i++) {
                if (k >= strs[i].size() || strs[i][k] != c) {
                    flag = false;
                    break;
                    }
                }
            if(count!=strs.size()){
                flag=false;
            }
            else{
                prefix+=c;
                k++;
                if(k>=n) break;
            }
        }
        return prefix;
    }
};
