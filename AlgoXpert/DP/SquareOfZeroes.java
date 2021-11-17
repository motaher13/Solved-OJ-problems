package AlgoExp.DP;

import java.util.List;

public class SquareOfZeroes {
    // check the problem hints for explanation

    static Info[][] infoMatrix;
    static int n=0;

    public static boolean squareOfZeroes(List<List<Integer>> matrix) {
        makeInfo(matrix);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int len=2;len<=n-i && len<=n-j;len++){
                    if(isSquare(i, j, len)) return true;
                }
            }
        }

        return false;
    }

    public static boolean isSquare(int i, int j, int len){
        Info curInfo=infoMatrix[i][j];
        if(len<=curInfo.right && len<=curInfo.down){
            Info rightInfo=infoMatrix[i][j+len-1];
            if(len<=rightInfo.down){
                Info downInfo=infoMatrix[i+len-1][j];
                if(len<=downInfo.right)
                    return true;
            }
        }
        return false;
    }

    public static void makeInfo(List<List<Integer>> matrix){
        n=matrix.size();
        infoMatrix=new Info[n][n];
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                Info curInfo=new Info(0,0);
                infoMatrix[i][j]=curInfo;
                if(matrix.get(i).get(j)==1) continue;
                curInfo.right++;
                curInfo.down++;
                if(j+1<n) curInfo.right+=infoMatrix[i][j+1].right;
                if(i+1<n) curInfo.down+=infoMatrix[i+1][j].down;
            }
        }
    }

    static class Info{
        int right, down;
        Info(int right, int down){
            this.right=right;
            this.down=down;
        }
    }
}
