package AlgoExp.Graphs;

import java.util.Arrays;

public class TwoEdgeConnectedGraph4 {
    /*
     * the type of edges
     * treeEdge: the edge that connects current node wih rest of the grapth
     * backEdge: the edge that connects the current node with a far back ancestor
     * ......
     */

    /*
     * here, we will start a dfs, and give incremental value to each node as
     * we go on. on the way if we could find an edge from curNode to a node
     * (other than its parentNode, doesn't matter ancestor or predecessor)
     * with less value,we will update curNode value with it,
     * it acutally means that there is actually two way to reach the curNode from
     * start. from its parent and from other way around.
     * while returning from a node, if the arriving value and current value
     * are the same, meaning the value isn't updated, that means there is only one
     * way to reach this node, that's from its parent. then it's a bridge
     * ** this logic won't be applied on the starting node.**
     */

    public boolean twoEdgeConnectedGraph(int[][] edges) {
        if(edges.length==0) return true;

        int[] values=new int[edges.length];
        Arrays.fill(values, -2);
        int startNode=0;
        int parentNode=-1;
        int startValue=0;
        calculateValues(edges, values, startNode, parentNode, startValue);
        if(values[startNode]==-1) return false;

        return areAllNodesVisited(values);

    }


    public void calculateValues(
            int[][] edges, int[] values, int curNode,
            int parentNode, int curValue){

        values[curNode]=curValue; // to handle loopback
        int minValue=curValue;

        for(int childNode:edges[curNode]){
            if(childNode==parentNode) continue;

            // -2 means haven't calculated
            if(values[childNode]==-2)
                calculateValues(edges, values, childNode, curNode, curValue+1);

            minValue=Math.min(minValue,values[childNode]);
            if(minValue==-1) break;
        }

        // parent -1 means starting node, then no way to decrease the curValue
        if(minValue==curValue && parentNode!=-1) minValue=-1;
        values[curNode]=minValue;
    }


    public boolean areAllNodesVisited(int[] values){
        for(int value:values)
            if(value==-2) return false;
        return true;
    }
}
