#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    // char ch;
    // printf("Enter a Character : ");
    // scanf("%c",&ch);
    // if (isalpha(ch)) {
    //     printf("%c is Alphabet",ch);
    // }
    // else {
    //     printf("%c is Not a Alphabet",ch);
    // }
    
    //ch>='a' & ch<='z' || ch>='A' & ch<='Z' ? printf("%c is Alphabet",ch) : printf("%c is not a alphabet",ch);

    // if(ch == 'Z' || ch == 'z'){
    //     printf("%c",ch-25);
    // }
    // else{
    //     printf("%c",ch+1);
    // }
    
    // int a = 10 , b = 6;
    // a = a + b;
    // b = a - b;
    // a = a - b;
    // printf("a=%d, b=%d",a,b);
    
    // char str[] = "H1e2ll7o";
    // char str1[100] = "";
    // int j = 0;
    // for(int i = 0;i < strlen(str);i++){
    //     if(isalpha(str[i])){
    //         str1[j] = str[i];
    //         j++;
    //     }
    // }
    // printf("%s",str1);
    
    char str[] = "aBc$D#eF";
    char str1[100] = "";
    int j = 0;
    for(int i = 0;i < strlen(str);i++){
        if(isupper(str[i])){
            str1[j] = tolower(str[i]);
            j++;
        }
        else if (islower(str[i])){
            str1[j] = toupper(str[i]);
            j++;
        }
        
    }
    printf("%s",str1);
    
    
    
    return 0;
}