package LeetCode.Array;

public class GameofLife {

    public void gameOfLife(int[][] board) {
        if(board==null || board.length==0) return;
        int[][] change={{0,1},{0,-1},{1,0},{-1,0},{-1,-1},{-1,1},{1,-1},{1,1}};
        int i,j,k,l,m,n,dead,alive;
        for(i=0;i<board.length;i++){
            for(j=0;j<board[0].length;j++){
                dead=0;alive=0;
                for(k=0;k<change.length;k++){
                    m=i+change[k][0];
                    n=j+change[k][1];
                    if(m<0 || m>board.length-1 || n<0 || n>board[0].length-1) continue;
                    if(board[m][n]==0 || board[m][n]==2) dead++;
                    else if(board[m][n]==1 || board[m][n]==3) alive++;
                }
                if(board[i][j]==1 && (alive<2 || alive>3)) board[i][j]=3;
                if(board[i][j]==0 && alive==3) board[i][j]=2;

            }
        }

        for(i=0;i<board.length;i++) {
            for (j = 0; j < board[0].length; j++) {
                if(board[i][j]==2) board[i][j]=1;
                else if(board[i][j]==3) board[i][j]=0;
            }
        }
    }

    public static void main(String[] args) {
        int[][] a={{0,1,0},
              {0,0,1},
              {1,1,1},
              {0,0,0}};

        (new GameofLife()).gameOfLife(a);
        for(int i=0;i<a.length;i++) {
            for (int j = 0; j < a[0].length; j++) {
                System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }

    }
}
