package LeetCode.Trees;

public class NumberofIslands {

    public int numIslands(char[][] grid) {
        int count=0;
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[i].length;j++){
                if(grid[i][j]=='1'){
                    count++;
                    visitNumIslands(grid,i,j);
                }
            }
        }
        return count;
    }

    private void visitNumIslands(char[][] grid,int i,int j){
        grid[i][j]='0';
        if(i>0 && grid[i-1][j]=='1') visitNumIslands(grid,i-1,j);
        if(i<grid.length-1 && grid[i+1][j]=='1') visitNumIslands(grid,i+1,j);

        if(j>0 && grid[i][j-1]=='1') visitNumIslands(grid,i,j-1);
        if(j<grid[i].length-1 && grid[i][j+1]=='1') visitNumIslands(grid,i,j+1);
    }


    public static void main(String[] args) {
        char[][] grid={{'1','1','1','1','0'},
                    {'1','1','0','1','0'},
                    {'1','1','0','0','0'},
                    {'0','0','0','1','1'}};

        int k=(new NumberofIslands()).numIslands(grid);
        System.out.println(k);
    }
}
