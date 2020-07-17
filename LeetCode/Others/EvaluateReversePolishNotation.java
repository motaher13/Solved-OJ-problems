package LeetCode.Others;

import java.util.Stack;

public class EvaluateReversePolishNotation {

    public int evalRPN(String[] tokens) {
        if(tokens==null || tokens.length==0) return 0;
        Stack<Integer> stk=new Stack();
        for(int i=0;i<tokens.length;i++){
            if(tokens[i].equals("+")){
                int a= stk.pop()+stk.pop();
                stk.push(a);
            }else if(tokens[i].equals("*")){
                int a= stk.pop()*stk.pop();
                stk.push(a);
            }else if(tokens[i].equals("-")){
                int c=stk.pop(),b=stk.pop();
                int a=b-c;
                stk.push(a);
            }else if(tokens[i].equals("/")){
                int c=stk.pop(),b=stk.pop();
                int a=b/c;
                stk.push(a);
            }else{
                stk.push(Integer.parseInt(tokens[i]));
            }
        }
        return stk.pop();
    }

    public static void main(String[] args) {
        String[] s={"1", "0", "+"};
        System.out.println((new EvaluateReversePolishNotation()).evalRPN(s));
    }
}
