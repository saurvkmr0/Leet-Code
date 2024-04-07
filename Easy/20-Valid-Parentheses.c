bool isValid(char* s) {
    int arr[10000];
    int temp,j=0;
    for(int i=0; s[i]!='\0'; i++)
    {
        switch(s[i])
        {
            case '(':
            temp=1;
            break;
            case '{':
            temp=2;
            break;
            case '[':
            temp=3;
            break;
            case ')':
            temp=-1;
            break;
            case '}':
            temp=-2;
            break;
            case ']':
            temp=-3;
            break;
        }

        if(temp>0)
        {s[j]=temp; j++;}
        else
        {
            if(j==0){return false;}
            if((s[j-1]+temp)!=0)
            {
                return false;
            }
            else
            {
                j--;
            }
        }
    }
    if(j==0){return true;}
    else{return false;}
}