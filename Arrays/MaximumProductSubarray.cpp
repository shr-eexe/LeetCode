class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxprod=nums[0];
        int minprod=nums[0];
        int result=nums[0];
        for(int i=1;i<n;i++){
            int c=nums[i];
            int t1=max({c,maxprod*c, minprod*c});
            int t2=min({c,maxprod*c,minprod*c});
            maxprod=t1;
            minprod=t2;
            result=max({result,maxprod});
        }
        return result;
    }
};
