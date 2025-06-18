#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*n=2;
        0
      1 0 1
    2 1 0 1 2*/
    /*int a;
    scanf("%d",&a);
    for(int i = 0;i<a;i++)
    {
        int temp = i;
        for(int s = 0;s<(a-i)+1;s++)
        {
            printf(" ");
        }
        for(int j = 0;j<=(i*2);j++)
        {
            printf("%d",abs(temp--));
        }
        printf("\n");
    }*/
    
    /*n=3 
    1   1 
      2 
    3   3*/
    /*int a;
    scanf("%d",&a);
    for(int i = 0;i<a;i++){
        for(int j = 0;j<=a;j++){
            if(i==j){
                printf("%d",i+1);
            }
            else if ((i+j) == (a-1)){
                printf("%d",j+1);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }*/
    
    /*c=bob
    b b 
     o 
    b b*/
    /*char c[100]="bob";
    int a = strlen(c);
    for(int i = 0;i<a;i++){
        for(int j = 0;j<=a;j++){
            if(i==j){
                printf("%c",c[i]);
            }
            else if ((i+j) == (a-1)){
                printf("%c",c[j]);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }*/
    
    /*Butterfly pattern*/

    int a;
    scanf("%d", &a);
    int n = (a * 2);

    // Upper part of the butterfly
    for (int i = 1; i <= a; i++) {
        // Left wing
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Spaces
        for (int s = 1; s <= (n - 2 * i); s++) {
            printf(" ");
        }
        // Right wing
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of the butterfly
    for (int i = a; i >= 1; i--) {
        // Left wing
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Spaces
        for (int s = 1; s <= (n - 2 * i); s++) {
            printf(" ");
        }
        // Right wing
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }



    return 0;
}

































































