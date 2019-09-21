#include <iostream>
#include<stdio.h>
#include<string>

using namespace std;
int main()
{

long primer_digito = 4000;
string mensaje = "";
if(primer_digito % 2 == 0){ mensaje = "numero par";
	
	
} else { mensaje = "numero in par";
		
}
printf("%s",mensaje.c_str());
return 0;
}
