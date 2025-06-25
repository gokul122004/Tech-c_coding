#include <stdio.h>
#include <string.h>

int main()
{
    /*char str[] = "saravanan";
    int i=0;
    int arr[26] = {0};
    
    for(int i=0;i<strlen(str);i++){
        arr[str[i]-'a']+=1;
    }
    
    for(int i=0;i<strlen(str);i++){
        if(arr[str[i]-'a']){
            printf("%c->%d\n",str[i],arr[str[i]-'a']);
            arr[str[i]-'a']=0;
        }
        
    }*/
    
    /*char str[10];
    scanf("%s",str);
    int val = str[0]-'0';
    for(int i=1;i<=strlen(str)/2;i++){
        switch(str[(strlen(str)/2)+i]){
            case '+':{
                val+=(str[i]-'0');
                break;
            }
            case '-':{
                val-=(str[i]-'0');
                break;
            }
            case '*':{
                val*=(str[i]-'0');
                break;
            }
            case '/':{
                val/=(str[i]-'0');
                break;
            }
        }
    }
    printf("%d",val);*/
    
    char str[10] = "Hello";
    char str1[100];
    
    for(int i=0;i<strlen(str);i++){
        str1[i] = str[i];
    }
    str1 == '\0';
    printf("%ld",strlen(str1));
    
    return 0;
}
























