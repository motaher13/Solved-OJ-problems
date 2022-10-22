class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        int i=0, j=0;
        int count=0;
        
        List<Integer> out=new ArrayList<>();

        Map<Character, Integer> map=new HashMap<>();
        for(char c:p.toCharArray())map.put(c,map.getOrDefault(c,0)+1);

        while(j<s.length()){
            char c=s.charAt(j);
            if(map.containsKey(c)){
                map.put(c, map.get(c)-1);
                if(map.get(c)==0) count++;
            }
            if(count==map.size()) out.add(i);

            if(j>=p.length()-1){
                char d=s.charAt(i);
                i++;
                if(map.containsKey(d)){
                    if(map.get(d)==0) count--;
                    map.put(d, map.get(d)+1);
                }
            }
            j++;
        }
        return out;
    }
}