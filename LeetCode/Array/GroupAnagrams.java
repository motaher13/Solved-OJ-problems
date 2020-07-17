package LeetCode.Array;

import java.util.*;

public class GroupAnagrams {

    public List<List<String>> groupAnagrams(String[] strs) {
        if(strs==null || strs.length==0) return null;
        boolean[] visit=new boolean[strs.length];

        List<String> sorted=new ArrayList<>();
        for(int i=0;i<strs.length;i++){
            char[] chars = strs[i].toCharArray();
            Arrays.sort(chars);
            sorted.add(new String(chars));
        }

        List<List<String>> out=new ArrayList<>();
        for(int i=0;i<strs.length;i++){
            if(visit[i]) continue;
            List<String> e=new ArrayList<>(Arrays.asList(strs[i]));
            out.add(e);
            for(int j=i+1;j<strs.length;j++){

                if(sorted.get(i).equals(sorted.get(j))){
                    visit[j]=true;
                    e.add(strs[j]);
                }
            }
        }

        return out;
    }

    public List<List<String>> best(String[] strs) {
        if (strs.length == 0) return new ArrayList();
        Map<String, List> ans = new HashMap<String, List>();
        int[] count = new int[26];
        for (String s : strs) {
            Arrays.fill(count, 0);
            for (char c : s.toCharArray()) count[c - 'a']++;

            StringBuilder sb = new StringBuilder("");
            for (int i = 0; i < 26; i++) {
                sb.append('#');
                sb.append(count[i]);
            }
            String key = sb.toString();
            if (!ans.containsKey(key)) ans.put(key, new ArrayList());
            ans.get(key).add(s);
        }
        return new ArrayList(ans.values());
    }

    public static void main(String[] args) {
        String[] s={"eat", "tea", "tan", "ate", "nat", "bat"};

        List<List<String>> k=(new GroupAnagrams()).groupAnagrams(s);
        for(List<String> m:k){
            System.out.println(m.toString());
        }

    }
}
