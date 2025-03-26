#include <stdio.h>
#include <stdlib.h
int main()
{
    long dp[1000]={0};
    int i,j,n=3;
    dp[0]=1;
    for(i=1;i<n;i++){
         for (j=n;j>=i;j--)
            dp[j]=dp[j]+dp[j-i];
    }
    printf("%d",dp[n]);
    return 0;
}
