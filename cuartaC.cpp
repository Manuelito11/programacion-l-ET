#include <stdio.h>

int main() {
	int Tesla, Beethoven, Berlin, porcentajeT,porcentajeBe,porcentajeBr,monto;
	
	printf ("cuanto dinero invertio Tesla: ");
	scanf ("%d",&Tesla);
	
	printf ("cuanto dinero invertio Beethoven: ");
	scanf ("%d", &Beethoven);
	
	printf ("cuanto dinero invertio Berlin: ");
	scanf ("%d", &Berlin);
	
	monto= Tesla + Beethoven + Berlin;
	printf ("el monto final es: %d", monto);
	
	porcentajeT= (Tesla*100) / monto;
	printf ("\n el porcentaje de Tesla es: %d",porcentajeT);
	
	porcentajeBe= (Beethoven*100) / monto;
	printf ("\n el porcentaje de Beethoven es: %d",porcentajeBe);
	
	porcentajeBr= (Berlin*100) / monto;
	printf ("\n el porcentaje de Berlin es: %d",porcentajeBr);
	
	return 0;
}

