package AlgoExp.Tries;

import java.util.HashMap;
import java.util.Map;

public class SuffixTreeConstruction {

    // Do not edit the class below except for the
    // populateSuffixTrieFrom and contains methods.
    // Feel free to add new properties and methods
    // to the class.
    static class TrieNode {
        Map<Character, TrieNode> children = new HashMap<Character, TrieNode>();
    }

    static class SuffixTrie {
        TrieNode root = new TrieNode();
        char endSymbol = '*';

        public SuffixTrie(String str) {
            populateSuffixTrieFrom(str);
        }

        // create trie for each suffix, see resource for the explanation
        public void populateSuffixTrieFrom(String str) {

            for(int i=0;i<str.length();i++){
                TrieNode current=root;
                for(int j=i;j<str.length();j++){
                    char c=str.charAt(j);
                    if(current.children.get(c)!=null)
                        current=current.children.get(c);
                    else{
                        current.children.put(c, new TrieNode());
                        current=current.children.get(c);
                    }

                    if(j==str.length()-1)
                        current.children.put(endSymbol, null);
                }
            }
        }

        public boolean contains(String str) {
            TrieNode current=root;
            for(int i=0;i<str.length();i++){
                char c=str.charAt(i);
                if(current.children.get(c)!=null)
                    current=current.children.get(c);
                else return false;
            }

            return current.children.containsKey(endSymbol);
        }
    }
}
