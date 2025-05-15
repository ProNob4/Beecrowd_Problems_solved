#include <stdio.h>
int main()
{
    int n,r,c,x;
    while (1)
    {
     
    scanf("%d",&n);
    if(n==0)
        break;
    for(r=1;r<=n;r++){
            for(c=1;c<=n;c++){
                x = r;
                if(c < x)
                   x = c;
                if(n-r+1 < x)
                   x = n-r+1;
                if(n-c+1 < x)
                   x = n-c+1;
                   printf("%3d",x);
                if(c < n)
                   printf(" ");

                else printf("\n");
            }
        }
        printf("\n");
    }
return 0;
}
