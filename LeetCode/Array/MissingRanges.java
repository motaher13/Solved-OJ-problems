class MissingRanges {
    public List<String> findMissingRanges(int[] nums, int lower, int upper) {
        List<String> out=new ArrayList<>();
        if(nums.length==0){
            check(lower-1, upper+1, out);
            return out;
        }
        check(lower-1, nums[0], out);
        for(int i=0;i<nums.length-1;i++)
            check(nums[i], nums[i+1], out);
        check(nums[nums.length-1], upper+1, out);
        return out;
    }
    
    private void check(int a, int b, List<String> out){
        if(b-a==1 || b-a==0) return;
        if(b-a==2)
            out.add(String.valueOf(a+1));
        else
            out.add(String.valueOf(a+1)+"->"+String.valueOf(b-1));
        return;
    }
}