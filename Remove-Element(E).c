int removeElement(int* nums, int numsSize, int val) {
    if(numsSize==0)
    {return 0;}
    int arr[numsSize];
    // for(int i=0; i<numsSize; i++)
        

    int j=0;
    for(int i=0; i<numsSize; i++)
    {
        arr[i]=nums[i];
        if(arr[i]!=val)
        {
            nums[j]=arr[i];
            j++;
        }
    }
    return j;
}