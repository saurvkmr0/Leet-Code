int romanToInt(char* s) {
    int num=0;
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='I' && s[i+1]=='V')
        {num=num+4; i++;}
        else if(s[i]=='I' && s[i+1]=='X')
        {num=num+9; i++;}
        else if(s[i]=='X' && s[i+1]=='L')
        {num=num+40; i++;}
        else if(s[i]=='X' && s[i+1]=='C')
        {num=num+90; i++;}
        else if(s[i]=='C' && s[i+1]=='D')
        {num=num+400; i++;}
        else if(s[i]=='C' && s[i+1]=='M')
        {num=num+900; i++;}
        else if(s[i]=='I')
        {num=num+1;}
        else if(s[i]=='V')
        {num=num+5;}
        else if(s[i]=='X')
        {num=num+10;}
        else if(s[i]=='L')
        {num=num+50;}
        else if(s[i]=='C')
        {num=num+100;}
        else if(s[i]=='D')
        {num=num+500;}
        else if(s[i]=='M')
        {num=num+1000;}
    }
    return num;
}