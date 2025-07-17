#include <stdio.h>
#include <string.h>

int main()
{
    //print character with space
    /*char str[] = "Hello";
    for(int i=0;i<strlen(str);i++){
        printf("%c ",str[i]);
    }*/
    
    //count characters
    /*char str[] = "Hello";
    printf("%ld",strlen(str));*/
    
    //search for a character
    /*char str[] = "Hello";
    char s[] = "e";
    int b=0;
    for(int i=0;i<strlen(str);i++){
        if(s[0]==str[i]){
            printf("Found");
            b=1;
            break;
        }
    }
    if(b==0) printf("Not Found");*/
    
    //merge two strings
    /*char str[] = "Hello";
    char str1[] = "World";
    char str2[100];
    int i=0,j=0;
    
    while(str[i]!='\0'){
        str2[i] = str[i];
        i++;
    }
    
    while(str1[j]!='\0'){
        str2[i] = str1[j];
        i++;
        j++;
    }
    
    str2[i] = '\0';
    
    printf("%s",str2);*/
    
    //reverse a string
    /*char str[] = "Hello";
    for(int i=strlen(str);i>0;i--){
        printf("%c",str[i-1]);
    }*/
    
    //Lexical Comparison
    /*char str1[100], str2[100];
    int i = 0;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) {
            printf("str1 is smaller\n");
            return 0;
        } else if (str1[i] > str2[i]) {
            printf("str1 is greater\n");
            return 0;
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        printf("Both strings are equal\n");
    } else if (str1[i] == '\0') {
        printf("str1 is smaller\n");
    } else {
        printf("str1 is greater\n");
    }*/
    
    //Copy one string to another
    /*char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);
    for(int i=0;i<strlen(str1);i++){
        str2[i] = str1[i];
    }
    printf("Copy of first string : %s",str2);*/
    
    
    
    
    return 0;
}



























