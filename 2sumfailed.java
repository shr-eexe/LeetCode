class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n=nums.length;
        int A[]= new int[2];
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    A[0]=nums[i];
                    A[1]=nums[j];
                }
            }
        }
        

    }
    public static void main(String args[]){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int nums[]=new int[n];
        for(int i=0;i<n;i++){
            nums[i]=in.nextInt();
        }
        int target=in.nextInt();
        int []A=twoSum(nums,target);
    }
}