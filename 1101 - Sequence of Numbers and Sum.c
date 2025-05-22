#include <stdio.h>

int main(){
    
    int n;
    int x, y, temp;
    int s;
    
    while(1){
 
                scanf("%d%d",&x,&y);
                if(x <= 0) break;
                if(y <= 0) break;
                
                if(x > y){
                     temp = x;
                     x = y;
                     y = temp;
                }
                s = 0;
                for(int i = x; i <= y; i++){
                       printf("%d ",i);
                       s += i;
                }
                printf("Sum=%d\n",s);

    }
    return 0;
}
