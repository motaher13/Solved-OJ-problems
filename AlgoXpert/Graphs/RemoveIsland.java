package AlgoExp.Graphs;

public class RemoveIsland {
    public int[][] removeIslands(int[][] matrix) {
        //
        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[0].length;j++){
                if(matrix[i][j]==1)
                    dfs(matrix, i, j);
                if(i>0 && i<matrix.length-1
                        && (j==0 && matrix[0].length>3))
                    j=matrix[0].length-2;
            }
        }

        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[0].length;j++){
                if(matrix[i][j]==1)
                    matrix[i][j]=0;
                else if(matrix[i][j]==2)
                    matrix[i][j]=1;
            }
        }

        return matrix;
    }

    public static void dfs(int[][] matrix, int i, int j){
        if(i>=matrix.length || i<0 || j>=matrix[0].length || j<0) return;
        if(matrix[i][j]!=1) return;

        matrix[i][j]=2;
        int[][] list={{0, 1}, {0, -1}, {1, 0},{-1, 0}};
        for(int k=0;k<4;k++){
            dfs(matrix, i+list[k][0], j+list[k][1]);
        }
    }
}
