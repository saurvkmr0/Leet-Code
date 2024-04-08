char* longestCommonPrefix(char** strs, int strsSize) {
    static char common[201];
    common[0]='\0';
    strcpy(common,strs[0]);
    for(int i=1; i<strsSize; i++)
        {
            int j=0;
            while(1)
            {
                if(strs[i][j]!=common[j])
                {
                    common[j]='\0';
                    break;
                }
                else if(strs[i][j]=='\0')
                {
                    break;
                }
                j++;
            }
        }
        return common;
}