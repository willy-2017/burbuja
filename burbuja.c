
#include <stdio.h>

int main(int argc, char **argv)
{
int vector[5];
int cambio;
int *puntero;
int i;	
for (i = 0; i < 5; i++)
{
 printf("Ingrese un numero en la posicion: %d \n",i+1);
 scanf("%d",&vector[i]);	
}
puntero=vector;

int x,y;

for (x = 0; x <5 ; x++)
{
	for (y = 0; y <5 ; y++)
	{
		if (*(puntero+y)>*(puntero+y+1))
		{
		 cambio=*(puntero+y+1); 
		 *(puntero+y+1)=*(puntero+y);
		 *(puntero+y)=cambio;
		}
	 
	}
 	
}


for (i = 0; i <5; i++)
{
printf("%d,",vector[i]);	
}

printf("\n");
	
	
	
	return 0;
}

