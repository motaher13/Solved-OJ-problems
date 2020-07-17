package LeetCode.Backtracking;

import java.util.ArrayList;
import java.util.List;

public class GenerateParentheses {

    public List<String> generateParenthesis(int n) {
        List<String> list=new ArrayList<>();
        doGenerateParenthesis(list,"",0,0,n);
        return list;
    }

    private void doGenerateParenthesis(List<String>out, String s, int a, int b, int n){
        if(a==b && a==n) out.add(s);
        if((a==b && a==n)) return;

        if(a<n) doGenerateParenthesis(out,s+"(",a+1,b,n);
        if(b<n && b<a) doGenerateParenthesis(out,s+")",a,b+1,n);
    }

    public static void main(String[] args) {
        List<String> k=(new GenerateParentheses()).generateParenthesis(3);
        for(String m:k) System.out.println(m);
    }
}
