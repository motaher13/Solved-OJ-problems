package AlgoExp.BST;

import java.util.ArrayList;
import java.util.List;

public class RightSmallerThan {
    public static List<Integer> rightSmallerThan(List<Integer> array) {
    /*
		-This is a very tricky question, start fromt the end of the array, as we already know
		the output for that one, which is 0.
		-Then iterate to the begining and insert each one to an bst, you have to calculate the
		value at the time of insertion, because after that the tree will be altered.
		-if the node value is smaller than the newNode, then the node and all of it's left nodes
		are also smaller and at the right of the newNode, so sum the count and preserve.
		and when done pushing to the bst, add the sum at the begining of the output array, as we
		are iterating from the bottom.

		*/
        int l=array.size();
        List<Integer> out= new ArrayList<>();
        if(l==0) return out;

        BST root= new BST(array.get(l-1));
        out.add(0,0);

        for(int i=l-2;i>=0;i--){
            BST curNode=root;
            int rightSmallCount=0;
            BST newNode=new BST(array.get(i));

            while(true){
                if(newNode.value>curNode.value){
                    rightSmallCount+=curNode.leftNodeCount+1;

                    if(curNode.right==null){
                        curNode.right=newNode;
                        out.add(0, rightSmallCount);
                        break;
                    }else{
                        curNode=curNode.right;
                    }
                }

                else{
                    curNode.leftNodeCount+=1;
                    if(curNode.left==null){
                        curNode.left=newNode;
                        out.add(0, rightSmallCount);
                        break;
                    }else{
                        curNode=curNode.left;
                    }
                }
            }
        }

        return out;
    }




    static class BST {
        public int value;
        public BST left;
        public BST right;
        public int leftNodeCount;

        public BST(int value) {
            this.value = value;
        }
    }
}
