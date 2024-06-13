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

    public int best(int[] nums) {
        // https://leetcode.com/problems/majority-element/solutions/3676530/3-method-s-beats-100-c-java-python-beginner-friendly/
        // moores voing algorithom
        /*
           when the vote cound zero, we take the current number as candidate.
           and we iterate the whole array, as the candidate occurs more than half time, 
           it outweighs all other  numbers
        */
       
        int count=0, candidate=0;
        
        for(int number:nums){
            if(count==0) candidate=number;
            
            if(number==candidate) count++;
            else count--;
        }
        return candidate;
   }

    public static void main(String[] args) {
        int[] a={1,2,3,4,4,4,4};
        System.out.println((new MajorityElement()).majorityElement(a));
    }
}
