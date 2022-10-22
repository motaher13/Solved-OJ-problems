class Solution {
    public String minWindow(String s, String t) {
        int i=0, j=0;
        int count=0;
        int start=0, end=Integer.MAX_VALUE;

        
        Map<Character, Integer> map=new HashMap<>();
        for(char c:t.toCharArray()) map.put(c, map.getOrDefault(c,0)+1);

        while(j<s.length()){
            char c=s.charAt(j);
            if(map.containsKey(c)){
                map.put(c,map.get(c)-1);
                if(map.get(c)==0) count++;
            }

            while(count==map.size()){
                if((j-i)<(end-start)){
                    end=j;
                    start=i;
                }

                char d=s.charAt(i);
                i++;
                if(map.containsKey(d)){
                    if(map.get(d)==0) count--;
                    map.put(d,map.get(d)+1);
                }
            }
            j++;
        }
            return end==Integer.MAX_VALUE? "":s.substring(start, end+1);

    }
}