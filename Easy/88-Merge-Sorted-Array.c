void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    for(int i=m; i<m+n; i++)
    {
        nums1[i]=nums2[i-m];
    }

    for(int i=0; i<nums1Size-1; i++)
        {
            for(int j=0; j<nums1Size-1-i; j++)
            {
                if(nums1[j]>nums1[j+1])
                {
                    int temp =nums1[j];
                    nums1[j]=nums1[j+1];
                    nums1[j+1]=temp;
                }
            }
        }
}