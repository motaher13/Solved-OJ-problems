package AlgoExp.Stacks;

import java.util.ArrayList;
import java.util.List;
import java.util.Stack;

public class LargestRectangleUnderSkyline {

    public int largestRectangleUnderSkyline(ArrayList<Integer> buildings) {
        // https://www.geeksforgeeks.org/largest-rectangle-under-histogram/
        // simulate the code for below input to understand
        // [1,3,3,2,4,1,5,3,2]

        Stack<Integer> stack=new Stack<>();
        int maxArea=0;

        List<Integer> extendedBuildings=new ArrayList<>(buildings);
        extendedBuildings.add(0);
        // adding extra element to handle the case when the stack has elemnts left
        // when iterating the buildings array is done, the value is '0' so that the
        // value is very low so that we can get another on the remaining elements

        for(int i=0;i<extendedBuildings.size();i++){
            int curHeight=extendedBuildings.get(i);
            while(!stack.isEmpty() &&
                    curHeight<=extendedBuildings.get(stack.peek())){
                int pillarHeight=extendedBuildings.get(stack.peek());
                stack.pop();
                // if we find a height with <= pre height, the prev height cant continue to
                // create histogram, so we pop it and calculate the histogram from the pillar
                // before and and after it with size with it's size or heigher
                int width=stack.isEmpty()? i:i-stack.peek()-1; // 2nd part because the boundaries are excluded
                maxArea = Math.max(maxArea, width*pillarHeight);

            }

            stack.push(i);
        }

        return maxArea;
    }
}
