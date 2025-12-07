class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max=0;
        int n=nums.size();
        int count=1;
        for(int i=0;i<n;i++){
            if(i<n-1 && nums[i+1]-nums[i]==1){
                count++;
            }
            else if (i<n-1 && nums[i+1]==nums[i]){
                count+=0;
            }
            else{
                if(count>max){
                    max=count;
                }
                count=1;
            }
            
        }
        return max;
    }
};
