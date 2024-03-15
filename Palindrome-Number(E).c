bool isPalindrome(int x) {
    if(x<0)
    {return false;}
    else
    {
        long long int digCount=0,dig,multi,temp=x,check=0;
        while(temp>0)
        {
            digCount++;
            temp=temp/10;
        }
        multi=pow(10,digCount-1);
        temp=x;
        while(temp>0)
        {
            dig=temp%10;
            check=check+(dig*multi);
            multi=multi/10;
            temp=temp/10;
        }
        if(check==x)
        return true;
        else
        return false;
    }
}