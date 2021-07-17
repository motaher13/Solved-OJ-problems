package Practice;

import java.util.*;

public class KSum {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        Arrays.sort(nums);
        return getKSum(nums, target, 0, 4);
    }

    public List<List<Integer>> getKSum(int[] nums, int target, int start, int k){
        /* data is sorted*/
        List<List<Integer>> out=new ArrayList<>();
        if(k==2) return twoSumMy(nums,target, start);

        for(int i=start;i<=nums.length-k;i++){
            if (i > start && nums[i - 1] == nums[i]) continue;
            List<List<Integer>> nextLists = getKSum(nums, target - nums[i], i + 1, k - 1);
            for (List<Integer> nextList : nextLists) {
                List<Integer> currentList = new ArrayList<>(Arrays.asList(nums[i]));
                currentList.addAll(nextList);
                out.add(currentList);
            }

        }
        return out;
    }

    public List<List<Integer>> twoSum(int[] nums, int target, int start) {
        List<List<Integer>> res = new ArrayList<>();
        Set<Integer> s = new HashSet<>();
        for (int i = start; i < nums.length; ++i) {
            if (res.isEmpty() || res.get(res.size() - 1).get(1) != nums[i]) {
                if (s.contains(target - nums[i])) {
                    res.add(Arrays.asList(target - nums[i], nums[i]));
                }
            }
            s.add(nums[i]);
        }
        return res;
    }

    public List<List<Integer>> twoSumMy(int[] nums, int target, int start){
        List<List<Integer>> out=new ArrayList<>();
        for(int i=start,j=nums.length-1;i<j;){
            int sum=nums[i]+nums[j];
            if (sum>target || (j<nums.length-1 && nums[j]==nums[j+1])) j--;
            else if (sum<target || (i>start && nums[i]==nums[i-1])) i++;
            else if(sum==target){
                out.add(Arrays.asList(nums[i],nums[j]));
                i++;j--;
            }

        }
        return out;
    }



    public static void main(String[] args){
        int[] data={-3,-2,-1,0,0,1,2,3};
        Arrays.sort(data);
        List<List<Integer>> result=(new KSum()).fourSum(data,0);
        System.out.println(result);
    }
}
