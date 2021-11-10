package AlgoExp.Graphs;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class BFS {
    // Do not edit the class below except
    // for the breadthFirstSearch method.
    // Feel free to add new properties
    // and methods to the class.
    static class Node {
        String name;
        List<Node> children = new ArrayList<Node>();

        public Node(String name) {
            this.name = name;
        }

        public List<String> breadthFirstSearch(List<String> array) {
            Queue<Node> que=new LinkedList<>();
            que.add(this);
            array.add(this.name);
            while(!que.isEmpty()){
                Node cur=que.remove();
                for(Node child:cur.children){
                    array.add(child.name);
                    que.add(child);
                }
            }

            return array;
        }

        public Node addChild(String name) {
            Node child = new Node(name);
            children.add(child);
            return this;
        }
    }
}
