package AlgoExp.Strings;

import java.util.Stack;

public class LongestBalancedSubstring {

    // time O(n) | space O(n)
    public int longestBalancedSubstring(String string) {
        int maxLen=0, openingCount=0, closingCount=0;

        // forward
        for(int i=0;i<string.length();i++){
            System.out.println(maxLen+" ");
            if(string.charAt(i)=='(') openingCount++;
            else closingCount++;

            if(openingCount==closingCount)
                maxLen=Math.max(maxLen,closingCount*2);
            else if(closingCount>openingCount){
                openingCount=0;
                closingCount=0;
            }
        }

        openingCount=0;
        closingCount=0;

        // backward , to handle "()(()" this type of case
        for(int i=string.length()-1;i>=0;i--){
            System.out.println(maxLen+" ");
            if(string.charAt(i)=='(') openingCount++;
            else closingCount++;

            if(openingCount==closingCount)
                maxLen=Math.max(maxLen,closingCount*2);
            else if(openingCount>closingCount){
                openingCount=0;
                closingCount=0;
            }
        }



        return maxLen;
    }

    // time O(n) | space O(n)
    public int longestBalancedSubstringA(String string) {
        int mxCount=0;
        Stack<Integer> stack=new Stack<>();
        stack.push(-1);

        for(int i=0;i<string.length();i++){
            char c=string.charAt(i);
            if(c=='(')
                stack.push(i);
            else{
                stack.pop();
                if(stack.size()==0) stack.push(i);
                else{
                    int startIdx=stack.peek();
                    int curLen=i-startIdx;
                    mxCount=Math.max(mxCount, curLen);
                }
            }
        }

        return mxCount;

    }

    public static void main(String[] args){
        System.out.println((new LongestBalancedSubstring()).longestBalancedSubstring(
                "()(()"
        ));
    }
}
