package AlgoExp.Graphs;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class BoggleBoard {
    public static List<String> boggleBoard(char[][] board, String[] words) {
        List<String> out=new ArrayList<>();
        TrieNode trieRoot= buildTrie(words);

        for(int i=0;i<board.length;i++){
            for(int j=0;j<board[0].length;j++){
                dfsInTrie(board,trieRoot,out,i,j);
            }
        }

        return out;
    }


    static class TrieNode{
        String endStr;
        Map<Character, TrieNode> nextNodes=new HashMap<>();
    }

    private static TrieNode buildTrie(String[] words){
        TrieNode root=new TrieNode();
        for (String word:words){
            TrieNode p=root;
            for(int i=0;i<word.length();i++){
                char c=word.charAt(i);
                if(p.nextNodes.get(c)==null) p.nextNodes.put(c,new TrieNode());
                p=p.nextNodes.get(c);
            }
            p.endStr=word;
        }

        return root;
    }


    private static void dfsInTrie(char[][] board, TrieNode node, List<String> out, int i, int j){
        if(i<0 || i>=board.length || j<0 || j>=board[0].length
                || board[i][j]=='#' || node.nextNodes.get(board[i][j])==null) return;

        char c=board[i][j];
        node=node.nextNodes.get(c);
        if(node.endStr!=null){
            out.add(node.endStr);
            node.endStr=null;
        }

        int[][] change ={{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
        char temp=board[i][j];
        board[i][j]='#';

        for(int k=0;k<change.length;k++) dfsInTrie(board,node,out,i+change[k][0],j+change[k][1]);
        board[i][j]=temp;

    }
}
