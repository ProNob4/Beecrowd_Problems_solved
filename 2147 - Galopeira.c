#include <stdio.h>
#include <string.h>
int main()
{
    char a[10000];
    int lent,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",&a);
        lent= strlen(a);
        printf("%.2lf\n",lent*0.01);
    }

    return 0;
}

