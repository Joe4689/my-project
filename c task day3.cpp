#include <stdio.h>
int main() {
        int x[4][2]={{0,25},{25,50},{50,75},{75,100}};
        int flag =0;
		int rounds=0;
        float number ;
        printf("please enter a number: \n");
        scanf("%f",&number);
        while (rounds<5)
        {  if ((x[rounds][0]<number) && (number<x[rounds][1]))
                {
                if (rounds==0)	
                    {
					
				    printf("Interval [%d,%d] \n",x[rounds][0],x[rounds][1]);
				    flag=1;
				    }
                else 
                    {
                    printf("Interval (%d,%d] \n",x[rounds][0],x[rounds][1]);
                    flag=1;
			        }
			 }
            ++rounds;
            
		}
        if (flag==0)
            printf("Out of Intervals");
	return 0 ;
}