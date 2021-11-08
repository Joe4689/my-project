#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {
	int N,M,number ;
	int flag=0;
    printf("Enter the number of rows: ");
    scanf("%d",&N);
    printf("Enter the number of columns: ");
    scanf("%d",&M);
    int array [N][M];
    int i,k=0;
    srand(time(NULL)); // it helps in getting  different random numbers each time
    for (i=0;i<N;i++)
    {
    	for (k=0;k<M;k++)
    	{   
            number=rand()%10;
            array [i][k]=number	;
            printf("%2d",number);
		}
		printf("\n");
	}  
    int x;
    printf("element x that you ant to check: ");
    scanf("%d",&x);
     for (i=0;i<N && flag==0;i++)
    {
    	for (k=0;k<M;k++)
    	{ if (array[i][k]==x)
    	{
		
    	    printf("found the number %d in the array",x);
    	    flag=1;
    	    
    	    break;
    
    }
}
}
   if (flag==0)
       printf("Didn't found he number %d in the array",x);
    return 0 ;
	
  }      
  
