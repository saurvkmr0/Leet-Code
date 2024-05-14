void reverseString(char* s, int sSize) {
    int i=0,j=sSize-1;
    while(j>i)
    {
        s[i]=s[i]+s[j];
        s[j]=s[i]-s[j];
        s[i]=s[i]-s[j];
        i++;
        j--;
    }
}