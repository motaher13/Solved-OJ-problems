package LeetCode.Backtracking;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

public class WordSearchII {

    public List<String> findWordsWithDfs(char[][] board, String[] words) {
        List<String> out=new ArrayList<>();
        if(words==null || words.length==0) return out;

        for(String word:words) {
            outerLoop:
            for (int i = 0; i < board.length; i++) {
                for (int j = 0; j < board[0].length; j++) {
                    if (board[i][j] == word.charAt(0) && dfs(board, word, i, j, 0)) {
                        out.add(word);
                        break outerLoop;
                    }
                }
            }
        }
        return out;
    }

    private boolean dfs(char[][] board, String word,int i, int j, int n){
        if(i<0 || i>=board.length || j<0 || j>=board[0].length || board[i][j]!=word.charAt(n)) return false;
        else if(n==word.length()-1) return true;

        int[][] change={{1,0},{-1,0},{0,1},{0,-1}};
        boolean success=false;
        char temp=board[i][j];
        board[i][j]=' ';

        for(int k=0;k<4;k++){
            success=dfs(board,word,i+change[k][0],j+change[k][1],n+1);
            if(success){
                board[i][j]=temp;
                return true;
            }
        }

        board[i][j]=temp;
        return false;
    }


    /*
    * with trie tree
    * */

    class TrieNode{
        String endStr;
        TrieNode[] nextNodes=new TrieNode[26];
    }

    private TrieNode buildTrie(String[] words){
        TrieNode root=new TrieNode();
        for (String word:words){
            TrieNode p=root;
            for(int i=0;i<word.length();i++){
                char c=word.charAt(i);
                if(p.nextNodes[c-'a']==null) p.nextNodes[c-'a']=new TrieNode();
                p=p.nextNodes[c-'a'];
            }
            p.endStr=word;
        }

        return root;
    }

    public List<String> findWordsBest(char[][] board, String[] words) {
        List<String> out=new ArrayList<>();
        TrieNode trieRoot= buildTrie(words);

        for(int i=0;i<board.length;i++){
            for(int j=0;j<board[0].length;j++){
                dfsInTrie(board,trieRoot,out,i,j);
            }
        }

        return out;
    }

    private void dfsInTrie(char[][] board, TrieNode node, List<String> out, int i, int j){
        if(i<0 || i>=board.length || j<0 || j>=board[0].length
                || board[i][j]=='#' || node.nextNodes[board[i][j]-'a']==null) return;

        char c=board[i][j];
        node=node.nextNodes[c-'a'];
        if(node.endStr!=null){
            out.add(node.endStr);
            node.endStr=null;
        }

        int[][] change ={{1,0},{-1,0},{0,1},{0,-1}};
        char temp=board[i][j];
        board[i][j]='#';

        for(int k=0;k<change.length;k++) dfsInTrie(board,node,out,i+change[k][0],j+change[k][1]);
        board[i][j]=temp;

    }





    public static void main(String[] args) {
        char[][] board = {
                          {'a','b'}
                        };
        List<String> k=(new WordSearchII()).findWordsBest(board, new String[]{"a","b"});
        System.out.println(k.toString());
    }
}




/*
 * using trie tree
 * */

/*
public class TrieNode{
    String isEnd;
    TrieNode[] nodes = new TrieNode[26];
    public TrieNode(){};
}
    public List<String> findWordsBest(char[][] board, String[] words) {
        List<String> res = new LinkedList<>();
        TrieNode root = buildTrie(words);
        for(int i = 0; i < board.length; i++){
            for(int j = 0; j < board[0].length; j++){
                dfs(i, j, board, root, res);
            }
        }

        return res;
    }

    private void dfs(int i, int j, char[][] board, TrieNode root, List<String> res){
        if(board[i][j] == '#' || root.nodes[board[i][j]-'a'] == null){
            return;
        }
        char c = board[i][j];
        root = root.nodes[c-'a'];
        if(root.isEnd != null){
            res.add(root.isEnd);
            root.isEnd = null;
        }
        board[i][j] = '#';
        if(i > 0) dfs(i-1, j, board, root, res);
        if(i < board.length-1) dfs(i+1, j, board, root, res);
        if(j > 0) dfs(i, j-1, board, root, res);
        if(j < board[0].length-1) dfs(i, j+1, board,root, res);
        board[i][j] = c;
    }

    private TrieNode buildTrie(String[] words){
        TrieNode root = new TrieNode();
        for(String word: words){
            TrieNode p = root;
            for(int i =0; i < word.length(); i++){
                if(p.nodes[word.charAt(i)-'a'] == null){
                    p.nodes[word.charAt(i)-'a'] = new TrieNode();
                }
                p = p.nodes[word.charAt(i)-'a'];
            }
            p.isEnd = word;
        }
        return root;
    }*/
