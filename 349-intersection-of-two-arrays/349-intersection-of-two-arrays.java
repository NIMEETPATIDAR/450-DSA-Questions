class Solution 
{
    public int[] intersection(int[] nums1, int[] nums2) 
    {
       Set<Integer> set=new HashSet<>();
        ArrayList<Integer> count= new ArrayList<Integer>();
        for(int x:nums1)
        {
            set.add(x);
        }
        for(int x:nums2)
        {
            if(set.contains(x))
            {
                count.add(x);
                set.remove(x);
            }
        }
        int[] cc=new int[count.size()];
        for(int y=0;y<count.size();y++)
        {
            cc[y]=count.get(y);
        }
        return cc;
    }
}

