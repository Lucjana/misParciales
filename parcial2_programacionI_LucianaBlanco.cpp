#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void buscarElMenor(int cantfallecidos[])
	{
		int menor=0, i, v=cantfallecidos[1];
		for (i=1;i++;i<=4){
			if (cantfallecidos[i]<v){
				v=cantfallecidos[i];
				menor = i;
			}
			
		}
		printf("El menor es %d", menor);
	}


int main () 



{

	int nro_registro, cant_contagiados[5][6]={0}, cant_fallecidos[6]={0};
	int i,z,m,cc,cf, v, mayCantFallecidos=0, mesFallecidos, zonaFallecidos;
	int sumaFallecidos=0, min, cantRegistros=0;
	float porcentajeFallecidos=0, prom_cont[5][6]={0}, prom_fall[6]={0},porc_fall[5]={0};
	do
	{
	
		printf("Numero de registro: ");
		scanf("%d", &nro_registro);
	}while (nro_registro==0);
	while (nro_registro != 0)
		{
			do
			{
			printf("Mes: ");
			scanf("%d", &m);	
			}while (m<1 or m>4);
			do
			{
			printf("Zona: ");
			scanf("%d", &z);
			}while(z<1 or z>5);
			printf("Cantidad de contagios: ");
			scanf("%d", &cc);
			printf("Cantidad de fallecidos: ");
			scanf("%d", &cf);
			
	
			//1.	A que zona y mes corresponde el registro de mayor cantidad de fallecidos (solo hay uno)
			if (cf>mayCantFallecidos)
				{
					mayCantFallecidos=cf;
					mesFallecidos= m;	
					zonaFallecidos= z;
					
				}
			
			//2.	¿Cuántos contagiados en total hubo por mes?
			cant_contagiados[m][z]=cc+cant_contagiados[m][z];
			
			//3.	El total de fallecidos por cada zona, ¿qué porcentaje representa del total de fallecidos del país?
			cant_fallecidos[z]= cf+cant_fallecidos[z];
			cant_fallecidos[0]= cf+cant_fallecidos[0];
			
			
			
			
			//5.	¿cuál es el promedio general de casos de fallecidos y contagiados en cada zona según la cantidad de registraciones?
			cant_contagiados[m][z]=cc+cant_contagiados[m][z];
			cantRegistros+=1;
			printf("Ingrese número de registro: ");
		 	scanf("%d", &nro_registro);
		 	
		}
	// 4.	¿Qué mes tuvo menos fallecidos en total?
	
	//promedios
	for (i=1;i<=5;i++){
		prom_fall[i]=cant_fallecidos[i]/cantRegistros;
		porc_fall[i]=(cant_fallecidos[i]*100)/cant_fallecidos[0];
		
	}
	for (i=1;i<=4;i++){
		for (v=1;v<=5;v++){
			prom_cont[i][v]=cant_contagiados[i][v]/cantRegistros;
		}
	}
	//PRINTS
	//1.	A que zona y mes corresponde el registro de mayor cantidad de fallecidos (solo hay uno)
	printf("El mayor registro de fallecidos fue en el mes %d, zona %d \n", mesFallecidos,zonaFallecidos);
	//2.	¿Cuántos contagiados en total hubo por mes?
	//5.	¿cuál es el promedio general de casos de fallecidos y contagiados en cada zona según la cantidad de registraciones?
	for (i=1;i<=4;i++){
		for (v=1;v<=5;v++){
			printf("La cantidad de contagiados del mes %d fue %d. Su zona fue la %d y el promedio fue %0.2f \n", i, cant_contagiados[i][v], v, prom_cont[i][v]);
		}
	}
	//3.	El total de fallecidos por cada zona, ¿qué porcentaje representa del total de fallecidos del país?
	
	for (i=1;i<=5;i++){
		printf("La cantidad de fallecidos de la zona %d fue %d. Su porcentaje fue %0.2f. El promedio fue %0.2f \n", i, cant_fallecidos[i], porc_fall[i], prom_fall[i]);

	}
	// 4.	¿Qué mes tuvo menos fallecidos en total?

	
	

	
}
int buscarElMenor([]);
buscarElMenor(cant_fallecidos);



