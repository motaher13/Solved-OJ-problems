package AlgoExp.FamousAlgo;

import java.util.*;

public class Dijkstra {

    public static int[] dijkstrasAlgorithm(int start, int[][][] edges) {
        int[] distances=new int[edges.length];
        Arrays.fill(distances, -1);

        PriorityQueue<List<Integer>> pq=new PriorityQueue<>(Comparator.comparingInt(x -> x.get(1)));
        pq.add(new ArrayList<>(Arrays.asList(start,0)));
        distances[start]=0;
        while (!pq.isEmpty()){
            List<Integer> current=pq.poll();
            int curNode=current.get(0);
            int curDist=current.get(1);
            int[][] adjacent=edges[curNode];
            for(int[] vertice:adjacent){
                if(distances[vertice[0]]>curDist+vertice[1]
                        || distances[vertice[0]]==-1){
                    distances[vertice[0]]=curDist+vertice[1];
                    pq.add(new ArrayList<>(Arrays.asList(vertice[0],distances[vertice[0]])));
                }
            }
        }

        return distances;
    }



    public static void main(String[] args){
        int[][][] edges={
                {{1, 7}},
                {{2, 6}, {3, 20}, {4, 3}},
                {{3, 14}},
                {{4, 2}},
                {},
                {},
        };

        int[] out = dijkstrasAlgorithm(0,edges);
        for(int i=0;i<out.length;i++) System.out.printf(out[i]+", ");
    }




}
