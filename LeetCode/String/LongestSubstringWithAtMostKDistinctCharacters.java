class Solution {
    public int lengthOfLongestSubstringKDistinct(String s, int k) {
        Map<Character,Integer> map=new HashMap<>();
        int i=0,j=0;
        int size=0, mx=Integer.MIN_VALUE;
        int uCount=0;
        while(j<s.length()){
            char c=s.charAt(j);
            map.put(c,map.getOrDefault(c,0)+1);
            size++;
            j++;
            if(map.get(c)==1) uCount++;
            if(uCount<=k){
                mx=Math.max(mx, size);
            }else{
                while(uCount>k){
                    char d=s.charAt(i);
                    i++;
                    size--;
                    map.put(d,map.get(d)-1);
                    if(map.get(d)==0)
                        uCount--;
                }
            }
            
        }
        return mx==Integer.MIN_VALUE? 0:mx;
    }
}