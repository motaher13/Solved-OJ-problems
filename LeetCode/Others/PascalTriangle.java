package LeetCode.Others;

import LeetCode.Trees.BinaryTreeLevelOrderTraversal;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class PascalTriangle {

    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> out = new ArrayList<>();
        if(numRows==0) return out;
        out.add(Arrays.asList(1));
        for(int i=1;i<numRows;i++){
            List<Integer> list=new ArrayList<>();
            for(int j=0;j<=i;j++){
                int left=j-1, right=j, num=0;
                num+= left<0? 0:out.get(i-1).get(left);
                num+= right==i? 0:out.get(i-1).get(right);
                list.add(num);
            }
            out.add(list);
        }
        
        return out;
    }

    public static void main(String[] args) {

        List<List<Integer>> k= (new PascalTriangle()).generate(5);
        for (List<Integer> m:k){
            System.out.println(m.toString());
        }
    }
}
