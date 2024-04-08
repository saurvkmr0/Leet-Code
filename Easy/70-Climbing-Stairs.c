int climbStairs(int n) {
    if(n==1)
        return n;
    else if(n==2)
        return 2;
    else
        {
            int a=1,b=2;
            while(n>2)
            {
                b=b+a;
                a=b-a;
                n--;
            }
        return b;
        }
}