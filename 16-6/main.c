#include <stdio.h>

int main()
{
    // for(int i = 0;i<7;i++)
    // {
    //     for(int j = 0;j<6;j++)
    //     {
    //         printf("%d",i);
    //     }
    //     printf("\n");
    // }
    
    
    // int a;
    // printf("Enter a number:");
    // scanf("%d",&a);
    
    // for(int i = 0;i<a;i++)
    // {
    //     for(int j = 0;j<a;j++)
    //     {
    //         printf("*",i);
    //     }
    //     printf("\n");
    // }
    
    // int a,b;
    // printf("Enter two numbers : ");
    // scanf("%d %d",&a,&b);
    // for(int i = 0;i<a;i++)
    // {
    //     for(int j = 0;j<b;j++)
    //     {
    //         if(i==0 || i==(a-1) || j==0 || j==(b-1))
    //         {
    //             printf("* ");
    //         }
    //         else {
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }
    
    // int a,b;
    // printf("Enter two numbers : ");
    // scanf("%d %d",&a,&b);
    // for(int i = 0;i<a;i++)
    // {
    //     for(int j = 0;j<b;j++)
    //     {
    //         if((i+j+1) > 5)
    //         {
    //             printf("%d ",i+j-4);
    //         }
    //         else 
    //         {
    //             printf("%d ",i+j+1);
    //         }
    //     }
        
    //     printf("\n");
    // }
    
    // int a,b;
    // printf("Enter two numbers : ");
    // scanf("%d %d",&a,&b);
    // for(int i = 0;i<a;i++)
    // {
    //     for(int j = 0;j<b;j++)
    //     {
    //         printf("%d ",((i+j)%5)+1);
    //     }
        
    //     printf("\n");
    // }
    
    // int a;
    // printf("Enter a number : ");
    // scanf("%d",&a);
    // for(int i = 0;i<a;i++)
    // {
    //     for(int j = 0;j<=i;j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    
    // int a;
    // printf("Enter a number : ");
    // scanf("%d",&a);
    // for(int i = 0;i<a;i++)
    // {
    //     for(int s = 0;s<(a-i)-1;s++)
    //     {
    //         printf(" ");
    //     }
    //     for(int j = 0;j<=i;j++)
    //     {
    //         printf("*"); //printf(" *") use this for triangle
    //     }
    //     printf("\n");
    // }
    
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    for(int i = 0;i<a;i++)
    {
        for(int s = 0;s<(a-i)-1;s++)
        {
            printf(" ");
        }
        for(int j = 0;j<=i*2;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}