class Solution {
    public boolean checkInclusion(String s1, String s2) {
        int i=0, j=0;
        Map<Character, Integer> map=new HashMap<>();
        int count=0;

        for(char c:s1.toCharArray()) 
            map.put(c, map.getOrDefault(c,0)+1);
            
        while(j<s2.length()){
            char c=s2.charAt(j);
            if(map.containsKey(c)){
                map.put(c,map.get(c)-1);
                if(map.get(c)==0)
                    count++;
            }

            if(count==map.size()) return true;

            if(j>=s1.length()-1){
                char d=s2.charAt(i);
                i++;
                if(map.containsKey(d)){
                    if(map.get(d)==0) count--;
                    map.put(d,map.get(d)+1);
                    
                }
            }
                
            j++;
        }

        return false;
    }
}