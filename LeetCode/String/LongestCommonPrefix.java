package LeetCode.String;

public class LongestCommonPrefix {

    public String longestCommonPrefix(String[] strs) {
        if(strs==null || strs.length==0)
            return "";
        StringBuilder s = new StringBuilder();

        long length=strs[0].trim().length();
        
        for(int i=0;i<strs.length;i++){
            strs[i]=strs[i].trim();
            length=Math.min(length,strs[i].length());
            if(length==0)
                return "";
        }
        
        outerloop:
        for(int i=0;i<length;i++){
            for(int j=0;j<strs.length;j++){
                if(strs[0].charAt(i)!=strs[j].charAt(i))
                    break outerloop;
            }
            s.append(strs[0].charAt(i));
        }

        return s.toString();


    }




    public String best_usingBinarySearch(String[] strs) {
        if (strs == null || strs.length == 0)
            return "";
        int minLen = Integer.MAX_VALUE;
        for (String str : strs)
            minLen = Math.min(minLen, str.length());
        int low = 1;
        int high = minLen;
        while (low <= high) {
            int middle = (low + high) / 2;
            if (isCommonPrefix(strs, middle))
                low = middle + 1;
            else
                high = middle - 1;
        }
        return strs[0].substring(0, Math.min(low, high)); // every time, high will be smaller then lower in the end, using just 'high' instead of min is also accepted
    }

    private boolean isCommonPrefix(String[] strs, int len){
        String str1 = strs[0].substring(0,len);
        for (int i = 1; i < strs.length; i++)
            if (!strs[i].startsWith(str1))
                return false;
        return true;
    }

    public static void main(String[] args){
        String[] s={"asdf","asdfdf","asere"};
        String k=(new LongestCommonPrefix()).longestCommonPrefix(s);
        System.out.println(k);
    }
}
