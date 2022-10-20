package testPackage;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Test {
    public static boolean isValidSudoku(char[][] board) {
        int n=9;
        int[] rows = new int[n];
        int[] cols = new int[n];
        int[] boxs = new int[n];

        for(int r=0;r<n;r++){
            for(int c=0;c<n;c++){
                if(board[r][c]=='.') continue;

                int val=board[r][c]-'0';
                int pos=1<<(val-1);

                if((rows[r] & pos)>0) return false;
                rows[r]|=pos;

                if((cols[c] & pos)>0) return false;
                cols[c]|=pos;

                int x = (r/3)*3+(c/3);
                if((boxs[x] & pos)>0) return false;
                boxs[x]|=pos;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        char[][] board = {{'8','3','.','.','7','.','.','.','.'}
                ,{'6','.','.','1','9','5','.','.','.'}
                ,{'.','9','8','.','.','.','.','6','.'}
                ,{'8','.','.','.','6','.','.','.','3'}
                ,{'4','.','.','8','.','3','.','.','1'}
                ,{'7','.','.','.','2','.','.','.','6'}
                ,{'.','6','.','.','.','.','2','8','.'}
                ,{'.','.','.','4','1','9','.','.','5'}
                ,{'.','.','.','.','8','.','.','7','9'}};
        System.out.println(isValidSudoku(board));

    }

}
