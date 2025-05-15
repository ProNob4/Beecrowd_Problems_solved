#include <stdio.h>
#include <string.h>
int main()
{
    char a[10000];
    int l;
        gets(a);
        l=strlen(a);
        for(int i=0; i<l; i++)
        {
            if(a[i]==',')
                printf("\n");
        else
            printf("%c",a[i]);
        }
        printf("\n");
    return 0;
}
