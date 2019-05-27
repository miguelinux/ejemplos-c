#include <stdio.h>

/* Basado de: https://es.wikipedia.org/wiki/Perceptr%C3%B3n */

#define MAX 10

double x[MAX]; /* x es vector de las entradas */
double w[MAX]; /* w es vector de peso */
double y;      /* y es la salida de la neurona */
double delta;  /* delta es la salida esperada */
const double alpha = 0.5;  /* alpha es una constante tal que 0 < alpha < 1 */

int con_tasa = 1 /* Con tasa de aprendizaje 1 = verdadero, 0 = sin tasa de aprendizaje */

int main (int argc, char *argv[])
{

	if (con_tasa) {
		w[j] = w[j] + alpha * (delta - y) * x[j]
	} else {
		w[j] = w[j] +(delta - y) * x[j]
	}


	return 0;
}
