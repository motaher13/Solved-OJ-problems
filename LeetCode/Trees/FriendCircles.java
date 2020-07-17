package LeetCode.Trees;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;

public class FriendCircles {

    public int findCircleNum(int[][] M) {
        int count=0;
        boolean[] visited=new boolean[M.length];
        for(int i=0;i<M.length;i++){
            if(!visited[i]){
                count++;
                dfs(i,M,visited);
            }
        }
        return count;
    }

    private void dfs(int i, int[][]M,boolean[] visited){
        visited[i]=true;
        for(int j=0;j<M.length;j++){
            if(M[i][j]==1 && !visited[j] && i!=j){
                visited[j]=true;
                dfs(j,M,visited);
            }
        }
    }

    private void merge(int n,int m,int[] parent,int[][] M){
        for(int i=0;i<parent.length;i++){
            if(M[i][n]==1 && parent[i]!=m){
                parent[i]=m;
                merge(i,m,parent,M);
            }
        }
    }

    public static void main(String[] args) {
        int[][] a={{1,0,0,0,0,0,0},
                   {0,1,1,0,0,0,0},
                   {0,1,1,0,0,0,0},
                   {0,0,0,1,1,0,0},
                   {0,0,0,1,1,0,1},
                   {0,0,0,0,0,1,0},
                   {0,0,0,0,1,0,1}};

        int[][] b={{1,1,1},
                   {1,1,1},
                   {1,1,1}};

        System.out.println((new FriendCircles()).findCircleNum(b));
    }
}
