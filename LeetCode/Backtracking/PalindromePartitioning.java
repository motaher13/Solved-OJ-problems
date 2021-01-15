package LeetCode.Backtracking;

import java.util.ArrayList;
import java.util.List;

public class PalindromePartitioning {

    public List<List<String>> partition(String s) {
        List<List<String>> out=new ArrayList<>();
        findPartition(s,out,0,new ArrayList<>());
        return out;
    }

    private void findPartition(String s, List<List<String>> out, int index, List<String> current){
        if(index==s.length()){
            out.add(new ArrayList<>(current));
            return;
        }

        for(int i=index;i<s.length();i++){
            if(isPalindrome(s,index,i)){
                String temp=s.substring(index,i+1);
                current.add(temp);
                findPartition(s,out,i+1,current);
                current.remove(current.size()-1);
            }
        }
    }

    private boolean isPalindrome(String s,int p, int q){
        if(p==q) return true;
        while (p<q){
            if(s.charAt(p)!=s.charAt(q)) return false;
            p++;q--;
        }
        return true;
    }

    public static void main(String[] args) {
        String s="abcba";
        List<List<String>> k=(new PalindromePartitioning()).partition(s);
        for(List<String> l:k) System.out.println(l.toString());
    }
}
