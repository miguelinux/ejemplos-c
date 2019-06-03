#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Basado de: https://es.wikipedia.org/wiki/Perceptr%C3%B3n */

#define PUNTO 10
#define MAX 10

double x[PUNTO][MAX]; /* x es vector de las entradas */
double w[MAX]; /* w es vector de peso */
double y[MAX];      /* y es la salida de la neurona */
double delta[MAX];  /* delta es la salida esperada */
const double alpha = 0.5;  /* alpha es una constante tal que 0 < alpha < 1 */

int con_tasa = 1 /* Con tasa de aprendizaje 1 = verdadero, 0 = sin tasa de aprendizaje */


void ejemplo_AND() {
	/*     x0   x1    x0 AND x1 */
	/* 0:   1   1         1     */
	/* 1:   1   0         0     */
	/* 2:   0   1         0     */
	/* 3:   0   0         0     */
	    x[0][0]=1;
	    x[0][1]=1;
	delta[0]=1;
	    x[1][0]=1;
	    x[1][1]=0;
	delta[1]=0;
	    x[2][0]=0;
	    x[2][1]=1;
	delta[2]=0;
	    x[3][0]=0;
	    x[3][1]=0;
	delta[3]=0;

	int entradas = 2;
	int muestras = 4;

	w[0] = 1/rand();
	w[1] = 1/rand();

	if (con_tasa) {
		w[j] = w[j] + alpha * (delta - y) * x[j];
	} else {
		w[j] = w[j] +(delta - y) * x[j];
	}

}

int main (int argc, char *argv[])
{

	srand(time(NULL));


	return 0;
}
