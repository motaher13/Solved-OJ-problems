package AlgoExp.Stacks;

import java.util.ArrayList;
import java.util.List;

public class MinMaxStack {
    List<Integer[]> minMaxStack=new ArrayList<>();
    List<Integer> stack=new ArrayList<>();

    public int peek() {
        // Write your code here.
        return stack.get(stack.size()-1);
    }

    public int pop() {
        minMaxStack.remove(minMaxStack.size()-1);
        return stack.remove(stack.size()-1);
    }

    public void push(Integer number) {
        stack.add(number);
        Integer[] prevMinMax={Integer.MAX_VALUE, Integer.MIN_VALUE};
        if(minMaxStack.size()>0)
            prevMinMax=minMaxStack.get(minMaxStack.size()-1);
        Integer[] newMinMax={Math.min(prevMinMax[0], number), Math.max(prevMinMax[1], number)};
        minMaxStack.add(newMinMax);
    }

    public int getMin() {
        return minMaxStack.get(minMaxStack.size()-1)[0];
    }

    public int getMax() {
        return minMaxStack.get(minMaxStack.size()-1)[1];
    }
}
