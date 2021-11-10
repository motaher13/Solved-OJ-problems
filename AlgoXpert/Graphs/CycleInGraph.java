package AlgoExp.Graphs;

import java.util.Arrays;

public class CycleInGraph {
    public boolean cycleInGraph(int[][] edges) {
        boolean[] visited=new boolean[edges.length];
        boolean[] curStack=new boolean[edges.length];
        Arrays.fill(visited, false);
        Arrays.fill(curStack, false);

        for(int node=0;node<edges.length;node++){
            if(dfs(edges, visited, curStack, node))
                return true;
        }
        return false;
    }

    public static boolean dfs(int[][] edges, boolean[] visited, boolean[] curStack, int node){
        if(curStack[node]) return true;
        if(visited[node]) return false;

        visited[node]=true;
        curStack[node]=true;

        for(int curNode:edges[node]){
            if(dfs(edges, visited, curStack, curNode))
                return true;
        }
        curStack[node]=false;

        return false;
    }
}
