#include <stdio.h>

int main()
{
    /*int arr[5] = {1,2,3,45,7};
    for(int i = 0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }*/
    
    //Sum of all integers
    /*int arr[5] = {1,2,3,45,7};
    int sum = 0;
    for(int i = 0;i<5;i++){
        printf("i = %d arr[%d] = %d\n",i,i,arr[i]);
        sum+=arr[i];
        printf("%d\n",sum);
    }*/
    
    //Linear sort
    /*int arr[5] = {1,2,3,45,7};
    for(int i = 0;i<5;i++){
        for(int j = i+1;j<5;j++){
            if(arr[j]>arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d ",arr[i]);
    }*/
    
    //print duplicate numbers  
    /*int arr[6] = {2,2,2,3,3,2};
    int arr1[6] = {0};
    for(int i = 0;i<6;i++){
        if(arr1[i])continue;
        int count = 0;
        for(int j = i+1;j<6;j++){
            if(arr[j] == arr[i]){
                count += 1;
                arr1[j] = 1;
            }
        }
        if(count > 0 ) printf("%d ",arr[i]);
    }*/
    
    
    return 0;
}























