#include <stdio.h>

char media_txt[] = "La media è la seguente:";

double media(float n1,float n2) {
	double m;
	m=(n1+n2)/2;
	return m;
	}

int media_int(float a, float b) {
	float c;
	c = (a+b)/2;
	printf("La media da float a int è: %f\n", c);
	}

float media_float(float a, float b) {
	float c;
	c = (a+b)/2;
	printf("La media da float a float è: %f\n", c);
	}

// mi aspettavo un errore o un comportamenti diverso considerando il fatto che ho dichiarato due funzioni "int" e "float" e invece ottengo sempre lo stesso risultato

int main() {
	double a,b,c;
	a=2;
	b=5;
	c=media(a,b);
	printf("%s %f\n", media_txt, c);
	media_int(a,b);
	media_float(a,b);
	cast_imp();
	cast_esp();
	pointer();
	mem_loc();
	return 0;
	}

cast_imp() {
	int a = 5, b = 4;
	float c;
	c = (a+b)/2;
	printf("La media con cast implicito è: %f\n", c );
	}

cast_esp() {
	int a = 5, b = 4;
	float c;
	c = (float) (a+b)/2;
	printf("La media con cast esplicito è: %f\n", c );
	}

int pointer() {
	int prova=17;
	int *p;
	p = &prova;
	printf("Valore della variabile \"prova\": %d\n" , prova);
	printf("Locazione di memoria \"*p\": %p\n",p);
	}

void mem_loc() {
	double a, b, c;
	int *aml, *bml, *cml;
	aml = &a;
	bml = &b;
	cml = &c;
	printf("Valore della variabile \"a\": %d\n" , a);
	printf("Locazione di memoria \"*aml\": %p\n", aml);
	printf("Valore della variabile \"b\": %d\n" , b);
	printf("Locazione di memoria \"*bml\": %p\n", bml);
	printf("Valore della variabile \"c\": %d\n" , c);
	printf("Locazione di memoria \"*cml\": %p\n", cml);
	}
