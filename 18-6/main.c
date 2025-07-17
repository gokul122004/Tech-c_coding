#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Pointers*/
    /*int a = 10;
    int *p = &a; //& - address of a , * - value at address
    
    printf("%p\n",p);
    printf("%p\n",&a);
    printf("%d\n",*p);
    printf("%d\n",a);*/
    
    /*int *p = malloc(sizeof(int));
    *p = 10;
    printf("%p\n",p);
    printf("%d\n",*p);*/
    
    /*Reference by address*/
    /*void hi(int *p) {
        *p+=1;
    }
    void hello(char *p){
        *p+=1;
    }
    
    int a=10;
    char ch='D';
    hi(&a);
    hello(&ch);
    printf("%d\n",a);
    printf("%c\n",ch);*/
    
    /*Reference by value*/
    /*void add(int a,int b){
        printf("%d\n",a+b);
    }

    int a=10,b=9;
    add(a,b);
    printf("%d,%d",a,b);*/
    
    /*Types of pointer*/
    /*simple pointer*/
    int a=10;
    int *p = &a;
    
    /*Null pointer*/
    int *pt = NULL;
    
    /*Void pointer*/
    void *ptr = &a;
    printf("%p\n\n",ptr);
    
    /*Wild pointer*/
    int *wpt;
    printf("%p\n\n",wpt); //it returns the address of the pointer but it does not contain data
    
    /*Dangling pointer*/
    int *dpt = malloc(sizeof(int));
    printf("%p\n",dpt);
    *dpt = 35;
    printf("%d\n",*dpt);
    free(dpt);
    *dpt = NULL;
    printf("%p\n",dpt);
    printf("%d\n",*dpt);
    
    
    return 0;
}























