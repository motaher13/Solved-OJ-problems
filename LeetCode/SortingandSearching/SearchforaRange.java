package LeetCode.SortingandSearching;

public class SearchforaRange {

    public int[] searchRange(int[] nums, int target) {
        int[] out={-1,-1};
        findSearchRange(nums,0,nums.length-1,out,target);
        if(out[0]!=-1 && out[1]==-1){
            out[1]=out[0];
        }else if(out[1]!=-1 && out[0]==-1){
            out[0]=out[1];
        }
        return out;
    }

    private void findSearchRange(int[] nums,int l,int r,int[] out,int target){
        if(l<0 || r>nums.length-1 || l>r) return;

        int mid=(l+r)/2;
        if(nums[mid]<target)
            findSearchRange(nums,mid+1,r,out,target);
        else if(nums[mid]>target)
            findSearchRange(nums,l,mid-1,out,target);
        else{
            if((mid>0 && nums[mid]>nums[mid-1]) || mid==0){
                out[0]=mid;
                findSearchRange(nums,mid+1,r,out,target);
            }else if((mid<nums.length-1 && nums[mid]<nums[mid+1])||mid==nums.length-1){
                out[1]=mid;
                findSearchRange(nums,l,mid-1,out,target);
            }else{
                findSearchRange(nums,mid+1,r,out,target);
                findSearchRange(nums,l,mid-1,out,target);
            }
        }
    }

    public static void main(String[] args) {
        int[] ara={5,7,7,8,8};
        int[] out=(new SearchforaRange()).searchRange(ara,5);
        System.out.print(out[0]+" "+out[1]);
    }
}
