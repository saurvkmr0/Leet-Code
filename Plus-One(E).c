/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    

    digitsSize--;
    int i=digitsSize+1;
    int isOverFlow=0;
    while(digitsSize>=0){
        if(digits[digitsSize]!=9){
            digits[digitsSize]+=1;
            break;
        }
        else if(digits[digitsSize]==9)
        {
             digits[digitsSize]=0;
             if(digits[0]==0)
             {isOverFlow=1; break;}
             digitsSize--;
             continue;
        }
    }
    int j=0;
    if(isOverFlow==0){*returnSize=i; return digits;}
       else *returnSize = i+1;
        int* result = (int*)malloc(*returnSize * sizeof(int));
    if(isOverFlow==1)
    {
        for(j=i;j>0;j--)
        {
            result[j]=digits[j-1];
        }
        result[0]=1; 
    }
    return result;

}