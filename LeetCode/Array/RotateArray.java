package LeetCode.Array;

public class RotateArray {

    public void rotate(int[] nums, int k) {
        int length=nums.length;
        if(length==0 || k==0) return;
        int[] mark=new int[length];

        for(int i=0;i<length;i++){
            if(mark[i]==0){
                int b=nums[i];
                int j=i;
                while (true){
                    int a=j+k>=length? (j+k)%length:j+k;
                    int c=nums[a];
                    nums[a]=b;
                    b=c;

                    j=a;
                    mark[j]=1;
                    if(j==i)
                        break;
                }
            }
        }

    }

    public void bruteForce(int[] nums, int k){
        // rotate k times the whole array
        int temp, previous;
        for (int i = 0; i < k; i++) {
            previous = nums[nums.length - 1];
            for (int j = 0; j < nums.length; j++) {
                temp = nums[j];
                nums[j] = previous;
                previous = temp;
            }
        }
    }

    public void best(int[] nums, int k){
        // just use a count
        int count=0;
        int l=nums.length;
        k%=l;
        for(int start=0;count<l;start++){
            int current=start;
            int prevVal=nums[current];
            do{
                int next=(current+k)%l;
                int tempVal=nums[next];
                nums[next]=prevVal;
                prevVal=tempVal;
                current=next;
                count++;
            }while(current!=start);
        }
    }



    public static void main(String[] args){
        int[] array={1,2,3,4,5,6};
        (new RotateArray()).best(array,4);

        for(int i=0;i<array.length;i++)
            System.out.print(array[i] + " ");
    }
}
