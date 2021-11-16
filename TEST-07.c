#include <stdio.h>
//void(int X){
//	
//	
//}

int main(){
	
	int n,i,j,C,x;
	int M,P;
	

	printf("veuillez taper la dimension du tableau : ");
	scanf("%d",&n);
	
		int T[n];
		
	for(i=0;i<n;i++){
		printf(" T[%d]= ",i+1);
		scanf("%d",&T[i]);
	}
	printf("1 ==>Tri par sélection \n2 ==>Le tri par Insertion \n3 ==>Le tri à Bulles \n");
	scanf("%d",x);
	switch(x){
		case 3:{
					for (i=0;i<n;i++)
					printf("T[%d]=%d ",i+1,T[i]);
	
					for(j=n;j>0;j--){
					for(i=0;i<n;i++){
						if (T[i]>T[i+1]){
							C=T[i];
							T[i]=T[i+1];
							T[i+1]=C;
							
						}
						}
					}
						
						printf("\n**********************************************\n");
					
					for (i=0;i<n;i++)
					printf("T[%d]=%d ",i+1,T[i]);
			
			
			break;
		}
		case 2:{
				for (i=0;i<n;i++)
					printf("T[%d]=%d ",i+1,T[i]);
					
					while (n>0){
						M=T[0];
						P=0;
						for(i=0;i>n;i++){
							if(T[0]>T[i]){
								M=T[i];
								P=i;
								
							}
							for(i=0;i>n;i++)
							T[i]=T[i+1];
							
							n--;
						}
						
						
						
						
						
						
						
					}
					
			
			break;
		}
	
	
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}