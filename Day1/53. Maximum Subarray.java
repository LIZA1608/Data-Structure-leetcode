class Solution {
    public int maxSubArray(int[] nums) {
        int n=nums.length;
        int maxSum=Integer.MIN_VALUE;
        int currsum=0;
        for(int i=0;i<n;i++){
            currsum+=nums[i];
            maxSum=Math.max(maxSum,currsum);
            if(currsum<0){
                currsum=0;
            }
        }
        return maxSum;
    }
}
