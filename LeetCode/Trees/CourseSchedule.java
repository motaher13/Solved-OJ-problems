package LeetCode.Trees;

import java.util.ArrayList;
import java.util.List;

public class CourseSchedule {
    public boolean canFinish(int numCourses, int[][] prerequisites) {
        List<List<Integer>> graph=new ArrayList<>(numCourses);
        for(int i=0;i<numCourses;i++) graph.add(new ArrayList<>(numCourses));

        for(int i=0;i<prerequisites.length;i++){
            graph.get(prerequisites[i][0]).add(prerequisites[i][1]);
        }

        boolean[] visited=new boolean[numCourses];
        boolean[] recStack=new boolean[numCourses];

        for(int i=0;i<numCourses;i++){
            if(hasCycle(graph,visited,recStack,i)){
                return false;
            }

        }
        return true;
    }

    private boolean hasCycle(List<List<Integer>> graph, boolean[] visited, boolean[] recStack, int m){
        if(recStack[m]) return true;
        if(visited[m]) return false;

        visited[m]=true;recStack[m]=true;

        List<Integer> childs=graph.get(m);
        for(int i:childs){
            if(hasCycle(graph,visited,recStack,i)) return true;
        }

        recStack[m]=false;
        return false;
    }

    public static void main(String[] args) {
        int[][] a={{1,0},{3,4},{4,5}};
        System.out.println((new CourseSchedule()).canFinish(6,a));
    }
}
