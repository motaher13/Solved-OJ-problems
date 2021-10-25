package AlgoExp.Stacks;

import java.util.ArrayList;
import java.util.Stack;

public class SunsetViews {
    public ArrayList<Integer> sunsetViews(int[] buildings, String direction) {
        int mxHeight=Integer.MIN_VALUE;
        ArrayList<Integer> out=new ArrayList<>();
        Stack<Integer> stack=new Stack<>();

        boolean forward=!direction.equals("EAST");
        int i=forward? 0:buildings.length-1;
        while(i<buildings.length && i>=0){
            if(buildings[i]>mxHeight){
                if(forward) out.add(i);
                else stack.add(i);
                mxHeight=buildings[i];
            }
            i=forward? i+1:i-1;
        }

        while(!stack.isEmpty()) out.add(stack.pop());
        return out;
    }
}
