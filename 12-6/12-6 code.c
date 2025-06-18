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