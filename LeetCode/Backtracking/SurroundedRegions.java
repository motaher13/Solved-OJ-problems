package LeetCode.Backtracking;

public class SurroundedRegions {

    public void solve(char[][] board) {
        if(board==null || board.length==0 || board[0].length==0) return;

        for(int i=0;i<board.length;i++){
            for (int j=0;j<board[i].length;){
                if(board[i][j]=='O') alter(board,i,j,'O','P');
                if(i==0 || i==board.length-1) j++;
                else if(j==0) j=board[i].length-1;
                else j++;
            }
        }

        for(int i=1;i<board.length-1;i++){
            for(int j=1;j<board[0].length-1;j++){
                if(board[i][j]=='O') board[i][j]='X';
            }
        }

        for(int i=0;i<board.length;i++){
            for (int j=0;j<board[i].length;){
                if(board[i][j]=='P') alter(board,i,j,'P','O');
                if(i==0 || i==board.length-1) j++;
                else if(j==0) j=board[i].length-1;
                else j++;
            }
        }

    }

    private void alter(char[][] board,int i, int j, char target, char c){
        if(i<0 || i>=board.length || j<0 || j>=board[i].length || board[i][j]!=target) return;
        int[][] change={{0,1},{0,-1},{1,0},{-1,0}};
        board[i][j]=c;
        for(int k=0;k<change.length;k++){
            alter(board,i+change[k][0],j+change[k][1],target,c);
        }
    }

    public static void main(String[] args) {
        char[][] board={
                {'O'}
        };

        (new SurroundedRegions()).solve(board);
        for(int i=0;i<board.length;i++){
            for(int j=0;j<board[0].length;j++)
                System.out.print(board[i][j]+" ");
            System.out.println();
        }
    }
}
