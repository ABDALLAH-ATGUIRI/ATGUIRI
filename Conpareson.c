#include <stdio.h>
int main()
{
	int A,B;
	printf("Enter la valeure A = \n");
	scanf("%d",&A);
	printf("Enter la valeure B = \n");
	scanf("%d",&B);
	if (A<B){
		printf("%d < %d",A,B);		
	}
	else {
		if(A>B){
			printf("%d > %d",A,B);
		}
		else {
			printf("%d = %d",A,B);
		}
		
	}
	
}