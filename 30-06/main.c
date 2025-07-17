#include <stdio.h>
#include <string.h>

int main()
{
    /*int n;
    printf("Enter the string size : ");
    scanf("%d",&n);
    
    char str[n];
    printf("\nEnter the string : ");
    scanf("%s",str);

    int c=0,c1=0;
    for(int i=0;i<n;i++){
        if(str[i]=='0'){
            c+=1;
        }
        else {
            c1+=1;
        }
    }
    
    printf("The count of 0 is : %d\n",c);
    printf("The count of 1 is : %d",c1);*/
    
    /*int n;
    printf("Enter the string size : ");
    scanf("%d",&n);
    
    char str[n];
    printf("\nEnter the string : ");
    scanf("%s",str);

    
    for(int j=0;j<n;j++){
        int c=0,c1=0;
       for(int i=j;i<n;i++){
        if(str[i]=='0'){
            c+=1;
        }
        else {
            c1+=1;
        }
    }
    for(int k=j;k<n;k++){
        printf("%c",str[k]);
    }
    
    printf("\n");
    printf("The count of 0 is : %d\n",c);
    printf("The count of 1 is : %d\n",c1);
    printf("\n");
    }*/
    
    
    char str[]="10110";
    int max=0;
    for(int i=0;i<strlen(str);i++)
    {
        int count =0;
        printf("i=%d\n",i);
        for(int j=i;j<strlen(str);j++)
        {
            if(str[j]=='0')
            {
                count-=1;
            }
            else
            {
                count+=1;
            }
            
            if(count==0 && (j-i)+1 > max)
            {
                max=j-i +1;
            }
            
        }
        printf("\n");
    }
    printf("%d",max);

    return 0;
}
    
