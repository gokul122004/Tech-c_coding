#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Insertion sort
    /*int n;
    printf("Enter array size : ");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("\nEnter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for(int i=1;i<n;i++)
    {
        int j = i-1;
        int key = arr[i];
        
        while(j>=0 && key<arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }*/
    
    //Selection sort
    /*int n;
    printf("Enter array size : ");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("\nEnter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=(i+1);j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min = j;
            }
        }
        
        if(min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }*/
    
    //Bubble sort
    /*int n;
    printf("Enter array size : ");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("\nEnter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }*/
    
    
    
    

    return 0;
}












