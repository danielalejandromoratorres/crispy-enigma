#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
	int i,x,letra,tam,cont,lose;
	char cad[20],aux[20];
	float porcvoc;
	printf("\t el ahorcado");
	printf("Ingrese la palabra\n");
	gets(cad);
	tam=strlen(cad);
	lose=0;
	cont=0;
	for(i=0;i<tam+10;i++){
		printf("letra: \n");
		letra=getch();
		printf("%c\n",letra);
		aux[i]=letra;
		if (cad[i]!=letra){
		lose++;
		cont=cont+1;
		i--;
	    printf("fallo numero %d \n",lose);
        }
        if(cont==10){
        	printf("la palabra era: '%s'\n", cad);
        	printf("perdiste\n\n\n");
        	printf("          O\n");
        	printf("         /|\n");
        	printf("        O |\n");
        	printf("       ||||\n");
        	printf("       | ||\n");
        	printf("             ");
        	printf("\n\n\nacabas de ser ahorcado\n\n\n");
			        		system("PAUSE");
					return 0;
					}
}

if(cont!=10){	{
printf("%s\n", cad);
printf("has ganado compadre");}
system("PAUSE");
return 0;
	}
}

	
	
	
	
/*	
                      O	
                     /|	
	                O |
	               /|\|
	               | || 
	               */
