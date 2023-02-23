#include <stdio.h>
#include <stdlib.h>
#include <cmath>

#define POP			160							// bloco de amostras
#define FSR			8000							// frequencia de amostras (amostras por segundo) [HZ]
#define FILTER			8							// quantidade de filtros

#define PI_			3.141592653589793					// contante pi
#define K_(FDTMS)		(POP*((float)FDTMS/FSR)					// calcular K
#define	COEFK(FDTMS)		((float)(2*cos(((float)2*PI_*K_(FDTMS)))/(POP)))*1)	// calualar coeficiente k

float goertzel[FILTER] = {
	COEFK(697),
	COEFK(770),
	COEFK(852),
	COEFK(941),

	COEFK(1209),
	COEFK(1336),
	COEFK(1477),
	COEFK(1633)
};



int main(void){
	char str[100];
	for(int i=0; i<8; i++){
		printf("%f\n", goertzel[i]);
	}

	return 0;
}
