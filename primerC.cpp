/* 23/5/22 
primera actividad de programacion */
#include <stdio.h>


int main (){
	int n1,n2;
	
	printf ("coloque el primer numero:");
	scanf ("%d", &n1);
	
	printf ("coloque el segundo numero:");
	scanf ("%d", &n2);
	
	if (n1==n2){
		printf ("Los dos numeros son iguales");
}
	
	else if (n1>n2){
		printf ("el primer numero es mayor que el segundo");
	}
	
	else {
	
	    printf ("el segundo numero es mayor que el primero");
	}
	
	
	
}