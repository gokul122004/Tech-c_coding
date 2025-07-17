#include <stdio.h>

//Recursion

int fact(int n)
{
    if(n<=1)
    return 1;
    return n*fact(n-1);
}
    
int print(int n)
{
    if(n==0)
    return 5;
    print(n-1);
    printf("%d",n);
}
    
int main()
{
    
   /* printf("%d",fact(5));
    print(5);*/
    
    //file write suntax
    
    /*FILE *fpw;
    fpw = fopen("g1.txt","w");
    fputs("Write Operation",fpw);
    fclose(fpw);*/
    
    //file read syntax
    
    /*FILE *fp;
    fp = fopen("g1.txt","r");
    
    if(fp!=NULL)
    {
        char str[200];
        while(fgets(str,200,fp))
        printf("%s",str);
    }*/
    
    /*int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c ",65+j);
        }
        printf("\n");
        
        i++;
        if(i==a)break;
        for(int j=(a-1);j>=(a-1)-i;j--)
        {
            printf("%c ",65+j);
        }
        printf("\n");
    }*/
    
    char str[10];
    scanf("%s",str);
    
    return 0;
}








