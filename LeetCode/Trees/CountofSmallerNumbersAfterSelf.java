package LeetCode.Trees;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;

public class CountofSmallerNumbersAfterSelf {

    public List<Integer> countSmaller(int[] nums) {
        /*
        * https://www.youtube.com/watch?v=buDoT9ESw1c
        * */
        List<Integer> res=new ArrayList<>();
        if(nums==null || nums.length==0) return res;

        FNode head=new FNode(nums[nums.length-1]);
        head.priCount =1;
        res.add(0);

        for(int i=nums.length-2;i>=0;i--){
            int count=insertNode(head,nums[i]);
            res.add(count);
        }

        Collections.reverse(res);
        return res;
    }

    private int insertNode(FNode root, int val){
        FNode current=new FNode(val);
        current.priCount =1;
        int count=0;

        while (true){
            if(current.val>root.val){
                count+=root.priCount;
                if(root.right==null){
                    root.right=current;
                    break;
                }else {
                    root=root.right;
                }
            }else {
                root.priCount++;
                if(root.left==null){
                    root.left=current;
                    break;
                }else {
                    root=root.left;
                }
            }
        }
        return count;
    }


    public static void main(String[] args) {
        int[] a={10,3,6,7,5};
        List<Integer> out=(new CountofSmallerNumbersAfterSelf()).countSmaller(a);
        for(int i:out) System.out.print(i+" ");
        System.out.println();
    }
}

class FNode{
    int val;
    int priCount;
    FNode left;
    FNode right;
    FNode(int val){
        this.val=val;
    }
}