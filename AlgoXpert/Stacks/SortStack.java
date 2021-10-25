package AlgoExp.Stacks;

import java.util.ArrayList;

public class SortStack {
    public ArrayList<Integer> sortStack(ArrayList<Integer> stack) {
        if(stack.size()<=1) return stack;
        int top=stack.remove(stack.size()-1);
        sortStack(stack);
        insertSortedOrder(stack, top);
        return stack;
    }

    public void insertSortedOrder(ArrayList<Integer> stack, int num) {
        if(stack.size()==0 || stack.get(stack.size()-1)<=num){
            stack.add(num);
            return;
        }
        int top=stack.remove(stack.size()-1);
        insertSortedOrder(stack, num);
        stack.add(top);
    }

}
