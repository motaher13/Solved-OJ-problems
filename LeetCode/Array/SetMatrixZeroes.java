package LeetCode.Array;

public class SetMatrixZeroes {

    public void setZeroes(int[][] matrix) {
        boolean isRow=false;
        int r=matrix.length;
        int c=matrix[0].length;

        int i,j;

        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(matrix[i][j]==0) {
                    if (i == 0) isRow = true;
                    else{
                        matrix[i][0]=0;
                        matrix[0][j]=0;
                    }
                }
            }
        }

        for(i=1;i<r;i++){
            for(j=1;j<c;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0) matrix[i][j]=0;
            }
        }

        if(matrix[0][0]==0){
            for(i=1;i<r;i++)
                matrix[i][0]=0;
        }

        if(isRow){
            for(j=0;j<c;j++)
                matrix[0][j]=0;
        }


    }

    public static void main(String[] args){
        int[][] a={
                {8,1,2,0},
                {3,4,5,2},
                {1,3,1,5}
        };

        (new SetMatrixZeroes()).setZeroes(a);
        for(int i=0;i<a.length;i++){
            for(int j=0;j<a[i].length;j++){
                System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }
    }


}
