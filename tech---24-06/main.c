#include <stdio.h>


int main()
{
    //Matrix miltiplication
    int a,b,c,d;
    printf("Enter row and column of matrix 1 : ");
    scanf("%d %d",&a,&b);
    printf("Enter row and column of matrix 2 : ");
    scanf("%d %d",&c,&d);
    
    int m1[a][b],m2[c][d],r[a][d];
    
    printf("Enter matrix 1 value : ");
    for(int i = 0;i<a;i++){
        for(int j = 0;j<b;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    
    printf("Enter matrix 2 value : ");
    for(int i = 0;i<c;i++){
        for(int j = 0;j<d;j++){
            scanf("%d",&m2[i][j]);
        }
    }
    
    for(int i = 0;i<a;i++){
        for(int j = 0;j<d;j++){
            r[i][j] = 0;
        }
    }
    
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            for(int k=0;k<b;k++){
                r[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    
    for(int i = 0;i<a;i++){
        for(int j = 0;j<d;j++){
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
