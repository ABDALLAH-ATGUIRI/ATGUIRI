#include<stdio.h>
int main()
{
	int P,i,A;
	char R[20]=("Correct answer\n");
	char T[20]=("Wrong answer\n");

	printf("wellcome to my quize\n");
	printf("first stage : \n");
	P=0;
	for(i=1;i<=7;i++){
	switch(i){
	
		case 1:{
		
		printf("Question No : %i\n",i);
		printf("-> 25 + 3= \n1> 26\n2> 28\n3> 30\n");
		scanf("%d",&A);
		if(A==2)
		{
			printf("%s",R);
			P+=1;
			printf(" %d piont\n",P );
		}
		else             
		{         
			printf("%s",T);
			
		}
		break;
		}
		case 2:{
			
		printf("Question No: %i\n",i);
		printf("-> 273 - 60= \n 1> 213\n 2> 223\n 3> 233\n");
		scanf("%d",&A);
		
		if(A==1)
		{
			printf("%s",R);
			P+=1;
			printf("%d piont\n",P);
		}
		else
		{                  
			printf("%s",T);
		}
		break;
		}
		case 3:{
				
				
			printf("Question No: %i\n",i);
			printf("-> 15 * 11= \n");
			printf(" 1> 160\n 2> 163\n 3> 165\n");
 			scanf("%d",&A);
		if(A==3)
		{
			printf("%s",R);
			P+=1;
			printf("%d piont\n",P);
		}
		else
		{            
			printf("%s",T);
		}
		break;
		}		
		printf("Second stage : \n");
	
		case 4:{
		
		printf("Question No : %i\n",i);
		printf("-> number of rainbow colors :\n" );
		printf(" 1> 3\n 2> 5\n 3> 7\n ");
		scanf("%d",&A);
		if(A==3)
		{
			printf("%s",R);
			P+=1;
			printf(" %d piont\n",P );
		}
		else             
		{         
			printf("%s",T);
		}
		break;
		}
		case 5:{
			
		printf("Question No: %i\n",i);
		printf("-> In what year did the first Wold war begin ?\n 1>1914\n 2>1917\n 3>1919\n");
		scanf("%d",&A);
		
		if(A==2)
		{
			printf("%s",R);
			P+=1;
			printf("%d piont\n",P);
		}
		else
		{                  
			printf("%s",T);
		}
		break;
		}
		case 6:{
				
				
			printf("Question No: %i\n",i);
			printf("-> What is the year of the green march?\n 1>1945\n 2>1950\n 3>1956\n");

 		scanf("%d",&A);
		if(A==3)
		{
			printf("%s",R);
			P+=1;
			printf("%d piont\n",P);
		}
		else
		{            
			printf("%s",T);
		}
		break;
	
		}	
		}	
		}
			
		printf("You have %d piont\n",P);
		printf("Good Game");
	return 0;
	
}