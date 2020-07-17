package LeetCode.Array;

import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;
import java.util.Stack;

public class BasicCalculatorII {

    public int calculate(String s) {
        if(s==null || s.length()==0) return 0;
        Stack<Integer> stk=new Stack<>();
        Set<Character> signs=new HashSet<>(Arrays.asList('+','-','*','/'));
        char preSign='n';
        int build=0;
        for(int i=0;i<s.length();i++){
            char c=s.charAt(i);
            if(c>='0' && c<='9'){
                build=build*10+(c-'0');
            }
            if(signs.contains(c) || i==s.length()-1){
                if(preSign=='n' || preSign=='+'){
                    stk.push(build);
                }else if(preSign=='-'){
                    stk.push(0-build);
                }else if(preSign=='*'){
                    int temp=stk.pop();
                    stk.push(temp*build);
                }else if(preSign=='/'){
                    int temp=stk.pop();
                    stk.push(temp/build);
                }
                build=0;
                if(signs.contains(c)) preSign=c;
            }

        }
        build=0;
        while (stk.size()>0){
            build+=stk.pop();
        }
        return build;
    }

    public static void main(String[] args) {
        String s="3";
        System.out.println((new BasicCalculatorII()).calculate(s));
    }
}
