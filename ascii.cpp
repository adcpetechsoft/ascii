#define STR_MAX 20

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

    int x;
    int i;
    int j;

    char strbuff[STR_MAX];

    printf("    ");

    i=2;
    
    while (i<=7)
    {
        printf("%i\t", i);
        i++;
    };

    printf("\n");

    i=15;
    while ( i>=0 )
    {
        printf("*");
        i--;
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
            sscanf(strbuff, "%X", &x);
            
            printf("%c\t", x);
            

            j++;

        };
        

        printf("\n");

        i++;
    };
    


    
    




    return 0;


};