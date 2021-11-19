#include <stdio.h>
#include <time.h>
# include <stdlib.h>
int i;
void swap (int *a ,int *b)
{
	int temp =*a;
	*a=*b;
	*b=temp;
}


int quick(int arr[],int first,int last)
{   
int pivot = arr[last];
int quick=first-1;
int final_position;
for (i=first;i<last+1;i++)
{
if (arr[i]<pivot)
{
++quick;
swap(&arr[i],&arr[quick]);
}    
}

final_position=quick+1;
swap(&arr[final_position],&arr[last]);
return quick +1;
    }


void quicksort (int arr[],int first , int last)
{
	if (first<last)
	{
	int p ;
    p=quick(arr,first,last);
	quicksort(arr,first,p-1);
	quicksort(arr,p+1,last);
	
}
	
}


    
    


void insertion (int arr[],int n)
{
	int j,i;
	j=n-1;
	int star;
	for(i=1;i<n;i++)
	{
		int check =i;
		j=i-1;
		while (j>=0 )
		{
			if (arr[check]<arr[j])
			    swap(&arr[check],&arr[j]);
			--check    ;
			--j;
		}
	}
}

void print (int arr[],int n)
{   int i;
	for (i=0;i<n;i++)
	{
		printf("%d \n",arr[i]);
	}
}

int main (){
	int i;
	srand(time(NULL));
	long arr [100001];
	for (i=0;i<100001;i++)
	{
	    int number=rand()%100001 ;
	    arr[i]=number;
}
	int size =sizeof(arr)/sizeof(arr[0]);
	printf("Array of 100000 random numbers is initialized");
	float timereq1=clock();
    quicksort(arr,0,size-1);
    timereq1=clock()-timereq1;
    float timereq2=clock();
	insertion(arr,size);
	timereq2=clock()-timereq2;
	printf("\nthis array is sorted using quick sort in : %f mili seconds",timereq1);
	printf("\nthis array is sorted using insertion sort in : %f mili seconds",timereq2);
	
	return 0;
} 
