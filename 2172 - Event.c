#include <stdio.h>
 
int main() {
 
    while(1)
    {
    int x;
    long long int y;
    scanf("%d%lld",&x,&y);
    
    if(x==0 && y==0)
            break;
    
        printf("%d\n",x*y);
        
    
    }
    return 0;
}
