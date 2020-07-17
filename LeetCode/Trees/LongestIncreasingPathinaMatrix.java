package LeetCode.Trees;

public class LongestIncreasingPathinaMatrix {


    public int longestIncreasingPath(int[][] matrix) {
        if(matrix==null || matrix.length==0 || matrix[0].length==0) return 0;
        int[][] lenM= new int[matrix.length][matrix[0].length];

        int mxL=0;
        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[0].length;j++){
                mxL=Math.max(mxL,findLongest(matrix,lenM,i,j));
            }
        }
        return mxL;
    }

    private int findLongest(int[][] matrix, int[][] lenM, int m, int n){
        if(lenM[m][n]!=0) return lenM[m][n];
        int[][] check={{0,1},{0,-1},{1,0},{-1,0}};

        int mxf=0;
        lenM[m][n]=1;
        for(int i=0;i<check.length;i++){
            int a=m+check[i][0], b=n+check[i][1];
            if(a<0 || a>=matrix.length || b<0 || b>=matrix[0].length) continue;
            if(matrix[a][b]<matrix[m][n])
                mxf=Math.max(mxf,findLongest(matrix,lenM,a,b));
        }
        lenM[m][n]+=mxf;
        return lenM[m][n];
    }



    public static void main(String[] args) {
        int[][] a={
                {1,1,5},
                {1,2,1}
        };

        System.out.println((new LongestIncreasingPathinaMatrix()).longestIncreasingPath(a));

    }
}
