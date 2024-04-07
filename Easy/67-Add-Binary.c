char* addBinary(char* a, char* b) {
    int i=0,lenA=0,lenB=0;
    while(a[i]!='\0')
        {lenA++; i++;}
    i=0;
    while(b[i]!='\0')
        {lenB++; i++;}
    int carry=0;
    int maxLength = (lenA > lenB) ? lenA : lenB;
    char* sum = (char*)malloc((maxLength + 2) * sizeof(char));
    if(lenA>=lenB)
    {
        sum[lenA+1]='\0';
        i=lenA-1;
        while(i>=0)
        {  
            if(lenB-1<0)
            {
                if((a[i]-48+carry)==2)
                {
                    sum[i+1]='0';
                    carry=1;
                }
                else if((a[i]-48+carry)==1)
                {
                    sum[i+1]='1';
                    carry=0;
                }
                else if((a[i]-48+carry)==0)
                {
                    sum[i+1]='0';
                    carry=0;
                }
                
            }

            else
            {
                if((a[i]+b[lenB-1]-96+carry)==2)
                {
                    sum[i+1]='0';
                    carry=1;
                    lenB--;
                }
                else if((a[i]+b[lenB-1]-96+carry)==3)
                {
                    sum[i+1]='1';
                    carry=1;
                    lenB--;
                }
                else if((a[i]+b[lenB-1]-96+carry)==1)
                {
                    sum[i+1]='1';
                    carry=0;
                    lenB--;
                }
                else if((a[i]+b[lenB-1]-96+carry)==0)
                {
                    sum[i+1]='0';
                    carry=0;
                    lenB--;
                }
            }
            i--;
        }

    }

    else{ 
        sum[lenB+1]='\0';
        i=lenB-1;
        while(i>=0)
        {  
            if(lenA-1<0)
            {
                if((b[i]-48+carry)==2)
                {
                    sum[i+1]='0';
                    carry=1;
                }
                else if((b[i]-48+carry)==1)
                {
                    sum[i+1]='1';
                    carry=0;
                }
                else if((b[i]-48+carry)==0)
                {
                    sum[i+1]='0';
                    carry=0;
                }
                
            }

            else
            {
                if((b[i]+a[lenA-1]-96+carry)==2)
                {
                    sum[i+1]='0';
                    carry=1;
                    lenA--;
                }
                else if((b[i]+a[lenA-1]-96+carry)==3)
                {
                    sum[i+1]='1';
                    carry=1;
                    lenA--;
                }
                else if((b[i]+a[lenA-1]-96+carry)==1)
                {
                    sum[i+1]='1';
                    carry=0;
                    lenA--;
                }
                else if((b[i]+a[lenA-1]-96+carry)==0)
                {
                    sum[i+1]='0';
                    carry=0;
                    lenA--;
                }
            }
            i--;
        }

    }
    
        if(carry==1)
            sum[0]='1';
        else
        {
            i=0;
            while(sum[i+1]!='\0')
                {
                    sum[i]=sum[i+1];
                    i++;
                }
            sum[i]='\0';
            
        }
        
    return sum;
}