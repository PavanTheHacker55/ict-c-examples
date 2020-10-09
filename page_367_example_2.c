#include<stdio.h>
#include<conio.h> // unnecessary header file for codeblocks
main() {
    float x=255;
    printf("\nx=%f ",x);
    printf("\nx=%10.0f ",x);
    printf("\nx=%10.1f ",x);
    printf("\nx=%10.2f ",x);
    printf("\nx=%10.3f ",x);
    printf("\nx=%10.4f ",x);
    printf("\n");
    printf("\nx=%f ",x);
    printf("\nx=%.0f ",x);
    printf("\nx=%.1f ",x);
    printf("\nx=%.2f ",x);
    printf("\nx=%.3f ",x);
    printf("\nx=%.4f ",x);
}

//Output:
//x=255.000000
//x=       255
//x=     255.0
//x=    255.00
//x=   255.000
//x=  255.0000
//
//x=255.000000
//x=255
//x=255.0
//x=255.00
//x=255.000
//x=255.0000
