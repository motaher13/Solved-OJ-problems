package LeetCode.SortingandSearching;

import java.util.*;

public class KthSmallestElementinaSortedMatrix {

    public int kthSmallest(int[][] matrix, int k) {
        /* https://medium.com/brain-framework/kth-smallest-element-in-sorted-matrix-b20400cf878e*/
        PriorityQueue<Pair> pq=new PriorityQueue<>((a,b)-> matrix[a.x][a.y]-matrix[b.x][b.y]);
        int count=0;
        Pair p=new Pair(0,0);
        boolean[][] visited=new boolean[matrix.length][matrix[0].length];
        pq.add(p);
        visited[0][0]=true;
        while (pq.size()>0){
            Pair current=pq.poll();
            count++;
            if(count==k) return matrix[current.x][current.y];
            if(current.x+1<matrix.length && !visited[current.x+1][current.y]){
                p=new Pair(current.x+1,current.y);
                visited[current.x+1][current.y]=true;
                pq.add(p);
            }
            if(current.y+1<matrix[0].length && !visited[current.x][current.y+1]){
                p=new Pair(current.x,current.y+1);
                visited[current.x][current.y+1]=true;
                pq.add(p);
            }
        }
        return 0;
    }


    public static void main(String[] args) {
        int[][] matrix = {
                           { 1}
                        };

        System.out.println((new KthSmallestElementinaSortedMatrix()).kthSmallest(matrix,1));
    }
}

class Pair{
    int x;
    int y;
    Pair(int x, int y){
        this.x=x;
        this.y=y;
    }
}
