package LeetCode.Trees;

import jdk.internal.util.xml.impl.Pair;
import java.util.*;

public class WordLadder {
    HashMap<String,ArrayList<Integer>> graph=new HashMap<>();
    int L=0;
    /*public int ladderLength(String beginWord, String endWord, List<String> wordList) {
        if(!wordList.contains(endWord)) return 0;
        L=beginWord.length();

        *//* generate the graph*//*
        for(int i=0;i<wordList.size();i++){
            for(int j=0;j<L;j++){
                String node=wordList.get(i).substring(0,j)+"*"+wordList.get(i).substring(j+1,L);
                List<Integer> vertices=graph.computeIfAbsent(node,k->new ArrayList<>());
                vertices.add(i);
            }
        }

        Queue<Pair> q=new LinkedList<>();
        Queue<Pair> rq=new LinkedList<>();



    }*/


    public static void main(String[] args) {
//        List<String> a=new ArrayList<>(Arrays.asList("hot","dot","dog","lot","log"));
//        System.out.println((new WordLadder()).ladderLength("hit",a));
    }
}


