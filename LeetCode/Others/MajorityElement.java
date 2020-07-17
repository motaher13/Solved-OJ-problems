package LeetCode.Others;

import java.util.HashMap;

public class MajorityElement {
    public int majorityElement(int[] nums) {
        int n=(nums.length/2)+1;
        int max=0,maxn=0;
        HashMap<Integer,Integer> map=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            map.put(nums[i],map.getOrDefault(nums[i],0)+1);
            int j=map.get(nums[i]);
            if(j>max){
                max=j;
                maxn=nums[i];
            }
        }
        return maxn;
    }

    public static void main(String[] args) {
        int[] a={1,2,3,4,4,4,4};
        System.out.println((new MajorityElement()).majorityElement(a));
    }
}
