class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<=1){
            return 1;
        }
        vector<int>S;
        for(int i=0;i<n;i++){
            int x=nums[i];
            while(i+1<n && nums[i+1]==x){
                i++;
            }
            S.push_back(x);
        }
        int k=S.size();
        nums=S;
        return k;
    }
};
