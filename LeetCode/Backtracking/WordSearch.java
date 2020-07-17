package LeetCode.Backtracking;

public class WordSearch {

    public boolean exist(char[][] board, String word) {
        for(int i=0;i<board.length;i++){
            for (int j=0;j<board[0].length;j++){
                if(board[i][j]==word.charAt(0) && checkExists(board,word,i,j,0))
                    return true;
            }
        }
        return false;
    }

    private boolean checkExists(char[][] board, String word,int i, int j, int n){
        if(i<0 || i>=board.length || j<0 || j>=board[0].length || board[i][j]!=word.charAt(n)) return false;
        else if(n==word.length()-1) return true;

        int[][] addition={{1,0},{-1,0},{0,1},{0,-1}};
        boolean success=false;
        char temp=board[i][j];
        board[i][j]=' ';

        for(int k=0;k<4;k++){
            success=checkExists(board,word,i+addition[k][0],j+addition[k][1],n+1);
            if(success) return true;
        }

        board[i][j]=temp;
        return false;
    }

    public static void main(String[] args) {
        char[][] board = {
                          {'A','A'}
                        };
        boolean k=(new WordSearch()).exist(board,"AAA");
        System.out.println(k);
    }
}
