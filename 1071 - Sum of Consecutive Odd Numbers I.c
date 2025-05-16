#include<stdio.h>
int main() {

int i,j,n,s=0;
scanf("%d",&n);
scanf("%d",&i);

for(j=(i+1);j<n;j++){

if(j%2!=0){
    s=s+j;
}

}    
    printf("%d\n",s);   
return 0;
}
