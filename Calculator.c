#include <stdio.h>
#include <stdlib.h>
int main(){

    int x;
    int y;
    int op;
    int opt;
    int result;

    system("cls");
    printf("Welcome to smart calculator!\n\n");
    printf("To get started, let me know the type of basic mathematical operation we're going to perform.\n\n");
    
    printf("(1)Addiction\n(2)Subtraction\n(3)Multiplication\n(4)Division\n\n");
    scanf("%d",&op);
    system("cls");
    
    int i = 0;
    while (i <= 0)
    {
        switch (op)
        {
        case 1:
            system("cls");
            printf("Operation selected, Addiction.\n");
            i = 1;
            break;
        case 2:
            system("cls");
            printf("Operation selected, Subtraction.\n");
            i = 1;
            break;
        case 3:
            system("cls");
            printf("Operation selected, Multiplication.\n");
            i = 1;
            break;
        case 4:
            system("cls");
            printf("Operation selected, Division\n");
            i = 1;
            break;
        default:
            system("cls");
            printf("Error, operation not found!\n");
            printf("Please try again!\nChoose one of the operations below.\n\n(1)Addiction\n(2)Subtraction\n(3)Multiplication\n(4)Division\n\n");
            scanf("%d",&op);
            i = 0;
            break;
        }
    }
    printf("Enter the first number.\n\n");
    scanf("%d",&x);
    system("cls");

    printf("Enter the first number.\n\n");
    scanf("%d",&y);
    system("cls");

    switch (op)
    {
    case 1:
        result = x + y;
        printf("It's operation was %d + %d = %d",x,y,result);
        break;
    case 2:
        result = x - y;
        printf("It's operation was %d - %d = %d",x,y,result);
        break;
    case 3:
        result = x * y;
        printf("It's operation was %d - %d = %d",x,y,result);
        break;
    case 4:
        result = x / y;
        printf("It's operation was %d / %d = %d",x,y,result);
        break;
    default:
        printf("Error!!");
        break;
    }
    
}