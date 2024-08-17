int* runningSum(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int *arr = malloc(sizeof(int)*numsSize);
    arr[0]=nums[0];
    for(int i=1; i<numsSize; i++)
    {
        arr[i]=arr[i-1]+nums[i];
    }
    return arr;
}