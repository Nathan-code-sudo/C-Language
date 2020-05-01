#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char pluralnoun[20];
    char CelebrityF[20];
    char CelebrityL[20];

    printf ("Enter a color:");
    scanf ("%s", color);
    printf ("Enter a pluralnoun:");
    scanf ("%s", pluralnoun);
    printf ("Enter a Celebrity:");
    scanf ("%s %s", CelebrityF, CelebrityL);

    printf(" \nRoses are %s \n" , color);
    printf("%s are blue \n", pluralnoun);
    printf("I Love %s %s \n", CelebrityF, CelebrityL);



    return 0;
}
