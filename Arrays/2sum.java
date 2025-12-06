class Solution {
    public static int[] twoSum(int[] nums, int target) {
        int A[] = new int[2];
        for (int i = 0; i < nums.length - 1; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if (nums[i] + nums[j] == target) {
                    A[0] = i;
                    A[1] = j;
                    return A;
                }
            }
        }
        return A;

    }

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int nums[] = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = in.nextInt();
        }
        int target = in.nextInt();
        int[] A = twoSum(nums, target);
        System.out.println("[" + A[0] + "," + A[1] + "]");
    }
}
