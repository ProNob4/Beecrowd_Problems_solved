#include <stdio.h>

int main()
{

    int i, j, n, k, x;
 
 scanf("%d", &n);
 
 for(i = 1; i <= n; ++i)
 {
  scanf("%d", &k);
  
  for(j = 1; j <= k; ++j)
  {
   scanf("%d", &x);
   
   if(x == 1){
    printf("Rolien\n");
   }else if(x == 2){
       printf("Naej\n");
   }else if(x == 3){
       printf("Elehcim\n");
   }else{
       printf("Odranoel\n");
   }
  }
 }
 
    return 0;

}
