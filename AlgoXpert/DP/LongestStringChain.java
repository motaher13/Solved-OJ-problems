package AlgoExp.DP;

import java.util.*;

public class LongestStringChain {
    /*
	consider each string as node, and the possible substrings as child
	now we will try to create a graph, meaning the chain from each nodes
	to their child nodes. we will start from the smallest string, that way
	we can bypass repeated calculations, or recursive call. then for each
	string, find the child with longest chain, create a new chain for that
	node with that chain and include the node to it. track the longest chain
	*/
    public static List<String> longestStringChain(List<String> strings) {
        List<Integer> longestChain=new ArrayList<>();
        Collections.sort(strings, (a, b)->Integer.compare(a.length(), b.length()));

        Map<String, List<Integer>> strLongChains=new HashMap<>();
        for(String str:strings)
            strLongChains.put(str,null);

        for(int k=0;k<strings.size();k++){
            String str=strings.get(k);
            List<Integer>curLongChain=new ArrayList<>();

            for(int i=0;i<str.length();i++){
                String childStr=str.substring(0,i)+str.substring(i+1, str.length());

                if(strLongChains.containsKey(childStr)){
                    List<Integer>childChain=strLongChains.get(childStr);
                    if(childChain.size()>curLongChain.size())
                        curLongChain=childChain;
                }
            }
            List<Integer>curChain=new ArrayList<>(curLongChain);//making duplicate
            curChain.add(k);
            strLongChains.put(str,curChain);

            if(curChain.size()>longestChain.size())
                longestChain=curChain;
        }

        LinkedList<String>out=new LinkedList<>();
        if(longestChain.size()<2) return out;

        longestChain.forEach(k->out.addFirst(strings.get(k)));
        return (List)out;
    }
}
