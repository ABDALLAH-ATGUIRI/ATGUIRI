  #include<stdio.h>

      typedef struct compt{
        char preNom[10];
        char Nom[10];
        char CIN [10];
        float Montant;
      }compet;

      compet P[50];

        void Le_menu(){
          int i=0;

      //	compet P[100];

          printf("typer le Nom : ");
          scanf("%s",P[i].preNom);
          scanf("%s",P[i].Nom);
          printf("typer le CIN: ");
          scanf("%s",P[i].CIN);
          printf("typer le Montant :");
          scanf("%f",&P[i].Montant);
        }




      int main(){

        int i,n;
        int C=0;
      //	compet *P[C];

do{
        printf(" 1==> Pour entrer un compte \n 2==> Pour entrer plusieurs comptes \n 3==>Operation \n ==>");
        scanf("%d",&i);
    switch(i){
            case 1:{
                n = 1;
                  printf("Compte bancaire NB %d :\n",C+1);

                  Le_menu();

                  C++;
              break;
            }
            case 2:{

              printf("Saisissez le nombre de comptes que vous souhaitez saisir : ");
              scanf("%d",&n);


              for(i=C;i<n+C;i++){

              printf("Compte bancaire NB %d :\n",i+1);
              Le_menu();

              }
              C=i;

              break;
            }
            case 3:{
             // printf("1==>Retrait \n 2==>Depot /n ==>");
             // scanf("%d".&i);
              //printf(" %s , %s , %s");

            for(i=0;i<C;i++)
           printf("%s ,%s,%s \n",P[i].preNom,P[i].Nom,P[i].CIN);
            break;}
          }



        }while(i>0);

      //	scanf("%d",&i);
      //
      //	switch(i){
      //		case 1:{

        //    for(i=0;i<C;i++)
          //  printf("%s ,%s,%s,%.2f \n",P[i].preNom,P[i].Nom,P[i].CIN,P[i].Montant);

      //			break;
      //		}
      //	}
      //






        return 0;
      }





