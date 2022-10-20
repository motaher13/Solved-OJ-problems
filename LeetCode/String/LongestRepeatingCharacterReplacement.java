class Solution {
    public int characterReplacement(String s, int k) {
        int i=0, j=0;
        int mx=Integer.MIN_VALUE;
        int count=0;
        Map<Character,Integer> map=new HashMap<>();

        while(j<s.length()){
            char c=s.charAt(j);
            map.put(c,map.getOrDefault(c,0)+1);
            count=Math.max(count,map.get(c)); // count max of same char

            if(j-i+1-count>k){ //if the last entered char is extra
                char d=s.charAt(i);
                map.put(d,map.get(d)-1);
                i++;
            }
            mx=Math.max(mx, j-i+1);
            j++;
        }

        return mx==Integer.MIN_VALUE? 0:mx;
    }
}