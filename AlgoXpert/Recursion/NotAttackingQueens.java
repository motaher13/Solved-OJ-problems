package AlgoExp.Recursion;

import java.util.HashSet;
import java.util.Set;

class BestNotAttackingQueens {
    // Upper Bound: O(n!) time | O(n) space - where n is the input number

    Set<Integer> blockedColumns = new HashSet<>();
    Set<Integer> blockedADiagonal = new HashSet<>(); /* the / diagonal */
    Set<Integer> blockedVDiagonal = new HashSet<>(); /* the \ diagonal */

    public int nonAttackingQueens(int n) {
        blockedColumns.clear();
        blockedADiagonal.clear();
        blockedVDiagonal.clear();
        return countQueenPos(0, n);
    }

    public int countQueenPos(int row, int n){
        if(row==n) return 1;

        int sum=0;
        for(int col=0;col<n;col++){
            if(isNonAttackingPos(row, col)){
                placeQueen(row, col);
                sum+=countQueenPos(row+1, n);
                removeQueen(row, col);
            }
        }
        return sum;
    }

    public boolean isNonAttackingPos(int row, int col){
        return !blockedColumns.contains(col) &&
                !blockedADiagonal.contains(row+col)&&
                !blockedVDiagonal.contains(row-col);
    }

    public void placeQueen(int row, int col){
        blockedColumns.add(col);
        blockedADiagonal.add(row+col);
        blockedVDiagonal.add(row-col);
    }

    public void removeQueen(int row, int col){
        blockedColumns.remove(col);
        blockedADiagonal.remove(row+col);
        blockedVDiagonal.remove(row-col);
    }
}




public class NotAttackingQueens {
    // Lower Bound: O(n!) time | O(n) space - where n is the input number
    public int nonAttackingQueens(int n) {
        // Each index of `columnPlacements` represents a row of the chessboard,
        // and the value at each index is the column (on the relevant row) where
        // a queen is currently placed.
        int[] columnPlacements = new int[n];
        return getNumberOfNonAttackingQueenPlacements(0, columnPlacements, n);
    }

    public int getNumberOfNonAttackingQueenPlacements(
            int row, int[] columnPlacements, int boardSize) {
        if (row == boardSize) return 1;

        int validPlacements = 0;
        for (int col = 0; col < boardSize; col++) {
            if (isNonAttackingPlacement(row, col, columnPlacements)) {
                columnPlacements[row] = col;
                validPlacements +=
                        getNumberOfNonAttackingQueenPlacements(row + 1, columnPlacements, boardSize);
            }
        }

        return validPlacements;
    }

    // As `row` tends to `n`, this becomes an O(n)-time operation.
    public boolean isNonAttackingPlacement(int row, int col, int[] columnPlacements) {
        for (int previousRow = 0; previousRow < row; previousRow++) {
            int columnToCheck = columnPlacements[previousRow];
            boolean sameColumn = (columnToCheck == col);
            boolean onDiagonal = Math.abs(columnToCheck - col) == (row - previousRow);
            if (sameColumn || onDiagonal) {
                return false;
            }
        }

        return true;
    }
}
