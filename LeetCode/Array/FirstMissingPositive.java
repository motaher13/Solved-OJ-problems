package LeetCode.Array;

public class FirstMissingPositive {

    public int firstMissingPositive(int[] nums) {
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=i+1){
                int replace=nums[i];
                int j=replace-1;
                while (j>=0 && j<nums.length && nums[j]!=j+1){
                    int c=replace;
                    replace=nums[j];
                    nums[j]=c;
                    j=replace-1;
                }
            }
        }
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=i+1) return i+1;
        }
        return nums.length+1;
    }

    public int easier(int[] nums) {
        // keep value nums.length at position 0
        int n=nums.length;
        for(int i=0;i<n;i++){
            int val=nums[i];
            int ind=i;
            while(true){
                if(val==ind) break;
                if(val<=0 || val>n) break;
                
                if(val==n) ind=0;
                else ind=val;
                
                if(nums[ind]==val) break;
                
                int temp=nums[ind];
                nums[ind]=val;
                val=temp;
            }
            
        }
        
        for(int i=1;i<n;i++)
            if(nums[i]!=i) return i;
        
        if(nums[0]!=n) return n;
        return n+1;
    }

    
    // time O(n), space O(1)
    public int markwithsign(int[] nums) {
        int n=nums.length;
        boolean found=false;
        //check if 1 is present
        if(!Arrays.stream(nums).anyMatch(x->x==1))
            return 1;
        
        // convert everything other than 1->n to 1
        for(int i=0;i<n;i++){
            if(nums[i]<=0 || nums[i]>n)
                nums[i]=1;
        }
        
        // for every value val, mark num[val] negative
        for(int i=0;i<n;i++){
            int val=Math.abs(nums[i]);
            if(val==n)
                nums[0]=-Math.abs(nums[0]);
            else
                nums[val]=-Math.abs(nums[val]);
        }
        
        for(int i=1;i<n;i++){
            if(nums[i]>0) return i;
        }
        
        if(nums[0]>0) return n;
        
        return n+1;
    }

    public static void main(String[] args) {
        int[] a={1};
        System.out.println((new FirstMissingPositive()).firstMissingPositive(a));
    }
}
