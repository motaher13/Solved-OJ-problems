package AlgoExp.Graphs;

import java.util.*;

public class AirportConnections4 {
    /*
     * as the graph is directed, we will keep a set called startNodes,
     * if the node is recheable from some other node, it will be removed
     * the last answer will be the count of actual starting points-1;
     */

    public static int airportConnections(
            List<String> airports, List<List<String>> routes, String startingAirport) {

        Map<String, List<String>> graph=makeGraph(routes);
        Set<String> visited=new HashSet<>();
        Set<String> startNodes=new HashSet<>();

        dfs(graph, visited, startNodes, startingAirport, startingAirport);
        startNodes.add(startingAirport);

        for(String node:airports){
            if(!visited.contains(node)){
                dfs(graph, visited, startNodes, node, startingAirport);
                startNodes.add(node);
            }
        }

        return startNodes.size()-1;



    }

    public static void dfs(
            Map<String, List<String>> graph,
            Set<String> visited, Set<String> startNodes,
            String node, String start){

        if(visited.contains(node)){
            if(startNodes.contains(node) && !node.equals(start))
                startNodes.remove(node);
            return;
        }
        visited.add(node);

        List<String> children=graph.getOrDefault(node, new ArrayList<>());
        for(String child:children)
            dfs(graph, visited, startNodes, child, start);


    }

    public static Map<String, List<String>> makeGraph(List<List<String>> routes){
        Map<String, List<String>> graph=new HashMap<>();
        for(List<String> route:routes){
            List<String> children=graph.getOrDefault(route.get(0), new ArrayList<>());
            children.add(route.get(1));
            graph.put(route.get(0), children);
        }
        return graph;
    }
}
