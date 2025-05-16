#include <stdio.h>

int main() {

    int n,y,m,d,x;
    scanf("%d",&n);
     y=n/365;
     x=n-(365*y);
     m=x/30;
     d=x-(m*30);
    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);

    return 0;
}
