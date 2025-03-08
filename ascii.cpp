#define STR_MAX 20

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

    int x;
    int y;
    int i;
    int j;

    char strbuff[STR_MAX];

    printf("    ");

    x=2;
    
    while (x<=7)
    {
        printf("%i\t", x);
        x++;
    };

    printf("\n");

    x=15;
    while ( x>=0 )
    {
        printf("*");
        x--;
    };

    printf("\n");

    i=0;

    while ( i<=0xf )
    {

        printf("%X: ", i);

        j=2;
        while ( j<=7 )
        {

            snprintf(strbuff, sizeof(STR_MAX), "%X%X", j, i );
            printf("%s\t", strbuff);
            

            j++;

        };
        

        printf("\n");

        i++;
    };
    


    
    




    return 0;


};