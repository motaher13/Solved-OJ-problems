class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0) return "";
        int l=Arrays.stream(strs).map(k->k.length()).min(Integer::compare).get();
        int left=0, right=l;
        
        while(left<right){
            int mid=(left+right)/2;
            if(isCommon(strs,mid)) left=mid+1;
            else right=mid;
        }
        return strs[0].substring(0,left);
    }
    
    private boolean isCommon(String[] strs, int pos){
        String k = strs[0].substring(0,pos+1);
        for(String s:strs)
            if(!s.substring(0,pos+1).equals(k))
                return false;
        return true;
    }
}