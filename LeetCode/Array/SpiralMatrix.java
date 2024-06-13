class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
      int top = 0, bottom = matrix.length - 1, left = 0, right = matrix[0].length - 1;
      List<Integer> out = new ArrayList<>();

      while (top <= bottom && left <= right) {

        if (top <= bottom && left <= right) {
          for (int j = left; j <= right; j++)
            out.add(matrix[top][j]);
          top++;
        }

        if (top <= bottom && left <= right) {
          for (int i = top; i <= bottom; i++)
            out.add(matrix[i][right]);
          right--;
        }

        if (top <= bottom && left <= right) {
          for (int j = right; j >= left; j--)
            out.add(matrix[bottom][j]);
          bottom--;
        }

        if (top <= bottom && left <= right) {
          for (int i = bottom; i >= top; i--)
            out.add(matrix[i][left]);
          left++;
        }
      }

      return out;
    }
  }