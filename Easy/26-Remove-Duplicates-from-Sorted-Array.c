int removeDuplicates(int* nums, int numsSize) {
    int place=0, check=1;
    while(check<numsSize)
    {
        if(nums[check]==nums[place])
        {
            check++;
        }
        else
        {
            place++;
            nums[place]=nums[check];
            check++;
        }
    }
    return place+1;
}