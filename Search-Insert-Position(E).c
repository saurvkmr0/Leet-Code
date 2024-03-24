int searchInsert(int* nums, int numsSize, int target) {
   int result;

   if(target<nums[0])
   {
    return 0;
   }

   else if(target>nums[numsSize-1])
    {
        return numsSize;
    }
   result = divideSearch(nums, numsSize, target, result); 
   return result;
}

int divideSearch(int* nums, int numsSize, int target, int result)
{
    if(target==nums[numsSize-1])
    {
        result = numsSize-1;
        return result;
    }
    else if(target<nums[numsSize-1])
    {
        numsSize=numsSize/2;
        result=divideSearch(nums, numsSize, target, result);
    }
    else if(target>nums[numsSize-1])
    {
        int i=numsSize-1;
        while(nums[i]<=target)
        {
            i++;
            if(nums[i]==target){result = i; return result;}
        }
        
        return result=i;
    } 
    return result;
}