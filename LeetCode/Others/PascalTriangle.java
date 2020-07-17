package LeetCode.Others;

import LeetCode.Trees.BinaryTreeLevelOrderTraversal;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class PascalTriangle {

    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> k = new ArrayList<>();
        if (numRows == 0) return k;
        List<Integer> first = new ArrayList<>(Arrays.asList(1));
        k.add(first);
        if (numRows == 1) return k;

        for (int i = 1; i < numRows; i++) {
            List<Integer> f = k.get(i - 1);
            List<Integer> g = new ArrayList<>();
            g.add(1);
            for (int j = 1; j < i; j++)
                g.add(f.get(j - 1) + f.get(j));
            g.add(1);
            k.add(g);
        }
        return k;
    }

    public static void main(String[] args) {

        List<List<Integer>> k= (new PascalTriangle()).generate(5);
        for (List<Integer> m:k){
            System.out.println(m.toString());
        }
    }
}
