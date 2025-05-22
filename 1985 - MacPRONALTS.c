#include <stdio.h>

int main()
{

    int n,i,p,q;
    float sum=0;
    scanf("%d",&n);
    if(1 <= n <= 5)  
    {
    for ( i = 1; i <= n; i++)
    {

        scanf("%d",&p);
        scanf("%d",&q);

        if (p == 1001)
            sum=sum+(q*1.50);
        else if (p == 1002)
            sum=sum+(q*2.50);
        else if (p == 1003)
            sum=sum+(q*3.50);
        else if (p == 1004)
            sum=sum+(q*4.50);
        else if (p == 1005)
            sum=sum+(q*5.50);

    }
    }
    printf("%.2f\n",sum);
    return 0;

}
