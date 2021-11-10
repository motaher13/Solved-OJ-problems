package AlgoExp.Graphs;

public class YoungestCommonAncestor {
    public static AncestralTree getYoungestCommonAncestor(
            AncestralTree top,
            AncestralTree nodeOne,
            AncestralTree nodeTwo) {

        int depthOne=getDepth(top, nodeOne);
        int depthTwo=getDepth(top, nodeTwo);
        int diff=Math.abs(depthOne-depthTwo);
        if(diff>0){
            if(depthOne>depthTwo)
                nodeOne=changeDepth(nodeOne, diff);
            else nodeTwo=changeDepth(nodeTwo, diff);
        }

        while(nodeOne!=nodeTwo){
            nodeOne=nodeOne.ancestor;
            nodeTwo=nodeTwo.ancestor;
        }

        return nodeOne;
    }

    public static AncestralTree changeDepth(AncestralTree node, int diff){
        while(diff!=0){
            node=node.ancestor;
            diff--;
        }
        return node;
    }


    public static int getDepth(
            AncestralTree top,
            AncestralTree cur) {
        int d=0;
        while(cur!=top){
            d++;
            cur=cur.ancestor;
        }
        return d;
    }

    static class AncestralTree {
        public char name;
        public AncestralTree ancestor;

        AncestralTree(char name) {
            this.name = name;
            this.ancestor = null;
        }

        // This method is for testing only.
        void addAsAncestor(AncestralTree[] descendants) {
            for (AncestralTree descendant : descendants) {
                descendant.ancestor = this;
            }
        }
    }
}
