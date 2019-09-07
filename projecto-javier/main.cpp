#include <iostream>
#include <stdio.h>
#include <string>


/* run this program using the console pauser or  add your own getch, system("pause") or input loop */
using namespace std;

// if - switch
// for - while - do_while
int main() {
	
	int Enteros = 90;
	double Decimal = 9.9;
	int suma_entera = Enteros + Decimal; 
	double suma_real = Enteros +(-Decimal);
	// es para imprimir
	printf("\n %s %i \n %s %f ",
	"suma entera: ", suma_entera,"suma real:", suma_real);
	
	int multiplicacion_entera = Enteros * Decimal; 
	double multiplicacion_real = Enteros *(-Decimal);
	// es para imprimir
	printf("\n %s %i \n %s %f ",
	"multiplicacion entera: ", multiplicacion_entera,"multiplicacion real:", multiplicacion_real);
	
	int division_entera = Enteros / Decimal; 
	double division_real = Enteros /(-Decimal);
	// es para imprimir
	printf("\n %s %i \n %s %f ",
	"division entera: ", division_entera,"division real:", division_real);
	
	return 0;
}


