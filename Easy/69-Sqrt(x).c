int mySqrt(int x) {
    if (x>=2147395600)
    {
        return 46340;
    }
    int temp=46340;
    int uplimit=temp;
    while(temp*temp>x)
    {
        uplimit=temp;
        temp=temp/2;
    }
    while(1)
    {
        if(((uplimit+temp)/2)*((uplimit+temp)/2)>=x)
            uplimit=(uplimit+temp)/2;
        else
            {
                temp=(uplimit+temp)/2;
            }
        
        if((temp*temp<=x) && ((temp+1)*(temp+1)>=x))
        {
            break;
        }
    }
    
    if(temp>=46340)
        return 46340;
    if((temp+1)*(temp+1)<=x)
        return temp+1;
    else return temp;
  
    return 0;
}