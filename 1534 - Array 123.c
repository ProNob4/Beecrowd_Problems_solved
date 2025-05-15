#include <stdio.h>
int main()
{
    int n,r,c;
    while(scanf("%d",&n) !=EOF)
    {
    int a[n][n];
    for(r=0; r<n; r++)
    {
       for(c=0; c<n; c++)
       {
         if(r+c==n-1)
              {
                a[r][c]=2;
              }
        else if(r==c){
              a[r][c]=1;
              }
        else{
            a[r][c]=3;
        }
       }

    }

    for(r=0; r<n; r++)
    {
       for(c=0; c<n;c++)
        {
         printf("%d",a[r][c]);
       }
        printf("\n");
    }


    }
return 0;
}
