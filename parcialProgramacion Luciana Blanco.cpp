#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>

int main ()
{
	int nro_registro, zona, mes, cant_contagiados, cant_fallecidos;
	int mayCantFallecidos=0, mesFallecidos, zonaFallecidos;
	int cantContagiados1=0, cantContagiados2=0, cantContagiados3=0, cantContagiados4=0;
	int cantFallecidosZona1=0, cantFallecidosZona2=0, cantFallecidosZona3=0, cantFallecidosZona4=0, cantFallecidosZona5=0;
	int cantMes1, cantMes2, cantMes3, cantMes4;
	float porcentajeFallecidos1, porcentajeFallecidos2, porcentajeFallecidos3, porcentajeFallecidos4, porcentajeFallecidos5;
	int menorFallecidos=0, cantRegistro=0, mesMenor,sumaContagiados=0, sumaFallecidos=0;
	int contagiadosZona1=0, contagiadosZona2=0, contagiadosZona3=0, contagiadosZona4=0, contagiadosZona5=0;
	float promedioContagiados1, promedioContagiados2, promedioContagiados3, promedioContagiados4, promedioContagiados5;
	float promedioFallecidos1, promedioFallecidos2, promedioFallecidos3, promedioFallecidos4, promedioFallecidos5;
	
	do
	{
		printf("Ingrese número de registro: ");
		scanf("%d", &nro_registro);
	}while (nro_registro==0);
	while (nro_registro!=0)
		{	
			do
			{
				printf("Ingrese zona: ");
				scanf("%d", &zona);
			}while (zona==1 and zona==2 and zona==3 and zona==4 and zona==5);
			do
			{
				printf("Ingrese mes: ");
				scanf("%d", &mes);
			}while (mes==1 and mes==2 and mes==3 and mes==4);
			printf("Ingrese cantidad de contagiados: ");
			scanf("%d", &cant_contagiados);
			printf("Ingrese cantidad de fallecidos: ");
			scanf("%d", &cant_fallecidos);
		
			
		
			
			//1.	A que zona y mes corresponde el registro de mayor cantidad de fallecidos (solo hay uno)
			
			if (cant_fallecidos>mayCantFallecidos)
				{
					mayCantFallecidos=cant_fallecidos;
					mesFallecidos= mes;	
					zonaFallecidos= zona;
					
				}
			//2.	¿Cuántos contagiados en total hubo por mes?	
			switch (mes)
				{
					case 1:
						cantContagiados1=cant_contagiados+cantContagiados1;
						cantMes1= cant_fallecidos+cantMes1;
						break;
						
					case 2:
						cantContagiados2=cant_contagiados+cantContagiados2;
						cantMes2= cant_fallecidos+cantMes2;
						break;
					case 3:
						cantContagiados3= cant_contagiados+cantContagiados3;
						cantMes3= cant_fallecidos+cantMes3;
						break;
					case 4:
						cantContagiados4= cant_contagiados + cantContagiados4;
						cantMes4= cant_fallecidos+cantMes4;
						break;
					
				}
			//3.	El total de fallecidos por cada zona, ¿qué porcentaje representa del total de fallecidos del país?
			switch (zona)
				{
					case 1:
						cantFallecidosZona1= cant_fallecidos+cantFallecidosZona1;
						contagiadosZona1=cant_contagiados+contagiadosZona1;
						break;
					case 2:
						cantFallecidosZona2= cant_fallecidos+cantFallecidosZona2;
						contagiadosZona2= cant_contagiados+contagiadosZona2;
						break;
					case 3:
						cantFallecidosZona3= cant_fallecidos + cantFallecidosZona3;
						contagiadosZona3= cant_contagiados+contagiadosZona3;
						break;
					case 4:
						cantFallecidosZona4= cant_fallecidos+cantFallecidosZona4;
						contagiadosZona4=cant_contagiados+contagiadosZona4;
						break;
					case 5:
						cantFallecidosZona5= cant_fallecidos+ cantFallecidosZona5;
						contagiadosZona5=cant_contagiados+contagiadosZona5;
						break;
						
				}
				
		
			
			
			//5.	¿cuál es el promedio general de casos de fallecidos y contagiados en cada zona según la cantidad de registraciones?
	
			
		
			cantRegistro=cantRegistro+1;
			sumaFallecidos=cant_fallecidos+sumaFallecidos;
			sumaContagiados=cant_contagiados+sumaContagiados;
			
			printf("Ingrese número de registro: ");
			scanf("%d", &nro_registro);
		
		}
			
			
		//Porcentajes
		porcentajeFallecidos1=(cantFallecidosZona1*100)/sumaFallecidos;
		porcentajeFallecidos2=(cantFallecidosZona2*100)/sumaFallecidos;
		porcentajeFallecidos3=(cantFallecidosZona3*100)/sumaFallecidos;
		porcentajeFallecidos4=(cantFallecidosZona4*100)/sumaFallecidos;
		porcentajeFallecidos5=(cantFallecidosZona5*100)/sumaFallecidos;
		//Promedios
		promedioContagiados1=contagiadosZona1/cantRegistro;
		promedioContagiados2=contagiadosZona2/cantRegistro;
		promedioContagiados3=contagiadosZona3/cantRegistro;
		promedioContagiados4=contagiadosZona4/cantRegistro;
		promedioContagiados5=contagiadosZona5/cantRegistro;
		promedioFallecidos1=cantFallecidosZona1/cantRegistro;
		promedioFallecidos2=cantFallecidosZona2/cantRegistro;
		promedioFallecidos3=cantFallecidosZona3/cantRegistro;
		promedioFallecidos4=cantFallecidosZona4/cantRegistro;
		promedioFallecidos5=cantFallecidosZona5/cantRegistro;
		
		
		
	
	
	
	
	
		//Prints
		//1.	A que zona y mes corresponde el registro de mayor cantidad de fallecidos (solo hay uno)
		printf("La zona con mayor registro de fallecidos es %d en el mes de %d con la cantidad de %d \n", zonaFallecidos, mesFallecidos, mayCantFallecidos);
		//2.	¿Cuántos contagiados en total hubo por mes?	
		printf("En el mes 1 hubo %d \n", cantContagiados1);
		printf("En el mes 2 hubo %d \n", cantContagiados2);
		printf("En el mes 3 hubo %d \n", cantContagiados3);
		printf("En el mes 4 hubo %d \n", cantContagiados4);
		//3.	El total de fallecidos por cada zona, ¿qué porcentaje representa del total de fallecidos del país?
		printf("El total de fallecidos en zona 1 es %d y su porcentaje es %0.2f % \n", cantFallecidosZona1, porcentajeFallecidos1);
		printf("El total de fallecidos en zona 2 es %d y su porcentaje es %0.2f % \n", cantFallecidosZona2, porcentajeFallecidos2);
		printf("El total de fallecidos en zona 3 es %d y su porcentaje es %0.2f % \n", cantFallecidosZona3, porcentajeFallecidos3);
		printf("El total de fallecidos en zona 4 es %d y su porcentaje es %0.2f % \n", cantFallecidosZona4, porcentajeFallecidos4);
		printf("El total de fallecidos en zona 5 es %d y su porcentaje es %0.2f % \n", cantFallecidosZona5, porcentajeFallecidos5);
		// 4.	¿Qué mes tuvo menos fallecidos en total?
					
		if (cantMes1<cantMes2 and cantMes1<cantMes3 and cantMes1<cantMes4)
			{
				printf("El mes con menos fallecidos es el 1 \n");
			}
		if (cantMes2<cantMes1 and cantMes2<cantMes3 and cantMes2<cantMes4)	
			{
				printf("El mes con menos fallecidos es el 2 \n");
			}
		if (cantMes3<cantMes1 and cantMes3<cantMes2 and cantMes3<cantMes4)
			{
				printf("El mes con menos fallecidos es el 3 \n");
			}
		if (cantMes4<cantMes1 and cantMes4<cantMes3 and cantMes4<cantMes3)
			{
				printf("El mes con menos fallecidos es el 4 \n");
					
			}
		//5.	¿cuál es el promedio general de casos de fallecidos y contagiados en cada zona según la cantidad de registraciones?
		printf("El promedio general de fallecidos en zona 1 es %0.2f y de contagiados es %0.2f \n", promedioFallecidos1, promedioContagiados1);
		printf("El promedio general de fallecidos en zona 2 es %0.2f y de contagiados es %0.2f \n", promedioFallecidos2, promedioContagiados2);
		printf("El promedio general de fallecidos en zona 3 es %0.2f y de contagiados es %0.2f \n", promedioFallecidos3, promedioContagiados3);
		printf("El promedio general de fallecidos en zona 4 es %0.2f y de contagiados es %0.2f \n", promedioFallecidos4, promedioContagiados4);
		printf("El promedio general de fallecidos en zona 5 es %0.2f y de contagiados es %0.2f \n", promedioFallecidos5, promedioContagiados5);
	


	}	
	

