#include <stdio.h>

int main (){
	int segundo, periododia, periodohora, periodominutos, periodosegundos ;
	
	printf ("ingrese un periodo en segundos: ");
	scanf ("%d", &segundo);
	
	periododia = segundo / 86400;
	printf ("el periodo en segundos a dia equivale a: %d", periododia);
	
	periodohora = segundo / 3600;
	printf ("\n el periodo en segundos a hora equivale a: %d", periodohora);
	
	periodominutos = segundo / 60;
	printf ("\n el periodo en segundos a minutos equivale a: %d", periodominutos);
	
	periodosegundos = segundo / 1;
	printf ("\n el periodo en segundos a segundo equivale a: %d", periodosegundos);
	
	return 0;
}
