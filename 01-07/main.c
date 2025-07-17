#include <stdio.h>

int main()
{
	// add element to array
	/*int arr[5] = {1,2,3,4,5};
	arr[6] = 7;
	printf("%d",arr[6]);*/

	// delete element in array
	/*int size = 5;
	int arr[5] = {1,2,3,4,5};
	int ind = 1;
	for(int i=ind;i<size-1;i++)
	{
	    arr[i] = arr[i+1];
	}
	for(int i=0;i<size-1;i++)
	{
	    printf("%d\n",arr[i]);
	}*/

	// Add element
	/*int n=5;
	int arr[10] = {1,2,3,4,5};

	int size;
	printf("Elements to be added count : ");
	scanf("%d",&size);
	size=size+n;

	for(int i=n;i<size;i++)
	{
	    int ele=0;
	    printf("\nEnter element : ");
	    scanf("%d",&ele);
	    arr[i] = ele;
	}

	for(int i=0;i<size;i++)
	{
	    printf("%d ",arr[i]);
	}*/

	/*int n=5;
	int arr[50] = {1,2,3,4,5};
	int ind=3, val=8;

	for(int i=n;i>ind;i--)
	{
	    arr[i] = arr[i-1];
	}

	arr[ind] = val;
	n++;

	for(int i=0;i<n;i++)
	{
	    printf("%d ",arr[i]);
	}*/
    
    // Binary Search
	/*int size=7;
	int arr[7] = {1,2,3,4,5,6,7};
	int l=0,r=size-1,ele; // 7,1,17(not present)
	printf("Enter a element : ");
	scanf("%d",&ele);
	int n=0;

	while(l<=r)
	{
		int mid = (l+r)/2;
		if(arr[mid]==ele)
		{
			printf("The index of %d is %d ",ele,mid);
			n=1;
			break;
		}
		else if(ele>arr[mid])
		{
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
	
	if(n==0)
	{
		printf("Invalid element");
	}*/

    int a,b;
    printf("Enter a number : ");
    scanf("%d",&a);
    int c=a;
    
    while(c>0)
    {
        c--;
        b = (c%26) + 'A';
        c/=26;
        
        if(c<0)
        {
            printf("%c",a);
        }
        else if(c>0)
        {
            printf("%c%c",b,c+'A');
        }
        
    }

	return 0;
}















