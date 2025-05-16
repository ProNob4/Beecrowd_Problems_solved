#include<stdio.h>
int main(){
    long long int a,n,s;
    scanf("%lld %lld",&a,&n);
    s=((n*((2*1)+(n-1))/2))-((a*(a+1))/2)+a;
    printf("%lld\n",s);
    return 0;
}
