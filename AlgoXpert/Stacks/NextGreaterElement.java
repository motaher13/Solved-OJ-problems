package AlgoExp.Stacks;

import java.util.Arrays;
import java.util.Stack;

public class NextGreaterElement {
    /* https://leetcode.com/problems/next-greater-element-ii/solution/
		follow the .gif to undertand
		what happening is: take an array out and Stack stack to hold indexes, start iterating
		main array from right to left an put data in out accordingly,
		1. if the stack is empty, put current index in it,
		2. if current array value is equal to the value for stack top, add the value to out
		3. if current array value is less than value for stack top, stack top to out and put
				array current idx in stack
		4. if current array value is greater that value of stack top, pop and repeat 3 untill
			stack is empty
		5. is stack is empty, put array current idx in stack

		do the 1 to 5 twice to get the rotation effect
		*/

    public int[] nextGreaterElement(int[] array) {
        int[] out=new int[array.length];
        Arrays.fill(out, -1);
        Stack<Integer> stack=new Stack<>();

        doIterate(array, out, stack);
        doIterate(array, out, stack);
        return out;
    }

    public void doIterate(int[] array, int[] out, Stack<Integer> stack) {
        for(int i=array.length-1;i>=0;i--){
            while(!stack.isEmpty()){
                int j=stack.peek();
                if(array[j]>array[i]){
                    out[i]=array[j];
                    break;
                }
                else stack.pop();
            }
            stack.push(i);
        }
    }
}
