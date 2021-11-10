#include <stdio.h>
void reverse_text( char *newstring ){
    int i=0;
    while (newstring[i]!=NULL)
    {
        ++i;   // thats how we find length of our sring 
	}
	int size =i ;
	for (i=0;i<size;i++)
	    printf("%c",*(newstring+(size-1)-i));    
}  
  
int main (){
	char string [23];
	printf("Enter a string: ");
	scanf("%[^\n]%*c",string);
	reverse_text(&string);
	
	return 0 ;	
}
