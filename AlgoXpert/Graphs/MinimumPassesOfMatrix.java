package AlgoExp.Graphs;

import java.util.LinkedList;
import java.util.Queue;

public class MinimumPassesOfMatrix {
    public int minimumPassesOfMatrix(int[][] matrix) {
        Queue<Item> que=new LinkedList<>();
        int count=0;
        for(int i=0;i<matrix.length;i++)
            for(int j=0;j<matrix[0].length;j++)
                if(matrix[i][j]>0)
                    que.add(new Item(i, j));

        int size=que.size(); // saving count to catch the end of each level
        int[][] dirList={{1, 0},{-1, 0}, {0, 1}, {0, -1}};
        while(!que.isEmpty()){
            Item curItem=que.remove();
            size--;
            for(int k=0;k<4;k++){
                int nextX=curItem.x+dirList[k][0];
                int nextY=curItem.y+dirList[k][1];
                if(nextX<0 || nextY<0 || nextX>=matrix.length || nextY>=matrix[0].length)
                    continue;
                if(matrix[nextX][nextY]<0){
                    matrix[nextX][nextY]*=-1;
                    que.add(new Item(nextX, nextY));
                }

            }

            if(size==0 && !que.isEmpty()){
                count++;
                size=que.size();
            }
        }

        for(int i=0;i<matrix.length;i++)
            for(int j=0;j<matrix[0].length;j++)
                if(matrix[i][j]<0)
                    return -1;

        return count;
    }


    static class Item{
        int x;int y;
        public Item(int x, int y){
            this.x=x;
            this.y=y;
        }
    }
}
