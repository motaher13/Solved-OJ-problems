package LeetCode.Array;

public class ContainerWithMostWater {

    public int maxArea(int[] height) {
        int mx=0,k;
        for(int i=0,j=height.length-1;i<j;){
            if(height[i]>height[j]){
                k=height[j]*(j-i);
                mx=Math.max(mx,k);
                j--;
            }else{
                k=height[i]*(j-i);
                mx=Math.max(mx,k);
                i++;
            }
        }
        return mx;
    }

    public static void main(String[] args) {
        int[] a={1,4,10,5,10};
        System.out.println((new ContainerWithMostWater()).maxArea(a));
    }
}
