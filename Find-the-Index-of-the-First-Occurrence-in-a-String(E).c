int strStr(char* haystack, char* needle) {
    int i=0,j=0,starting;
    for(i=0; haystack[i]!='\0'; i++)
    {
        if(haystack[i]==needle[j])
        {   
            starting=i;
            j++;
            while(haystack[i+j]==needle[j] && needle[j]!='\0')
            {j++;}
            if(needle[j]=='\0')
            {return starting;}
            else{j=0;}
        }
    }
    return -1;
}