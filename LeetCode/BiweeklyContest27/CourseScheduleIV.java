package LeetCode.BiweeklyContest27;

import LeetCode.String.LongestCommonPrefix;

import java.util.*;

public class CourseScheduleIV {

    public List<Boolean> checkIfPrerequisite(int n, int[][] prerequisites, int[][] queries) {
        List<Boolean> out=new ArrayList<>();
        HashMap<Integer,Set<Integer>> map=new HashMap<Integer, Set<Integer>>();

        for(int i=0;i<prerequisites.length;i++){
            Set<Integer>s= map.getOrDefault(prerequisites[i][1],new HashSet<Integer>());
            s.add(prerequisites[i][0]);
            map.put(prerequisites[i][1],s);
        }

        for(int i=0;i<n;i++){
            Set<Integer> ss=new HashSet<>();
            int[] visit=new int[100];
            generateCache(map,ss,i,visit);
            Set<Integer>s= map.getOrDefault(i,new HashSet<Integer>());
            s.addAll(ss);

//            System.out.println(i+" :"+s.toString());
        }



        for(int i=0;i<queries.length;i++){
            Set<Integer>s= map.getOrDefault(queries[i][1],new HashSet<Integer>());
            boolean f=s.contains(queries[i][0]);
            out.add(f);
        }
        return out;


    }


    public void generateCache(HashMap<Integer,Set<Integer>> map,Set<Integer> s1,int b,int[] visit){
        Set<Integer>s= map.getOrDefault(b,new HashSet<Integer>());
        s1.addAll(s);
        if(s.size()==0)
            return;

        Iterator<Integer> it = s.iterator();
        while (it.hasNext()){
            int a=it.next();
            if(visit[a]==0){
                visit[a]=1;
                generateCache(map,s1,a,visit);
            }
        }

    }

    public boolean checkParent(HashMap<Integer,Set<Integer>> map,Set<Integer> s1, int a,int b){
        Set<Integer>s= map.getOrDefault(b,new HashSet<Integer>());
        s1.addAll(s);
        if(s.size()==0)
            return false;
        if(s.contains(a))
            return true;
        else{
            Iterator<Integer> it = s.iterator();
            while (it.hasNext()){
                boolean result=checkParent(map,s1,a,it.next());
                if(result==true)
                    return true;
            }
            return false;
        }
    }

    public static void main(String[] args){
//        int[][] a={{2,3},{2,1},{2,0},{3,4},{3,6},{5,1},{5,0},{1,4},{1,0},{4,0},{0,6}};
//        int[][] b={{3,0},{6,4},{5,6},{2,6},{2,3},{5,6},{4,0},{2,6},{3,5},{5,3},{1,6},{1,0},{3,5},{6,5},{2,3},{3,0},{3,4},{3,4},{2,5},{0,3},{4,0},{6,4},{5,0},{6,5},{5,6},{6,5},{1,0},{3,4},{1,5},{1,4},{3,6},{0,1},{1,2},{5,1},{5,3},{5,3},{3,4},{5,4},{5,4},{5,3}};

        int[][] a= {{0,1},{1,2},{2,3},{3,4}};
        int[][] b= {{0,4},{4,0},{1,3},{3,0}};
        List<Boolean> k=(new CourseScheduleIV()).checkIfPrerequisite(5,a,b);
        for(boolean c:k)
            System.out.println(c);

    }
}
