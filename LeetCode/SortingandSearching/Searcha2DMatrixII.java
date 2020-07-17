package LeetCode.SortingandSearching;

public class Searcha2DMatrixII {

    public boolean searchMatrix(int[][] matrix, int target) {
        if(matrix.length==0) return false;

        int i=0,j=matrix[0].length-1;
        while (i<matrix.length && j>=0){
            if(matrix[i][j]==target) return true;
            else if(matrix[i][j]>target) j--;
            else if(matrix[i][j]<target) i++;
        }

        return false;
    }

    public static void main(String[] args) {
        int[][] bb= {{1,2,3,4,5},
                    {6,7,8,9,10},
                    {11,12,13,14,15},
                    {16,17,18,19,20},
                    {21,22,23,24,25}};

        int[][] arr= {{ 1, 4, 7, 11, 15},
                        {2, 5, 8, 12, 19},
                        {3, 6, 9, 16, 22},
                        {10, 13, 14, 17, 24},
                        {18, 21, 23, 26, 30}};


        boolean k=(new Searcha2DMatrixII()).searchMatrix(arr,5);
        System.out.println(k);
    }
}
