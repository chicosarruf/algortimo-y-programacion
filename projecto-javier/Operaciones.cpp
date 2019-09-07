#include <iostream>
#include <stdio.h>
#include <string>


/* run this program using the console pauser or  add your own getch, system("pause") or input loop */
using namespace std;

// if - switch
// for - while - do_while
int main() {
	
	int Numeros_pares = 2 ;
	string mensaje = " ";
	if(Numeros_pares%2==0){ mensaje = " este numero es par";
		} else {mensaje = "este numero es impar";
		}
	printf("%s %i", mensaje.c_str(),Numeros_pares);
	return 0 ;
}


