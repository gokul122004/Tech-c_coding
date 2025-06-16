#include <stdio.h>
#include <string.h>

int main()
{
    // char str[100];
    // printf("Enter a string : ");
    // scanf("%s",str);
    
    // for(int i = 0;i < strlen(str);i++){
    //     if(str[i] >= 'A' && str[i] <= 'Z') {
    //         printf("%c", str[i] + 32);
    //     }
    //     else if(str[i] >= 'a' && str[i] <= 'z'){
    //         printf("%c", str[i] - 32);
    //     }
    //     else {
    //         printf("%c",str[i]);
    //     }
    // }
    
    char str[100];
    printf("Enter a string : ");
    scanf("%s",str);
    for(int i = 0;i < strlen(str);i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            if (str[i] == 'Z'){
                printf("%c",str[i] + 7);
            }
            else {
                printf("%c",str[i] + 33);
            }
        }
        else if(str[i] >= 'a' && str[i] <= 'z') {
            if (str[i] == 'z'){
                printf("%c",str[i] - 57);
            }
            else {
                printf("%c",str[i] - 33);
            }
        }
        else {
            printf("%c",str[i]);
        }
    }

    return 0;
}