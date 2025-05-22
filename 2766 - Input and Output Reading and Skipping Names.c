#include <stdio.h>

int main()
{

    char s[40];

    for (int i = 1; i <= 10; ++i)
    {

        scanf("%s", s);

        if (i == 3)
            puts(s);
        else if (i == 7)
            puts(s);
        else if (i == 9)
            puts(s);

    }

    return 0;

}
