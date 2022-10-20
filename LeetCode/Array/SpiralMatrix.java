package LeetCode.Array;

import java.util.ArrayList;
import java.util.List;

public class SpiralMatrix {

    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> out=new ArrayList<>();
        if(matrix.length==0) return out;
        
        int left=0, right=matrix[0].length-1;
        int top=0, bottom=matrix.length-1;
        int i=0, j=0;
        
        while(left<=right && top<=bottom){
            
            if(left<=right && top<=bottom){
                for(j=left;j<=right;j++)
                    out.add(matrix[i][j]);
                top++;
                j--;
            }
            
            if(left<=right && top<=bottom){
                for(i=top;i<=bottom;i++)
                    out.add(matrix[i][j]);
                right--;
                i--;
            }
            
            if(left<=right && top<=bottom){
                for(j=right;j>=left;j--)
                    out.add(matrix[i][j]);
                bottom--;
                j++;
            }
            
            if(left<=right && top<=bottom){
                for(i=bottom;i>=top;i--)
                    out.add(matrix[i][j]);
                left++;
                i++;
            }
        }
        return out;
    }

    public static void main(String[] args) {
        int[][] a={{1,2},{3,4}};

        /*a= new int[][]{{1, 2, 3,4},
                {5, 6,7,8},
                {9,10,11,12}};*/

        List<Integer> k=(new SpiralMatrix()).spiralOrder(a);
        System.out.println(k.toString());
    }
}
