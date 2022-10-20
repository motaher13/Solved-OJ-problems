class Solution {
    public String minWindow(String s, String t) {
        if (s.length() == 0 || t.length() == 0) {
            return "";
        }
        
        Map<Character, Integer> dictT=new HashMap<>();
        for(char c:t.toCharArray()) dictT.put(c,dictT.getOrDefault(c,0)+1);
        
        Map<Character,Integer> windowCnt=new HashMap<>();
        int[] ans={-1,0,0};
        int left=0,right=0;
        
        int required=dictT.size();
        int formed=0;
        
        while(right<s.length()){
            char c=s.charAt(right);
            windowCnt.put(c,windowCnt.getOrDefault(c,0)+1);
            
            if(dictT.containsKey(c) 
               && windowCnt.get(c).intValue()==dictT.get(c).intValue())
                formed++;
            
            
            while(formed==required && left<=right){
                c=s.charAt(left);
                if(ans[0]==-1 || (right-left+1)<ans[0]){
                    ans[0]=right-left+1;
                    ans[1]=left;
                    ans[2]=right;
                }
                              
                windowCnt.put(c,windowCnt.get(c)-1);
                
                if(dictT.containsKey(c) && 
                   windowCnt.get(c).intValue()<dictT.get(c).intValue())
                    formed--;
                
                left++;
            }
            
            right++;
        }
        
        if(ans[0]>0) return s.substring(ans[1],ans[2]+1);
        else return "";
        
    }
}