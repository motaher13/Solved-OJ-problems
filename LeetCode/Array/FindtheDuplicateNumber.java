package LeetCode.Array;

public class FindtheDuplicateNumber {
    /*
     * check resource folder for images
     * To compute the intersection point, let's note that the hare has traversed twice as many nodes as the tortoise, 
     * i.e. 2d(tortoise)=d(hare)
     * implying: 2(F+a)=F+nC+a
     * where n is some integer. Hence the coordinate of the intersection point is 
     * F+a=nC.
     * -> f=nC-a
     * -> f=C-a
     * so, if tortoise start from start, and here starts from meeting point, they will meet 
     * at the start of loop
     * 
     */

    public int findDuplicate(int[] nums) {
        int tortoise=nums[0];
        int hare=nums[0];
        do{
            tortoise=nums[tortoise];
            hare=nums[nums[hare]];
        }while (tortoise!=hare);

        tortoise=nums[0];
        while (tortoise!=hare){
            tortoise=nums[tortoise];
            hare=nums[hare];
        }

        return hare;
    }

    public static void main(String[] args) {
        int[] a={2,5,3,4,1,3};
        int k=(new FindtheDuplicateNumber()).findDuplicate(a);
        System.out.println(k);
    }
}
