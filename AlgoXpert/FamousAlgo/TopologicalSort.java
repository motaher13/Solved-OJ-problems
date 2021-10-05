package AlgoExp.FamousAlgo;

import java.util.*;

public class TopologicalSort {

    public static List<Integer> topologicalSort(List<Integer> jobs, List<Integer[]> deps) {
        // in the pair, the first one prerequisite of 2nd one;
        // create graph
        Map<Integer,List<Integer>> graph=new HashMap<>();
        for(Integer[] edge:deps){
            List<Integer> prerequisite=graph.getOrDefault(edge[1], new ArrayList<>());
            prerequisite.add(edge[0]);
            graph.put(edge[1],prerequisite);
        }
        List<Integer>sequence=new ArrayList<>();
        Map<Integer,Boolean> visited=new HashMap();
        Map<Integer,Boolean> recStack=new HashMap(); // recursion stack

        for(int node:jobs){
            if(hasCycle(graph,visited,recStack,node,sequence)){
                return new ArrayList<>();
            }
        }

        return sequence;
    }


    public static boolean hasCycle(
            //check cycle and create the sequence using dfs
            Map<Integer,List<Integer>> graph,
            Map<Integer,Boolean> visited,
            Map<Integer,Boolean> recStack,
            int node,
            List<Integer>sequence){

        if(recStack.get(node)!=null &&recStack.get(node)) return true; //found back a previous node in same loop, so, cycle.
        if(visited.get(node)!=null &&visited.get(node)) return false; // already visited

        visited.put(node,true);
        recStack.put(node,true);
        List<Integer> prerequisite=graph.getOrDefault(node, new ArrayList<>());
        for(int vertice:prerequisite){
            if(hasCycle(graph,visited,recStack,vertice,sequence)) return true;
        }


        recStack.put(node,false);
        sequence.add(node);
        return false;

    }

    public static void main(String[] args){
        List<Integer> jobs= Arrays.asList(1, 2, 3, 4);
        List<Integer[]> deps=new ArrayList<>();
        deps.add(new Integer[]{1, 2});
        deps.add(new Integer[]{1, 3});
        deps.add(new Integer[]{3, 2});
        deps.add(new Integer[]{4, 2});
        deps.add(new Integer[]{4, 3});

        System.out.println(topologicalSort(jobs,deps));
    }
}
