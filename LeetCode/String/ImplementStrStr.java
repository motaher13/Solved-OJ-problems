class Solution {
    public int strStr(String h, String n) {
        int j=0;
        for(int i=0;i<h.length();i++){
            
            for(j=0;j<n.length();j++){
                if(i+j==h.length()) break;
                if(!(h.charAt(i+j)==n.charAt(j)))
                    break;
            }
            if(j==n.length()) return i;
        }
        return -1;
    }
    
}