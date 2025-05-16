#include <stdio.h>
    int main()
    {
    int D,M,Y;
    scanf("%d/%d/%d",&D,&M,&Y);
    printf("%.2d/%.2d/%.2d\n",M,D,Y);
    printf("%.2d/%.2d/%.2d\n",Y,M,D);
    printf("%.2d-%.2d-%.2d\n",D,M,Y);
   
        return 0;
    }
