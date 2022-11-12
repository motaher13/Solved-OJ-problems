class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        Arrays.sort(nums);
        return findKSum(nums, target, 0, 4);
    }

    public List<List<Integer>> findKSum(int[] nums, long target, int start, int k) {
        if(k==2) return findTwoSum(nums, target, start);

        List<List<Integer>> out =new ArrayList<>();
        for(int i=start;i<=nums.length-k;i++){
            if(i>start && nums[i]==nums[i-1]) continue;

            List<List<Integer>> nextLists=findKSum(nums, target-nums[i], i+1, k-1);
            for(List<Integer> curList:nextLists)
                curList.add(nums[i]);
            out.addAll(nextLists);
        }
        return out;
    }

    public List<List<Integer>> findTwoSum(int[] nums, long target, int start) {
        List<List<Integer>> out =new ArrayList<>();
        for(int i=start, j=nums.length-1;i<j;){
            int sum=nums[i]+nums[j];
            if(sum<target || (i>start && nums[i]==nums[i-1])) i++;
            else if(sum>target || (j<nums.length-1 && nums[j]==nums[j+1])) j--;
            else if(sum==target){
                out.add(new ArrayList<>(Arrays.asList(nums[i], nums[j])));
                i++;j--;
            }
        }
        return out;
    }

    

}