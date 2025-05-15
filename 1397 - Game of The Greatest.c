#include <stdio.h>
int main(){

    int n;
    while (scanf("%d",&n) != EOF)
    {
        int r,c=0,i=0,a,b;
        if(n<1 || 10<n)
            break;
    for(r=1; r<=n; r++)
    {
        scanf("%d%d",&a,&b);
        if(a>b)
            c++;
        else if(a<b)
            i++;
        else
            continue;

    }
    printf("%d %d\n",c,i);
   }
    return 0;
}
