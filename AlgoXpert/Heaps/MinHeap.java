package AlgoExp.Heaps;

import java.util.ArrayList;
import java.util.List;

public class MinHeap {
    List<Integer> heap = new ArrayList<Integer>();

    public MinHeap(List<Integer> array) {
        heap = buildHeap(array);
    }

    public List<Integer> buildHeap(List<Integer> array) {
        int firstParentIdx=(array.size()-2)/2;
        for(int cur=firstParentIdx;cur>=0;cur--)
            siftDown(cur, array.size()-1, array);
        return array;
    }

    public void siftDown(int currentIdx, int endIdx, List<Integer> heap) {
        int childOneIdx=currentIdx*2+1;

        while(childOneIdx<=endIdx){
            int swapIdx=0;
            int childTwoIdx=currentIdx*2+2;
            if(childTwoIdx>endIdx || heap.get(childTwoIdx)>heap.get(childOneIdx))
                swapIdx=childOneIdx;
            else
                swapIdx=childTwoIdx;

            if(heap.get(swapIdx)<heap.get(currentIdx)){
                swap(currentIdx, swapIdx, heap);
                currentIdx=swapIdx;
                childOneIdx=currentIdx*2+1;
            }else
                return;

        }
    }

    public void siftUp(int currentIdx, List<Integer> heap) {
        int parentIdx=(currentIdx-1)/2;
        while(currentIdx>0 && heap.get(currentIdx)<heap.get(parentIdx)){
            swap(currentIdx, parentIdx, heap);
            currentIdx=parentIdx;
            parentIdx=(currentIdx-1)/2;
        }
    }

    public int peek() {
        return heap.get(0);
    }

    public int remove() {
        swap(0, heap.size()-1, heap);
        int value=heap.get(heap.size()-1);
        heap.remove(heap.size()-1);
        siftDown(0, heap.size()-1, heap);
        return value;
    }

    public void insert(int value) {
        heap.add(value);
        siftUp(heap.size()-1, heap);
    }

    public void swap(int a, int b, List<Integer> heap){
        int temp=heap.get(a);
        heap.set(a, heap.get(b));
        heap.set(b, temp);
    }

}
