package LeetCode.BiweeklyContest27;

import LeetCode.String.LongestCommonPrefix;

import java.util.HashSet;
import java.util.Set;

public class CheckIfaStringContainsAllBinaryCodesofSizeK {

    public boolean hasAllCodes(String s, int k) {
        Set<String> set=new HashSet<>();
        for(int i=0;i<=s.length()-k;i++){
            String lk=s.substring(i,i+k);
            set.add(lk);
        }
        return set.size()==(1<<k);
    }

    public static void main(String[] args){
        String s="0000000001011100";
        boolean k=(new CheckIfaStringContainsAllBinaryCodesofSizeK()).hasAllCodes(s,4);
        System.out.println(k);
    }
}
