class Solution {
    public List<Integer> findSubstring(String s, String[] words) {
        int sL=s.length();
        int n=words.length;
        int wL=words[0].length();
        int subL=n*wL;

        List<Integer>out=new ArrayList();
        Map<String, Integer> wordCountMap=new HashMap<>();
        for(String word:words) wordCountMap.put(word,wordCountMap.getOrDefault(word,0)+1);

        for(int i=0;i<=sL-subL;i++){
            Map<String, Integer> wordSeenMap=new HashMap<>();
            for(int j=0;j<n;j++){
                int curInd=i+j*wL;
                String curWord=s.substring(curInd, curInd+wL);
                if(!wordCountMap.containsKey(curWord))
                    break;
                wordSeenMap.put(curWord, wordSeenMap.getOrDefault(curWord,0)+1);
                if(wordSeenMap.get(curWord)>wordCountMap.get(curWord))
                    break;
                if(j+1==n)
                    out.add(i);
            }
        }

        return out;
    }
}