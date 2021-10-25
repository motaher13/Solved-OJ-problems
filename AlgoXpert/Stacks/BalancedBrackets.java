package AlgoExp.Stacks;

import java.util.Stack;

public class BalancedBrackets {
    public static boolean balancedBrackets(String str) {
        Stack<Character> stack=new Stack<>();
        for(char c:str.toCharArray()){
            if(c==')' || c=='}' ||c==']'){
                if(stack.isEmpty()) return false;
                char d=stack.pop();
                if((c==')' && d!='(') || (c=='}' && d!='{')|| (c==']' && d!='['))
                    return false;
            }else if(c=='(' || c=='{' ||c=='['){
                stack.push(c);
            }
        }
        return stack.size()==0;
    }
}
