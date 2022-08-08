#include <stdio.h>

int main (){
	int n1,n2,suma,n3,promedio;
	
	printf ("coloque el primer numero: ");
	scanf ("%d", &n1);
	
	printf ("coloque el segundo numero: ");
	scanf ("%d", &n2);
	
	printf ("coloque el tercer nunmero: ");
	scanf ("%d", &n3);
	
	suma= n1 + n2 + n3;
	printf ("\nla suma es: %d", suma);
	
	promedio= (suma / 3);
	printf ("\n el promedio es: %d", promedio);

	
	return 0;
}