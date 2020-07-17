package LeetCode.Trees;

import java.util.ArrayList;
import java.util.List;

public class CourseScheduleII {

    public int[] findOrder(int numCourses, int[][] prerequisites) {
        List<List<Integer>> graph=new ArrayList<>(numCourses);
        for(int i=0;i<numCourses;i++) graph.add(new ArrayList<>(numCourses));

        for(int i=0;i<prerequisites.length;i++){
            graph.get(prerequisites[i][0]).add(prerequisites[i][1]);
        }
        List<Integer>sequence=new ArrayList<>();

        boolean[] visited=new boolean[numCourses];
        boolean[] recStack=new boolean[numCourses];

        for(int i=0;i<numCourses;i++){
            if(hasCycle(graph,visited,recStack,i,sequence)){
                return new int[0];
            }
        }

        int[] out=new int[sequence.size()];
        for(int i=0;i<sequence.size();i++) out[i]=sequence.get(i);
        return out;

    }

    private boolean hasCycle(List<List<Integer>> graph, boolean[] visited, boolean[] recStack, int m, List<Integer>sequence){
        if(recStack[m]) return true;
        if(visited[m]) return false;

        visited[m]=true;recStack[m]=true;

        List<Integer> childs=graph.get(m);
        for(int i:childs){
            if(hasCycle(graph,visited,recStack,i,sequence)) return true;
        }

        recStack[m]=false;
        sequence.add(m);
        return false;
    }

    public static void main(String[] args) {
        int[][] a={{1,0},{3,4},{4,5},{5,3}};
        int[] out=(new CourseScheduleII()).findOrder(6,a);
        for(int i:out) System.out.print(i+" ");
        System.out.println();
    }
}
