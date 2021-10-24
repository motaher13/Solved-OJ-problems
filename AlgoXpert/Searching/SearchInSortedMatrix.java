package AlgoExp.Searching;

public class SearchInSortedMatrix {

    public static int[] searchInSortedMatrix(int[][] matrix, int target) {
        int i=0, j=matrix[0].length-1;
        while(i<matrix.length && j>=0){
            if(target==matrix[i][j]) return new int[]{i, j};
            else if(target<matrix[i][j]) j--;
            else i++;
        }
        return new int[] {-1, -1};
    }
}
