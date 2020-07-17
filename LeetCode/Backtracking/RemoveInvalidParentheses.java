package LeetCode.Backtracking;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class RemoveInvalidParentheses {

    Set<String> out=new HashSet<>();

    private void recurse(String s, int index, int left, int right, int leftRem, int rightRem, StringBuilder builder){
        if(index==s.length()){
            if(leftRem==0 && rightRem==0) out.add(builder.toString());
            return;
        }
        char c=s.charAt(index);

        if(c=='(' && leftRem>0)
            recurse(s,index+1,left,right,leftRem-1,rightRem,builder);
        else if(c==')' && rightRem>0)
            recurse(s,index+1,left,right,leftRem,rightRem-1,builder);

        builder.append(c);

        if(c!='(' && c!=')')
            recurse(s,index+1,left,right,leftRem,rightRem,builder);
        else if(c=='(')
            recurse(s,index+1,left+1,right,leftRem,rightRem,builder);
        else if(right<left)
            recurse(s,index+1,left,right+1,leftRem,rightRem,builder);

        builder.deleteCharAt(builder.length()-1);

    }

    public List<String> removeInvalidParentheses(String s) {
        int left=0, right=0;

        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='(') left++;
            else if(s.charAt(i)==')'){
                right= left==0? right+1: right;
                left= left>0? left-1:left;
            }
        }
        this.recurse(s,0,0,0,left,right,new StringBuilder());
        return new ArrayList<>(out);
    }

    public static void main(String[] args) {
        String s=")(";
        List<String> k=(new RemoveInvalidParentheses()).removeInvalidParentheses(s);
        System.out.println(k.toString());
    }
}
