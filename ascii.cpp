/*
    ASCII Table Display Progrma
    As a submission to https://code.golf/ascii-table#c

    Created by: amd

*/

// ---------------------------------
// Preprocessor Declaration
#define STR_MAX 20

#include <stdio.h>

// ---------------------------------
// Progran  Entry Point
int main(int argc, char *argv[])
{

    // ***********************
    // Variable Declaration

    int x;
    int i;
    int j;

    char strbuff[STR_MAX];


    // ***********************
    // Actual Procedure

    printf("   ");

    i=2;
    
    while (i<=7)
    {
        printf("%i ", i);
        i++;
    };

    printf("\n");

    i=13;
    printf(" ");
    while ( i>0 )
    {
        printf("-");
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

            if( x == 0x7f)
            {
                printf("DEL ");
            }else
            {
                printf("%c ", x);
            };
            
            j++;

        };
        
        printf("\n");

        i++;
    };
    
    return 0;

};