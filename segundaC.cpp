#include <stdio.h>

int main (){
	
	int factura, iva;
	
	printf ("ingresa el monto de su factura: ");
	scanf ("%d", &factura);
	
	iva = factura * 0.21;
	
	printf ("el valor de la factura + iva es: %d", iva);
	
	return 0;
}