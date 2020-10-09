#include<stdio.h>
#include<conio.h>
int main() {
    int a,b,andgate,orgate,notgate,nandgate,norgate,xorgate,xnorgate;
    int choice;
    printf("1: AND Gate\n" );
    printf("2: OR Gate\n" );
    printf("3: NOT Gate\n" );
    printf("4: NAND Gate\n" );
    printf("5: NOR Gate\n" );
    printf("6: XOR Gate\n" );
    printf("7: XNOR Gate\n" );
    printf("8: Exit\n" );
    printf("Type the choice( 1 to 7 for above listed gate): ");
    scanf("%d",&choice); printf("\n" );
    switch(choice) {
        case 1:
            printf("...........For AND Gate............\n");
            printf("\n" ); printf("Enter the input value1 (0 or 1 only):");
            scanf("%d",&a);
            printf("Enter the input value2(0 or 1 only):");
            scanf("%d",&b);
            andgate=a&&b;
            printf("AND gate Output=%d",andgate);
            break;
        case 2:
            printf("...........For OR Gate...........\n");
            printf("\n" );
            printf("Enter the input value1(0 or 1 only):");
            scanf("%d",&a);
            printf("Enter the input value2(0 or 1 only):");
            scanf("%d",&b);
            orgate=a||b;
            printf("OR Gate Output=%d",orgate);
            break;
        case 3:
            printf("...........For NOT Gate..............\n");
            printf("\n" );
            printf("Enter the input value(0 or 1 only):");
            scanf("%d",&a);
            notgate=!a;
            printf("NOT Gate Output=%d",notgate);
            break;
        case 4:
            printf(".............For NAND Gate............\n");
            printf("\n" );
            printf("Enter the input value1(0 or 1 only):");
            scanf("%d",&a);
            printf("Enter the input value2(0 or 1 only):");
            scanf("%d",&b);
            nandgate=!(a&&b);
            printf("NAND Gate Output=%d",nandgate);
            break;
        case 5:
            printf(".............For NOR Gate..............\n");
            printf("\n" );
            printf("Enter the input value1(0 or 1 only):");
            scanf("%d",&a);
            printf("Enter the input value2(0 or 1 only):");
            scanf("%d",&b);
            norgate=!(a||b);
            printf("NOR Gate Output=%d",norgate);
            break;
        case 6:
            printf("...............For XOR Gate...............\n");
            printf("\n" );
            printf("Enter the input value1(0 or 1 only):");
            scanf("%d",&a);
            printf("Enter the input value2(0 or 1 only):");
            scanf("%d",&b);
            xorgate=a^b;
            printf("XOR Gate Output=%d",xorgate);
            break;
        case 7:
            printf(".................For XNOR Gate................\n");
            printf("\n" );
            printf("Enter the input value1(0 or 1 only):");
            scanf("%d",&a);
            printf("Enter the input value2(0 or 1 only):");
            scanf("%d",&b);
            xnorgate=!(a^b);
            printf("XNOR Gate Output=%d",xnorgate);
            break;
        case 8:
            break;
        default:
            printf("Invalid choice.");
    }
    getch();
}
