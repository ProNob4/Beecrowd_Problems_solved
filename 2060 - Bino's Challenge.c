#include <stdio.h>
int main()
{
  int n,i,t=0,th=0,f=0,fi=0;
  scanf("%d",&n);
  int a[n];
  for(i=0; i<n; i++)
    {
      scanf("%d",&a[i]);
   }
   
  for(i=0; i<n; i++)
    {
      if(1 <= a[i] <= 100)
      {
      if(a[i]%2==0)
      t++;
      if(a[i]%3==0)
      th++;
      if(a[i]%4==0)
      f++;
      if(a[i]%5==0)
      fi++;   
    }
    }
    printf("%d Multiplo(s) de 2\n",t);
    printf("%d Multiplo(s) de 3\n",th);
    printf("%d Multiplo(s) de 4\n",f);
    printf("%d Multiplo(s) de 5\n",fi);
  return 0;
}
 
