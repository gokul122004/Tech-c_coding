#include <stdio.h>

int main()
{
    // {3,2,1,5,4} output = {2,1,-1,4,-1}
    /*int n ; 
    printf("Enter the size :");
    scanf("%d",&n);
    int arr[n];
    int arr1[n];
    
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        arr1[i] = 0;
    }
    
    for(int i = 0;i<n;i++)
    {
        int val = -1;
        for(int j = (i+1);j<n;j++)
        {
            if(arr[i] > arr[j])
            {
                val = arr[j];
                break;
            }
        }
        printf("%d ",val);
    }*/
    
    // {3,1,2,5,4} output = {2,-1,-1,4,-1}
    /*int n ; 
    printf("Enter the size :");
    scanf("%d",&n);
    int arr[n];
    int arr1[n];
    
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        arr1[i] = 0;
    }
    
    for(int i = 0;i<n;i++)
    {
        int val = -1;
        for(int j = (i+1);j<n;j++)
        {
            if(arr[i] - arr[j] == 1)
            {
                val = arr[j];
                break;
            }
        }
        printf("%d ",val);
    }*/
    
    // {3,1,2,9,7,6} output = {2,-1,-1,7,6,-1}
    int n ; 
    printf("Enter the size :");
    scanf("%d",&n);
    int arr[n];
    int arr1[n];
    
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        arr1[i] = 0;
    }
    
    for(int i = 0;i<n;i++)
    {
        int val = -1;
        for(int j = (i+1);j<n;j++)
        {
            if(arr[j]<arr[i] && arr[j]>val)
            {
                val = arr[j];    
            }
        }
        printf("%d ",val);
        
    }
    
    return 0;
}