/*
	Name: Ejemplo mientras hola a todos
	Copyright: 
	Author: 
	Date: 07/10/19 12:18
	Description: Desplega 100 veces un mensaje hola a toddos
Objetivo: Imprimir 100 veces hola a todos
Entradas:
	No hay entradas por el usuario Variable que indique cuantas veces va aumentando su valor para entrar a la iteraci�n
Variables:
	IIteradorSaludo: Variable de tipo entero que cuenta el n�mero de veces que escribe el mensaje
Salidas:
	Mensajes que desplegara "hola a todos"
Precondiciones
	Variable num�rica que cuente sea validada por la iteraci�n
Restricciones
	No es iterativo
	Solo imprime 100 veces el mensaje	 
*/
/* Directivas al preprocesador*/
#include <stdio.h>

int main (){
//Declaraci�n de variables
	int iIteradorSaludo;
	
	while(iIteradorSaludo <100){
		printf("Hola a todos \n");
		iIteradorSaludo++;
	}
	return 0;
}
