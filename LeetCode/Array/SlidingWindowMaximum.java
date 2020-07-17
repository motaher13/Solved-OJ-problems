package LeetCode.Array;

import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Deque;
import java.util.List;

public class SlidingWindowMaximum {

    public int[] maxSlidingWindow(int[] nums, int k) {
        List<Integer> list=new ArrayList<>();

        Deque<Pair> dq=new ArrayDeque<>();
        for(int i=0;i<nums.length;i++){
            while (dq.size()>0 && dq.getLast().val<=nums[i]) dq.removeLast();
            dq.addLast(new Pair(nums[i],i));
            while (dq.size()>0 && dq.getFirst().pos<=(i-k)) dq.removeFirst();
            if(i>=k-1) list.add(dq.getFirst().val);
        }

        int[] out=new int[list.size()];
        for(int i=0;i<list.size();i++) out[i]=list.get(i);
        return out;
    }

    public static void main(String[] args) {
        int[] a={1,3,-1,-3,5,3,6,7};
        int[] b=(new SlidingWindowMaximum()).maxSlidingWindow(a,3);
        for(int i=0;i<b.length;i++) System.out.print(b[i]+" ");
    }
}

class Pair{
    int val;
    int pos;
    Pair(int val,int pos){
        this.val=val;
        this.pos=pos;
    }
}
