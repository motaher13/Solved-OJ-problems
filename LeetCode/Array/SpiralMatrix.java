package LeetCode.Array;

import java.util.ArrayList;
import java.util.List;

public class SpiralMatrix {

    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> out=new ArrayList<>();
        if(matrix.length==0) return out;
        int xMax=matrix.length-1,xMin=0;
        int yMax=matrix[0].length-1,yMin=0;
        int i=0,j=0;
        while (xMin<=xMax && yMin<=yMax){
            if(xMin<=xMax && yMin<=yMax) {
                for (j = yMin; j <= yMax; j++)
                    out.add(matrix[i][j]);
                xMin++;
                j--;
            }

            if(xMin<=xMax && yMin<=yMax) {
                for (i = xMin; i <= xMax; i++)
                    out.add(matrix[i][j]);
                yMax--;
                i--;
            }

            if(xMin<=xMax && yMin<=yMax) {
                for (j = yMax; j >= yMin; j--)
                    out.add(matrix[i][j]);
                xMax--;
                j++;
            }

            if(xMin<=xMax && yMin<=yMax) {
                for (i = xMax; i >= xMin; i--)
                    out.add(matrix[i][j]);
                yMin++;
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
