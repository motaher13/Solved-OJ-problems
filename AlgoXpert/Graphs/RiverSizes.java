package AlgoExp.Graphs;

import java.util.ArrayList;
import java.util.List;

public class RiverSizes {
    public static List<Integer> riverSizes(int[][] matrix) {
        List<Integer> out=new ArrayList<>();
        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[0].length;j++){
                if(matrix[i][j]==1)
                    out.add(dfs(matrix, i, j));
            }
        }
        return out;
    }

    public static int dfs(int[][] matrix, int i, int j){
        if(i>=matrix.length || i<0 || j>=matrix[0].length || j<0) return 0;
        if(matrix[i][j]!=1) return 0;

        matrix[i][j]=2;
        int[][] list={{0, 1}, {0, -1}, {1, 0},{-1, 0}};
        int sum=1;
        for(int k=0;k<4;k++){
            sum+=dfs(matrix, i+list[k][0], j+list[k][1]);
        }
        return sum;

    }
}
