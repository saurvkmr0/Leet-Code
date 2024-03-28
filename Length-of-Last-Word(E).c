/*
Understanding:
while(strLen>=0 && s[strLen]!=' ') 
insted of the above line if we write it as while(s[strLen]!=' ' && strLen>=0) this will cause the heap buffer overflow as we are accesing the string s before checking if the poiter i.e. strLen is reaches at -1 index of the string.
chatgpt explation:
when strLen becomes -1 (out of bounds), s[strLen] tries to access memory before the beginning of the string, causing a heap buffer overflow. 
*/




int lengthOfLastWord(char* s) {
    int strLen=0;
    while(s[strLen]!='\0')
        strLen++;

    strLen--;
    while(s[strLen]==' ')
    {
        strLen--;
    }
    
    int count=0;
    while(strLen>=0 && s[strLen]!=' ')
    {
        count++;
        strLen--;
        printf("(%d)",strLen);
    }
    return count; 
}