#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h> // per srand e rand
#include <ctype.h> // per l'utilizzo di toupper()
#include <stdbool.h> // permette di dichiarare 'bool variabile;' e poi 'variabile = false;' e 'variabile = true;' esattamente come se usassi _Bool che è stato inserito nel C99
#include <stdint.h> // permette di usare i tipi di questa libreria

#define TRUE 1
#define FALSE 0 // e a questo punto posso fare 'flag = TRUE'
#define BOOL int // è una macro dunque sostituisce 'BOOL' con int ogni volta ed è un trucco per creare tipi "BOOL"

/* 
// PROGRAMMA average.c pagina 193
double average(double parametroA, double parametroB)
	{
	return (parametroA + parametroB) / 2;
	}
int main(void) {
	double x, y, z;
	printf("\n\nDigita 3 numeri double separati da uno spazio: ");
	scanf("%lf %lf %lf", &x, &y, &z);
	printf("\nMedia di %g e %g = %g", x, y, average(x, y));
	printf("\nMedia di %g e %g = %g", x, z, average(x, z));
	printf("\nMedia di %g e %g = %g", y, z, average(y, z));
	return 0;
}
 */


/* 
// PROGRAMMA countdown.c pagina 194
void countdown(int timer)
	{
	printf("\nT minus %d and counting", timer);
	}
int main(void) {
	int timer, i;
	printf("\n\nDigita il valore iniziale del countdown: ");
	scanf("%d", &timer);
	for (i = timer; i >= 0; i--)
		countdown(i);
	return 0;
}
 */


/* 
// PROGRAMMA print_frase.c
void print_frase(void)
	{
	printf("\nThe quick brown fox jumps over the lazy dog.\n");
	}
int main(void) {
	print_frase();
	return 0;
} */


/* 
// PROGRAMMA average.c pagina 196
double average(double parametroA, double parametroB)
	{
	double sum;
	sum = parametroA + parametroB;
	return sum / 2;
	}
int main(void) {
	double x, y, z;
	printf("\n\nDigita 3 numeri double separati da uno spazio: ");
	scanf("%lf %lf %lf", &x, &y, &z);
	printf("\nMedia di %g e %g = %g", x, y, average(x, y));
	printf("\nMedia di %g e %g = %g", x, z, average(x, z));
	printf("\nMedia di %g e %g = %g", y, z, average(y, z));
	// scartare il risultato di qualcosa
	int lunghezza = printf("\nciao");
	// printf("\nlunghezza = %d", lunghezza);
	int num_char = printf("\nlunghezza = %d", lunghezza);
	printf("\nCaratteri = %d", num_char);
	(void) printf("\nqualcosa\n"); // cast a void del risultato della printf, che sarebbe il numero di caratteri stampati
	return 0;
}
 */


/* 
// PROGRAMMA prime.c
	// Verifica se un numero è primo
	// nota che la variabile numero è presente sia nel main sia nell'isprime, ma nel C le due istanze occupano locazioni di memoria diverse
bool isprime(int numero) {
	for (int divisore = 2; divisore * divisore < numero; divisore++) {
		printf("\nProvo a dividere %d per %2d", numero, divisore);
		if (numero % divisore == 0)
			return false;
	}
	return true;
}
int main (void) {
	int numero;
	printf("Controllo se un numero è primo. Digita il numero: ");
	scanf("%d", &numero);
	if (isprime(numero) == true)
		printf("\n\nIl numero %d è primo\n", numero);
	else
		printf("\n\n159Il numero %d non è primo\n", numero);
	return 0;
}
 */


/* // PROGRAMMA average.c pagina 199/200
int main(void) {
	double x, y, z;
	printf("\n\nDigita 3 numeri double separati da uno spazio: ");
	scanf("%lf %lf %lf", &x, &y, &z);
	//~ double average(double argomentoA, double argomentoB); // dichiarazione di una funzione che definirò in seguito, anche dopo averla chiamata; (secondo KNK pagina 200) deve precedere il chiamante() altrimenti il compilatore quando arriva alla funzione potrebbe trovare argomenti con tipo errato. Questo è un "prototipo di funzione".
	double average(double, double); // DICòHIARAZIONE come sopra, ma senza nome dei parametri	
	printf("\nMedia di %g e %g = %g", x, y, average(x, y));
	printf("\nMedia di %g e %g = %g", x, z, average(x, z));
	printf("\nMedia di %g e %g = %g\n", y, z, average(y, z));
	return 0;
}
double average(double parametroA, double parametroB) // DEFINIZIONE
	{
	double sum;
	sum = parametroA + parametroB;
	return sum / 2;
	}
 */


/* // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// PROGRAMMA pagina 201
// semplificazione; poiché n come parametro è una copia dell'argomento originale, può essere modificato all'interno della subroutine.
int power(int x, int n);
int main(void) {
	int x, y;
	printf("\n\nDigita numero ed esponente double separati da uno spazio: ");
	scanf("%d %d", &x, &y);
	printf("%d^%d = %d\n", x, y, power(x, y));
	return 0;
} */
/* // routine base
int power(int x, int n)
{
	int i;
	int result = 1;
	for (i = 1; i <= n; i++)
		result = result * x;
	return result;
} */
/* // routine semplificata
int power(int x, int n)
{
	int result = 1;
	while (n-- > 0)
	{
		result = result * x;
	}
	return result;
}
 */


/* 
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// PROGRAMMA pagina 204
	// somma di elementi di vettore passato come argomento
#define SIZE(array) (sizeof array / sizeof(array[0]))
int somma_elementi(int elementi[], int len);		// prototipo
int main(void) {						// main
	printf("\n\n*** Somma di tutti gli elementi di un vettore ***\n");
	int elementi[10] = {0};
	int totale;
	srand((unsigned) time(NULL));
	for (int i = 0; i < SIZE(elementi); i++)
		elementi[i] = rand() % 20;
	totale = somma_elementi(elementi, SIZE(elementi));
	printf("\nSomma di %d elementi del vettore = %d\n", SIZE(elementi), totale);
	return 0;
}
int somma_elementi(int elementi[], int len) {		// funzione.. il nome dell'array lo posso definire al volo
	len--;
	int sum = 0;
	while (len >= 0) {
	sum += elementi[len];
	printf("%d ", elementi[len]);
	if (len > 0)
		printf("+ ");
	len--;
	}
	return sum;
}
 */


/*
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// PROGRAMMA pagina 204 - duplicato /1 ma con ** modifica elementi del vettore nella funzione invocata per mostrare che un vettore può essere modificato da una funzione **
	// somma di elementi di vettore passato come argomento
#define SIZE(array) (sizeof array / sizeof(array[0]))
int somma_elementi(int elementi[], int len);		// prototipo chiamata funzione
int main(void) {						// main
	printf("\n\n*** Somma di tutti gli elementi di un vettore ***\n");
	// *** Somma di elementi inizializzati a 0 in corpo main
	printf("\n1) Somma di elementi inizializzati a 0 in corpo main\n");
	int elementi[10] = {0};
	// int elementi[10];
	int sum = 0;
	int len = SIZE(elementi);
	while (len-- > 0) {
		sum += elementi[len];
		// serve solo per vedere che gli elementi inizializzati sono effettivamente a zero
		printf("elemento %d = %d ", len, elementi[len]);
			if (len > 0)
		printf("+ ");
	}
	printf("\nSomma di %d elementi = %d\n", SIZE(elementi), sum);
	// *** Somma di elementi inizializzati rnd in corpo main
	printf("\n2) Somma di elementi inizializzati rnd in corpo main\n");
	int totale = 0;
	srand((unsigned) time(NULL));
	for (int i = 0; i < SIZE(elementi); i++) {
		totale += elementi[i] = rand() % 20;
		printf("elemento %d = %d ", i, elementi[i]);
			if (len > 0)
		printf("+ ");
	}
	printf("\nSomma di %d elementi = %d\n", SIZE(elementi), totale);
	// *** Somma di elementi restituita dalla funzione
	printf("\n3) Somma di elementi restituita dalla funzione\n");
	totale = somma_elementi(elementi, SIZE(elementi)); // invoco la funzione che assegnerà 'return sum' a totale
	printf("\nRiprendo 3 - Somma restituita dalla funzione di %d elementi = %d\n", SIZE(elementi), totale);
	printf("\n4) Somma di elementi modificati nella funzione = %d\n", SIZE(elementi), sum);
	sum = 0; // ricalcolo la somma perché ho modificato il contenuto del vettore nella funzione
	len = SIZE(elementi);
	while (len-- > 0) {
		sum += elementi[len];
		printf("elemento %d = %d ", len, elementi[len]);
			if (len > 0)
		printf("+ ");
	}
	printf("\nSomma di %d elementi modificati nella funzione = %d\n", SIZE(elementi), sum);
	return 0;
}
int somma_elementi(int elementi[], int len) {		// funzione.. il nome dell'array, volendo, è arbitrario (esempio: myElements)
	int len2 = len--;
	int sum = 0, sum2 = 0;
	while (len >= 0) {
		sum += elementi[len];
		printf("elemento %d = %d ", len, elementi[len]);
			if (len > 0)
		printf("+ ");
		len--;
	}
	printf("\nSomma di elementi calcolata nella funzione = %d\n", sum);
	// metto nuovi elementi nel vettore
	printf("\n3a) Somma di elementi rand inseriti nella funzione\n");
	for (int i = 0; i < len2; i++)
		{
		sum2 += elementi[i] = rand() % 20;
		printf("elemento %d = %d ", i, elementi[i]);
			if (len > 0)
		printf("+ ");
		}
	printf("\nSomma di elementi rand inseriti nella funzione = %d\n", sum2);
	return sum; // risponde alla chiamata passando sum
}
 */


/*
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// PROGRAMMA pagina 204 - duplicato /2 ma con ** vettore multidimensionale **
	// somma di elementi di vettore passato come argomento
//~ #define SIZE(array) (sizeof array / sizeof(array[0]))
#define LUNGHEZZA 100
int somma_elementi_vettore(int [][LUNGHEZZA], int len);		// prototipo chiamata funzione 
int main(void) {						// main
	printf("\n\n*** Somma di tutti gli elementi di un vettore multidimensionale***\n");
	int elementi[LUNGHEZZA][LUNGHEZZA] = {0};
	int totale = 0;
	int len = LUNGHEZZA;
	srand((unsigned) time(NULL));
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			totale += elementi[i][j] = rand() % 19 +1;
		}
	}
	printf("\n1) Somma di %d elementi inizializzati = %d", len * len, totale);
	int sum = 0;
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			sum += elementi[i][j];
		}
	}
	printf("\n2) Somma di %d elementi inizializzati verificata in corpo main = %d", len * len, sum);
	totale = somma_elementi_vettore(elementi, len); // invoco la funzione che assegnerà 'return sum' a totale
	printf("\n4) Somma di %d elementi restituita al main dalla funzione = %d", len * len, totale);
	sum = 0;
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			sum += elementi[i][j];
		}
	}
	printf("\n5) Somma di %d elementi dopo chiamata funzione verificata in corpo main = %d", len * len, sum);
	return 0;
}
int somma_elementi_vettore(int daSommare[][LUNGHEZZA], int len) {		// vettore multidimensionale: posso omettere solo prima dimensione
	int sum = 0;
	//~ srand((unsigned) time(NULL));
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			sum += daSommare[i][j] = rand() % 19 + 1;
			//~ sum += daSommare[i][j];
		}
	}
	printf("\n3) Somma di %d elementi modificati rnd dentro alla funzione = %d", len * len, sum);
	return sum; // risponde alla chiamata passando sum
}
 */


/*
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// PROGRAMMA pagina 206 - vettore lunghezza variabile monodimensionale
	// somma di elementi di vettore passato come argomento
#define SIZE(array) (sizeof array / sizeof(array[0]))
int somma_elementi_vettore(int len, int array[len]);		// prototipo, prima la lunghezza poi il vettore
int main(void) {						// main
	printf("\n\n*** Somma di tutti gli elementi di un vettore ***");
	int elementi[10] = {0};
	int totale;
	srand((unsigned) time(NULL));
	for (int i = 0; i < SIZE(elementi); i++)
		elementi[i] = rand() % 19 + 1;
	totale = somma_elementi_vettore(SIZE(elementi), elementi);
	printf("\nSomma di %d elementi del vettore = %d\n", SIZE(elementi), totale);
	return 0;
}
int somma_elementi_vettore(int len, int myArray[len]) {		// funzione.. il nome dell'array lo posso definire al volo
	len--;
	int sum = 0;
	while (len >= 0) {
	sum += myArray[len];
	len--;
	}
	return sum;
} */


/*
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// PROGRAMMA medie - vettori multidimensionali a lunghezza variabile
	// Come devo usare RAND (per avere media = 10 uso % 19 + 1 cioè il numero in mezzo da 1 a 19 è 10)
int somma_vettore_multi(int rows, int cols, int myArray[rows][cols]);		// prototipo
int main(void) {	// main
	printf("\n*** Somma di tutti gli elementi di un vettore ***");
	int rows = 100, cols = 100;
	int multi[rows][cols];
	int totale = 0;
	srand((unsigned) time(NULL));
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			multi[i][j] = rand() % 19 + 1;
			totale += multi[i][j];
			}
		}
	printf("\nSomma di %d elementi del vettore calcolati nel main = %d", rows * cols, totale);
	totale = somma_vettore_multi(rows, cols, multi);
	printf("\nSomma di %d elementi del vettore calcolati nella funzione = %d\n", rows * cols, totale);
	return 0;
}
int somma_vettore_multi(int rows, int cols, int myArray[rows][cols]) {
	int sum = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			sum += myArray[i][j];
		}
	}
	return sum;
}
 */


/*
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// PROGRAMMA medie - vettori multidimensionali a lunghezza variabile
	// letterale composto viene creato al volo specificando semplicemente gli elementi che contiene
int sum_array(int myArray[], int n);		// prototipo
int main(void) {							// main
	printf("\n*** Compound literal ***");
	int sum = 0;
	int elementi = 3;
	srand((unsigned) time(NULL));
		// multi[i] = rand() % 19 + 1;
	sum = sum_array((int [10]){3, 4, 5, 6, 7}, elementi);
	printf("\nSomma di %d elementi passati col letterale composto = %d\n", elementi, sum);
	return 0;
}
int sum_array(int myArray[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += myArray[i];
	}
	return sum;
}
 */


/*
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// PROGRAMMA pagina 212 - Ricorsioni - fattoriale
	// Prove utilizzo ricorsioni: n! = n * (n - 1)!
int fact(int n);
int main(void) {
	printf("\nRisultato = %d\n", fact(4));
	return 0;
}
int fact(int n) {
	if (n <= 1)
		return 1;
	else
		return n * fact(n - 1);
}
 */


/*
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// PROGRAMMA power potenza pagina 212 - Ricorsioni / 2a - x elevato alla n
	// Prove utilizzo ricorsioni: x^n = x * x^(n - 1)
int fact(int x, int n);
int main(void) {
	printf("\nRisultato = %d\n", fact(5, 4));
	return 0;
}
int fact(int x, int n) {
	// if (n < 1)
	// 	return 1;
	// else
	// 	return x * fact(x, n - 1);
		// alternativa
		return n < 1 ? 1 : x * fact(x, n - 1);
}
 */


/*
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// PROGRAMMA pagina 212 - QuickSort
	// Prove utilizzo ricorsioni
	// low, high
	// e = elemento di partizionamento (primo) copiato in 'temp', resta "buco" puntato da indice low
	// 1) spostiamo indice high verso sx fino a che punta a un valore < e
	// 2) copiamo questo elemento in location indice low e resta "buco" in high
	// 3) spostiamo indice low verso dx fino a che punta a un valore > e
	// 4) copiamo questo elemento in location indice high
	// 5) ricomincio da 1
	// quando low e high si incontrano copiamo lì 'è'
#define SIZE(array) (sizeof(array) / sizeof(array[0]))
#define LEN 9 // 10
int split(int low, int high, int vettore[]);
void quicksort(int vettore[], int low, int high);
void report(int low, int high, int vettore[], int partElement, int i);
	int cols;
int main(void) {
	int vettore[] = {12, 3, 6, 18, 7, 15, 10};
	// int vettore[] = {54, 16, 91, 13, 48, 38, 14, 97, 99, 21, 55, 34, 25}; // perde 99
	//~ int vettore[LEN] = {0};
	//~ srand((unsigned) time(NULL));
	//~ for (int i = 0; i < LEN; i++)
		//~ vettore[i] = rand() % 99 + 1;
	int low = 0;
	int high = SIZE(vettore) - 1;
	cols = high;
	quicksort(vettore, low, high);
	printf("\n");
	return 0;
}
void quicksort(int vettore[], int low, int high) {
	int pivot;
	if (low >= high)
		return;
	pivot = split(low, high, vettore);
	quicksort(vettore, low, pivot -1);
	quicksort(vettore, pivot +1, high);
	return;
}	
int split(int low, int high, int vettore[]) {
	int partElement = 0;
	printf("\n\n---------------------------");
	for (int i = 0; i <= cols; i++)
		printf("-----");
	printf("\nBegin                    ");
	report(low, high, vettore, partElement, cols);
	//~ 1) copio vettore[0] in partElement
	partElement = vettore[low];
	printf("\nCpy vettore[low] to PE   ");
	report(low, high, vettore, partElement, cols);
	while (1) {
		//~ 2) sposto high sx a dx fino a trovare vettore[high] < partElement
		while (low < high && vettore[high] >= partElement) {
			printf("\nwhile (vettore[hi] => PE ");
			report(low, high, vettore, partElement, cols);
			high--;
			printf("\nhigh--                   ");
			report(low, high, vettore, partElement, cols);
		}
		if (low >= high) {
			printf("\nBreak in high <==        ");
			break;
		}
		//~ 3) copio vettore[high] in vettore[low]
		vettore[low] = vettore[high];
		printf("\nvettore[lo] = vettore[hi]");
		report(low, high, vettore, partElement, cols);
		low++;
		printf("\nlow++                    ");
		report(low, high, vettore, partElement, cols);
		//~ 4) sposto low dx a sx fino a trovare vettore[low] > partElement
		while (low < high && vettore[low] <= partElement) {
			printf("\nwhile (vettore[lo] <= PE ");
			report(low, high, vettore, partElement, cols);
			low++;
			printf("\nlow++                    ");
			report(low, high, vettore, partElement, cols);
		}
		if (low >= high) {
			printf("\nBreak in low ==>         ");
			break;
		}
		//~ 5) copio vettore[low] in vettore[high]
		vettore[high] = vettore[low];
		printf("\nvettore[hi] = vettore[lo]");
		report(low, high, vettore, partElement, cols);
		high--;
		printf("\nhigh--                   ");
		report(low, high, vettore, partElement, cols);
	}
	vettore[high] = partElement;
	report(low, high, vettore, partElement, cols);
	return high;
}
void report(int low, int high, int vettore[], int partElement, int i) {
	// prima riga, seconda parte (la prima parte è stampata dalla routine di split)
	printf(" ");
	for (int x = 0; x < low; x++)
		printf("|    ");
	if(high != low)
		printf("| LL ");
	else
		printf("| ** ");
	for (int x = 0; x < (high - low -1); x++)
		printf("|    ");
	if(high != low)
		printf("| HH |");
	else
		printf("|");
	//~ printf("|");
	for (int x = 0; x <= (cols - high -1); x++)
		printf("    |");
	// seconda riga
	printf("\nL = %2d; H = %2d; T = %2.d    ", low, high, partElement);
	for (int j = 0; j <= cols; j++)
		printf("| %2d ", vettore[j]);
	printf("|");
	printf("\n---------------------------");
	for (int i = 0; i <= cols; i++)
		printf("-----");
}
 */


/*
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// PROGRAMMA pagina 212 - QuickSort
	// Prove utilizzo ricorsioni - 2024-12
	// low, high
	// e = elemento di partizionamento (primo) copiato in 'temp', resta "buco" puntato da indice low
	// 1) spostiamo indice high verso sx fino a che punta a un valore < e
// 2) copiamo questo elemento in location indice low e resta "buco" in high
	// 3) spostiamo indice low verso dx fino a che punta a un valore > e
	// 4) copiamo questo elemento in location indice high
	// 5) ricomincio da 1
	// quando low e high si incontrano copiamo lì 'e'
#define N 10
#define SIZE(array) (sizeof array / sizeof(array[0]))
void quicksort(int a[], int low, int high);
void printElements(int elementi[], int high);
int split(int a[], int low, int high);
int main( void){
	int elementi[N] = {45, 13, 76, 11, 5, 81, 82, 34, 64, 29};
	int i = 0, low = 0, high = 0;
	high = SIZE(elementi) - 1;
	printf("high = %d\n", high);
	printElements(elementi, high);
		// for (i = 0; i < 10 ; i++)
		// printf("%d ", elementi[i]);
		// printf("\n");
	quicksort(elementi, low, high);
	}
void quicksort(int a[], int low, int high){
	if (low >= high)
		return;
	int middle;
	// printf("middle = %d\n", middle);
	middle = split(a, low, high);
	printf("middle = %d - ", middle);
	quicksort(a, low, middle - 1);
	quicksort(a, middle + 1, high);
}
int split(int myArray[], int low, int high){
	int temp = myArray[low];
	printf("Elemento di partizionamento = %d\n", temp);
	printf("BEFORE - low = %d, high = %d\n", low, high);
	printElements(myArray, N - 1);
	while(1){
		while(low < high && myArray[high] >= temp){
			high--;
		}
		if(low >= high)
			break;
		myArray[low++] = myArray[high];
		while(low < high && myArray[low] <= temp){
			low++;
		}
		if(low >= high)
			break;
		myArray[high--] = myArray[low];
		// printf("low = %d, high = %d - after\n", low, high);
		// printElements(myArray, 9);
	}
	myArray[high] = temp;
	printf("AFTER - High = %d, Low = %d\n", high, low);
	printElements(myArray, N - 1);
	return high; // o low, è lo stesso
}
void printElements(int elementi[], int high){
	for (int i = 0; i <= high ; i++)
		printf("%d ", elementi[i]);
	// printf("\nSIZE = %d", high);
	printf("\n\n");
}
 */


/*
// +++++++++++++++++++++++++++++++++++++++++++
// ESERCIZIO 9.1
// Errori in funzione
double triangle_area(double base, double height);
int main(void){
	double base = 5.6, altezza = 10.1;
	printf("Area = %.3f", triangle_area(base, altezza));
}
double triangle_area(double base, double height) {
	double product = base * height;
	return product / 2;
}
*/


/* 
// +++++++++++++++++++++++++++++++++++++++++++
// ESERCIZIO 9.2 - 2024-12
// Check; output 1 se x e y tra 0 e n -1
bool check(int x, int y, int n);
int main(void){
	int x = 3, y = 4, n = 3;
	bool result;
	result = check(x, y, n);
	printf("Il risultato del controllo è %d\n", result);
}
bool check(int x, int y, int n){
	return ((x < n) && (x >= 0) && (y < n) && (y >= 0) ? true: false);
}
 */


/* 
// +++++++++++++++++++++++++++++++++++++++++++
// ESERCIZIO 9.2
// Check; output 1 se x e y tra 0 e n -1
int check(int x, int y, int n);
int main(void){
	bool valore = check(13, 15, 16);
	printf("\nIl check è %d", valore);
	printf("\nIl check è %d\n", valore == 1 ? 1 : 0);
}
int check(int x, int y, int n) {
	//~ if (x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1)
		//~ return true;
	//~ return false;
	return (x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1);
}
 */


/* 
// +++++++++++++++++++++++++++++++++++++++++++
// ESERCIZIO 9.3
// Massimo Comun Divisore - 2024-12
	// m e n, dove m > n:
 	// se n = 0, allora m è MCD, altrimenti
 	// m % n, copiare n in m e % in n
 	// se n = 0, finito e m = mcd
 int mcd(int m, int n);
 int main(void){
	int m = 147, n = 14;
	printf("L'MCD è %d\n", mcd(m, n));
 }
 int mcd(int m, int n){
	int mcd;
	while(n > 0){
		mcd = m % n, m = n, n = mcd;
	}
	return m;
 }
 */


/*
// +++++++++++++++++++++++++++++++++++++++++++
// ESERCIZIO 9.3
// Massimo Comun Divisore
int mcd(int x, int y);
int main(void){
	printf("\n\nProgramma che calcola il Massimo Comun Divisore tra due interi con while.");
	int maxcd = mcd(546552, 48);
	printf("\nMCD = %d", maxcd);
}
int mcd(int a, int b) {
	int resto;
	while (b > 0) {
		resto = a % b;
		printf("\na = %6d; b = %6d; resto = %6d", a, b, resto);
		a = b;
		b = resto;
	}
	return a;
}
*/


/* // +++++++++++++++++++++++++++++++++++++++++++
// ESERCIZIO 9.4 - 2024-12
// Calcola numero del giorno dell'anno
// Se un anno è divisibile per quattro e non divisibile per cento, è bisestile.
// Se un anno è divisibile per cento e per quattrocento, è bisestile.

int mesi[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int day_of_year(int mesi[], int giorno, int mese, int anno);
int main(void){
	printf("\n\nProgramma che calcola il numero di quel giorno nell'anno\n");
	int year = 2024, month = 12, day = 31;
	printf("Numero giorno dell'anno = %d\n", day_of_year(mesi, day, month, year));
}
int day_of_year(int mesi[], int giorno, int mese, int anno){
	bool bisestile = ((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)) ? true : false;
	printf("Bisestile = %d\n", bisestile);
	int numero = 0;
	// for (int x = 0; x < mese - 1; numero += mesi[x], x++)
	for (int x = 0; x < mese - 1; numero += mesi[x++])
		printf("mese %d = %d, totale = %d\n", x, mesi[x], numero);
	numero = numero + (mese > 2 ? bisestile : 0) + giorno;
	// numero += giorno;
	return numero;
}
 */


/*
// +++++++++++++++++++++++++++++++++++++++++++
// ESERCIZIO 9.4 // errato perché bisesto lo devo aggiungere solo dopo febbraio
// Calcola numero del giorno dell'anno
int day_of_year(int giorno, int mese, int anno);
int main(void){
	printf("\n\nProgramma che calcola numero di quel giorno nell'anno");
	int giorno, mese, anno;
	printf("\nDigita la data nel formato gg/mm/aaaa\n");
	scanf("%d / %d / %d", &giorno, &mese, &anno);
	printf("\ngiorno = %d, mese = %d, anno = %d", giorno, mese, anno);
	int gg = day_of_year(giorno, mese, anno);
	printf("\nGiorno = %d", gg);
}
int day_of_year(int giorno, int mese, int anno) {
	int mesi[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	bool bisesto;
	for (int i = 0; i < mese; i++) {
		printf("\nIterazione %d, mese = %d", i, mesi[i]);
		giorno += mesi[i];
	}
	bisesto = (anno % 100 != 0 && anno % 4 == 0) || (anno % 400 == 0 && anno % 4 == 0);
	printf("\ngiorno = %d, mese = %d, anno = %d, bisesto = %d", giorno, mese, anno, bisesto);
	return giorno + bisesto;
}
*/


/* 
// +++++++++++++++++++++++++++++++++++++++++++
// ESERCIZIO 9.5
// Calcola numero cifre in un intero positivo
int num_digits(int intero) {
	int i;
	for (i = 0; intero > 0; intero /= 10, i++);
	return i;
}
int main(void){
	printf("\n\nProgramma che calcola il numero di cifre in un intero positivo");
	printf("\nDigita un intero positivo: ");
	int numeroInput;
	scanf("%d", &numeroInput);
	printf("Il numero %d è composto da %d cifre.\n", numeroInput, num_digits(numeroInput));
}
 */


/* 
// +++++++++++++++++++++++++++++++++++++++++++
// ESERCIZIO 9.6
// Restituisce n-esima cifra di un intero o 0 se n > lunghezza numero positivo
int nEsima(int numero, int cifra) {
	for (int i = 1; i < cifra; numero /= 10, i++);
	//~ return numero > 0 ? numero % 10 : 0;
	return numero % 10; // migliore
}
int main(void) {
	printf("\n\nProgramma che restituisce n-esima cifra di un intero o 0 se n > cifre.");
	printf("\nDigita un intero positivo e la cifra n-esima nel formato 'iiii n': ");
	int numero, cifra;
	scanf("%d %d", &numero, & cifra);
	printf("La %da cifra di %d è %d.\n", cifra, numero, nEsima(numero, cifra));
}
 */


/*
// +++++++++++++++++++++++++++++++++++++++++++
// ESERCIZIO 9.7
// funzione f, istruzioni ammissibili
int f(int a, int b) {
	a += b;
	return a;
}
int main(void) {
	int i;
	double x;
	i = f(83, 12); // tutto ok
	printf("\n'i = f(83, 12);' ==> i = %d", i);
	x = f(83, 12); // tutto ok, il risultato viene convertito a double
	printf("\n'x = f(83, 12);' ==> x = %f", x);
	i = f(3.15, 9.28); // tutto ok, argomenti convertiti a int e il risultato è int
	printf("\n'i = f(3.15, 9.28);' ==> i = %d", i);
	x = f(3.15, 9.28); // tutto ok, argomenti vengono convertiti a int e il risultato è int convertito a double
	printf("\n'x = f(3.15, 9.28);' ==> x = %f", x);
	f(83, 12); // ok
	printf("\n'f(83, 12);' ==> %d nessuna assegnazione", f(83, 12));
}
*/


/*
// +++++++++++++++++++++++++++++++++++++++++++
// ESERCIZIO 9.8
// funzione f con un parametro double e non restituisce nulla, prototipi ammissibili
void f(double a);	// ok, specifica tipo parametro
void g(double);		// ok, specifica tipo parametro
void h();			// ko, non specifica tipo parametro
	 i(double a);	// ko, tipo non definito dunque restituisce int
int main(void) {
}
*/


/*
// +++++++++++++++++++++++++++++++++++++++++++
// ESERCIZIO 9.9
// output del programma? non fa swap perché variabili locali passate per argomento
void swap(int a, int b);
int main(void)
{
    int i = 1, j = 2;
    swap(i, j);
    printf("i = %d, j = %d\n", i, j);
    return 0;
}
void swap (int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
*/


/*
// +++++++++++++++++++++++++++++++++++++++++++
// ESERCIZIO 9.10
// funzioni varie:
	// dato a[n]
	// maggiore tra elementi di a[]
	// media tra elementi di a[]
	// numero elementi positivi di a[]
#define SIZE(array) (sizeof array / sizeof(array[0]))		
int maggiore(int a[], int len);
double media(int len, int a[len]);
int positivi(int len, int a[len]);
int main(void)
{
    int a[25] = {0};
    int len = SIZE(a);
    srand ((unsigned) time(NULL));
    for (int i = 0; i < SIZE(a); i++)
		printf("\nValore %d =\t%3d", i, a[i] = rand() % 99 -49);
	printf("\nIl numero maggiore tra gli elementi contenuti nel vettore è %d", maggiore(a, len));
	printf("\nIl valore medio tra gli elementi contenuti nel vettore è %f", media(len, a));
	printf("\nIl numero di positivi tra gli elementi contenuti nel vettore è %d", positivi(len, a));
    return 0;
}
int maggiore(int a[], int len) {
	int max = a[0];
	for (int i = 1; i < len; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}
double media(int len, int a[len]) {
	float somma = 0;
	for (int i = 0; i < len; somma += a[i], i++);
	return somma / len;
}
int positivi(int len, int a[len]) {
	int positivi = 0;
	for (int i = 0; i < len; i++)
		if (a[i] > 0)
			positivi ++;
	return positivi;
}
*/

/* 
// +++++++++++++++++++++++++++++++++++++++++++
// ESERCIZIO 9.11
// Scrivere funzione float compute_GPA(char grades[], int n)
// il vettore contiene voti A=4 B=3 C=2 D=1 F=0
// la funzione restituisce la media
#define SIZE(array) (sizeof array / sizeof(array[0]))		
float compute_GPA(char grades[], int n);
int main(void) {
	const int voti = 10;
	char grades[voti];
	// char grades[10] = {0}; // inizializzatore solo se lunghezza non variabile
	int i = 0, ch = 0;
	printf("\n** Calcolo media voti **");
	printf("\nInserisci fino a %d voti (ABCDF) in sequenza: ", voti);
	while ((ch = getchar()) != '\n' && i < voti) {
		grades[i++] = toupper(ch);
		printf("\nIterazione %2d: carattere digitato %c", i, ch);
	}
	printf("\n --- +++ ---");
	for (int j = 0; j < i; j++)
		printf("\nIterazione %2d: carattere %c", j, grades[j]);
	float media = compute_GPA(grades, i);
    printf("\nIl voto medio è %f\n", media);
    return 0;
}
float compute_GPA(char grades[], int n) {
	float media = 0;
	for (int i = 0; i < n; i++) {
		switch(tolower(grades[i])) {
			default  : media += 0 ; break;
			case 'a' : media += 4 ; break;
			case 'b' : media += 3 ; break;
			case 'c' : media += 2 ; break;
			case 'd' : media += 1 ; break;
			case 'e' : media += 0 ; break; // non serve, c'è già default
		}
	}
	return media / n;
}
 */


/* 
// +++++++++++++++++++++++++++++++++++++++++++
// ESERCIZIO 9.12 - 2024-12
// Scrivere funzione
// double inner_product(double a[], double b[], int n);
// restituisce somma di a[0] * b[0] + ... + a[n - 1] * b[n - 1]
#define SIZE(array) (sizeof array / sizeof(array[0]))		
double inner_product(double a[], double b[], int n);
int main(void){
	srand((unsigned) time(NULL));
	int n = rand() % 70 + 3;
	double a[n];
	double b[n];
	int i = 0;
    printf("RAND_MAX: %d\n", RAND_MAX);
	for (i = 0; i < SIZE(a); i++){
		a[i] = (double)rand() / RAND_MAX * 100;
		b[i] = (double)rand() / RAND_MAX * 100;
		}
	for (i = 0; i < SIZE(a); i++){
		printf("a[%d] = %.3f; b[%d] = %.3f\n", i, i, a[i], b[i]);
		}
	printf("Il valore a[0] * b[0] + ... + a[n - 1] * b[n - 1] è %f\n", inner_product(a, b, i));
}
double inner_product(double a[], double b[], int n){
	double sum = 0;
	while(n >= 0){
		sum += a[n] * b[n--];
	}
	return sum;
}
 */


/* 
// +++++++++++++++++++++++++++++++++++++++++++
// ESERCIZIO 9.12
// Scrivere funzione
// double inner_product(double a[], double b[], int n);
// restituisce somma di a[0] * b[0] + ... + a[n - 1] * b[n - 1]
double inner_product(double a[], double b[], int len);
int main(void) {
	srand((unsigned) time(NULL));
	int len = rand() % 7 + 3;
	double a[len];
	double b[len];
	for (int i = 0; i < len; i++) {
		printf("\na[%d] = %.3f", i, a[i] = (double) (rand() % 900 + 100) / 100 );
		printf("\nb[%d] = %.3f", i, b[i] = (double) (rand() % 900 + 100) / 100);
	}
	printf("\n\nIl risultato di 'a[0] * b[0] + ... + a[n - 1] * b[n - 1]' è %.3f", inner_product(a, b, len));
}
double inner_product(double a[], double b[], int len) {
	double sum = 0;
	for (int i = 0; i < len; i++) {
		sum += a[i] * b[i]; 
	}
	return sum;
}
 */


/*
// +++++++++++++++++++++++++++++++++++++++++++
// ESERCIZIO 9.13 - KNK pagina 224
// Funzione che valuta stato di una partita di scacchi
// int evaluate_position(char board[8][8]);
#define SIDE 8
int evaluate_position(char board[SIDE][SIDE]);
int main(void) {
	char board[SIDE][SIDE] = {"-"};
	//~ int values[2][6] = {
		//~ {'K', 'Q', 'R', 'B', 'N', 'P'},
		//~ { 0,   0,   5 ,  3 ,  3 ,  1 }
	//~ };
	srand((unsigned) time(NULL));
	for (int x = 0; x < SIDE; x++) {
		for (int y = 0; y < SIDE; y++) {
			board[x][y] = '-';
		}
	}
	board[3][1] = 'K';
	board[2][2] = 'Q';
	board[4][7] = 'R';
	board[4][8] = 'B';
	board[7][2] = 'P';
	board[1][3] = 'N';
	board[4][4] = 'P';
	board[0][5] = 'P';
	board[2][5] = 'k';
	board[7][5] = 'q';
	board[6][6] = 'r';
	board[0][2] = 'p';
	board[5][2] = 'p';
	board[2][7] = 'b';
	board[3][4] = 'n';
	board[1][5] = 'p';
	// Stampa scacchiera e pezzi
	for (int x = 0; x < SIDE; x++) {
		for (int y = 0; y < SIDE; y++) {
			printf("%c ", board[x][y]);
		}
		printf("\n");
	}
	printf("\nIl valore attuale della scacchiera è %d", evaluate_position(board));
}
int evaluate_position(char board[SIDE][SIDE]) {
	int sum = 0;
	int values[2][6] = {
		{'K', 'Q', 'R', 'B', 'N', 'P'},
		{ 0,   9,   5 ,  3 ,  3 ,  1 }
	};
	//~ Controllo che pezzo c'è in ogni cella
	for (int x = 0; x < SIDE; x++) {
		for (int y = 0; y < SIDE; y++) {
			for (int z = 0; z <= 5; z++) {
				if (board[x][y] == values[0][z])
					sum += values[1][z];
				if (board[x][y] == tolower(values[0][z]))
					sum -= values[1][z];
			}
		}
	}
	return sum;
}
*/



// +++++++++++++++++++++++++++++++++++++++++++
// ESERCIZIO 9.15 - KNK pagina 224 - 2024-12
// Funzione che cerca il mediano tra tre numeri
// deve avere un solo 'return'
int cerca_mediano(int x, int y, int z);
int main(void){
	double x, y, z;
	printf("Funzione che stampa il mediano tra tre numeri\n");
	srand((unsigned) time(NULL));
	int len = rand() % 7 + 3;
	printf("\nx = %.3f", x = (double) (rand() % 900 + 100) / 100 );
	printf("\ny = %.3f", y = (double) (rand() % 900 + 100) / 100 );
	printf("\nz = %.3f", z = (double) (rand() % 900 + 100) / 100 );
	printf("\n");
}
int cerca_mediano(int x, int y, int z){
	int mediano;
	if(x <= y && x <= z)
		mediano = x;
	elseif(y)	
}




/*
	// +++++++++++++++++++++++++++++++++++++++++++
	// ESERCIZIO 9.15 - KNK pagina 224
	// Funzione che cerca il mediano tra tre numeri
	// deve avere un solo 'return'
int cerca_mediano(int x, int y, int z);
int main(void) {
	int x = 0, y = 0, z = 0;
	srand((unsigned) time(NULL));
	x = rand() / 1000000;
	y = rand() / 1000000;
	z = rand() / 1000000;
	printf("\nIl valore mediano tra %d, %d e %d è %d", x, y, z, cerca_mediano(x, y, z));
}
int cerca_mediano(int x, int y, int z) {
	int mediano = 0;
		if ((x < y && y < z) || (z < y && y < x))
			mediano = y;
		else if ((y < z && z < x) || (x < z && z < y))
			mediano = z;
		else
			mediano = x;
	return mediano;
}
*/


/*
	// +++++++++++++++++++++++++++++++++++++++++++
	// ESERCIZIO 9.16 - KNK pagina 225
	// Compatta la funzione di fattoriale usando operatore condizionale
	// Prove utilizzo ricorsioni: n! = n * (n - 1)!
int fact(int n);
int main(void) {
	printf("\nRisultato = %d", fact(4));
	return 0;
}
int fact(int n) {
	return n <= 1 ? 1 : n * fact(n - 1);
}
*/

/*
	// +++++++++++++++++++++++++++++++++++++++++++
	// ESERCIZIO 9.17 - KNK pagina 225
	// Fattoriale senza ricorsione
	// Prove utilizzo ricorsioni: n! = n * (n - 1)!
int fact(int n);
int main(void) {
	printf("\nRisultato = %d", fact(6));
	return 0;
}
int fact(int n) {
	//~ while (i > 0)
		//~ n *= i--;
	for (int i = n - 1; i > 0; n *= i--);
	return n;
}
*/

/*
	// +++++++++++++++++++++++++++++++++++++++++++
	// ESERCIZIO 9.18
	// Massimo Comun Divisore - ricorsivo invece che normale come 9.3
int mcd(int x, int y);
int main(void){
	printf("\n\nProgramma che calcola il Massimo Comun Divisore tra due interi con while.\n");
	int maxcd = mcd(54712, 256);
	printf("\n\nMCD = %d", maxcd);
}
int mcd(int a, int b) {

	//~ // ++++ mio codice ++++
	//~ int resto;
	//~ // condizione base
	//~ if (b == 0)
		//~ return a;
	//~ // progressione
	//~ printf("\na = %6d; b = %6d; resto = %6d", a, b, resto);
	//~ resto = a % b;
	//~ a = b;
	//~ b = resto;
	//~ return mcd(a, b);

	// ++++ codice ricorsivo ottimizzato con operatore condizionale ++++
	printf("\na = %6d; b = %6d", a, b);
	return b == 0 ? a :  mcd(b, a % b);

	// ++++ mio codice non ricorsivo ++++
	//~ int resto;
	//~ while (b > 0) {
		//~ resto = a % b;
		//~ printf("\na = %6d; b = %6d; resto = %6d", a, b, resto);
		//~ a = b;
		//~ b = resto;
	//~ }
	//~ return a;
}
*/

/*
	// +++++++++++++++++++++++++++++++++++++++++++
	// ESERCIZIO 9.19
	// Funzione del mistero
	// Conversione base 10 - base 2
void converti(int numero);
int main(void){
	int base10;
	printf("\n\nProgramma che converte un numero da base10 a base2.\n");
	printf("\nDigita un numero: ");
	scanf("%d", &base10);
	printf("\nIl numero %d convertito in base2 diventa ", base10);
	converti(base10);
}
void converti(int numero) {
	//~ // ++++ Codice KNK ++++
	// condizione base
	if (numero != 0) {
		converti (numero / 2);
		putchar ('0' + numero % 2);
	}
}
*/

/*
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGRAMMA 9.1
	// Selection Sort cerca elemento più grande del vettore e lo sposta alla fine
	// poi richiama se stessa con argomento vettore e lunghezza n-1
#define SIZE(array) (sizeof array / sizeof(array[0]))		

void selection_sort1(int vettore[], int n); // mia interpretazione
void selection_sort2(int vettore[], int n); // da web

int main(void){
	int len = 10000;
	int vettore[len];
	srand((unsigned) time(NULL));
	for (int i = 0; i < len; vettore[i] = rand() % 1000, i++);
	 //~ = {54, 16, 91, 13, 48, 38, 14, 97, 99, 21, 55, 34, 25, 54, 16, 91, 13, 48, 38, 14, 97, 99, 21, 55, 34, 25, 54, 16, 91, 13, 48, 38, 14, 97, 99, 21, 55, 34, 25};
	printf("\n\nProgramma che fa il sort di una serie di numeri.\n");
	long start = clock();
	selection_sort1(vettore, SIZE(vettore));
	//~ selection_sort2(vettore, SIZE(vettore));
	long end = clock();
	for (int i = 0; i < SIZE(vettore); i++)
	printf("\nIterazione %d, valore %d", i, vettore[i]);
	printf("\nTime: %ld", end - start);
	//~ printf("\nTime end: %ld", time(NULL));

}

void selection_sort1(int vettore[], int len) {
	int max = vettore[0];
	int position = 0;
	// condizione base
	if (len != 0) {
		for (int i = 1; i < len; i++) {
			if (vettore[i] > max) {
				position = i;
				max = vettore[i];
			}
		}
			
		for (int i = position; i < len - 1; i++)
			vettore[i] = vettore[i + 1];
		vettore[len - 1] = max;

		//~ for (int i = 0; i < len; i++)
			//~ printf("\nIterazione %d, valore %d", i, vettore[i]);

		selection_sort1(vettore, --len);
	}
}

// un po' più efficiente: non sposta tutti gli elementi, ma scambia il più alto e l'ultimo
// ma in realtà sembra più lento... possibile?
void selection_sort2(int a[], int n) {
    if (n == 0) return;
    
    int i, index_largest = 0;

    for (i = 1; i < n; i++) {
        if (a[i] > a[index_largest])
            index_largest = i;
    }

    int largest = a[index_largest];
    a[index_largest] = a[n-1];
    a[n-1] = largest;

    selection_sort2(a, n - 1);
}
*/

/*
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGRAMMA 9.2
	// Calcolo dell'imposta sul reddito

double calcola_imposta(double imponibile);
int main(void) {
	double imponibile, imposta;
	printf("\n\nDigita l'imponibile: ");
	scanf("%lf", &imponibile);
	imposta = calcola_imposta(imponibile);
	printf(" Importo imposta = $ %.2f", imposta);
	printf("\n Imposta percentuale media = %.2f%%", imposta / imponibile * 100);
}

double calcola_imposta(double imponibile) {
	double imposta;
	if (imponibile <= 750.00f) {
		imposta = imponibile * .01f;
		}
	else if (imponibile <= 2250.00f) {
		imposta = 7.5f + (imponibile - 750) * .02f;
		}
	else if (imponibile <= 3750.00f) {
		imposta = 37.5f + (imponibile - 2250) * .03f;
		}
	else if (imponibile <= 5250.00f) {
		imposta = 82.5f + (imponibile - 3750) * .04f;
		}
	else if (imponibile <= 7000.0f) {
		imposta = 142.5f + (imponibile - 5250) * .05f;
		}
	else {
		imposta = 230.0f + (imponibile - 7000) * .06f;
		}
	return imposta;
}
*/

/*
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGRAMMA 9.3
	// Cammino casuale con funzioni
	// void generate_random_walk(char walk[10][10]);	inizializza e cammina
	// void point_array(char walk[10][10]);				stampa griglia

void generate_random_walk(char cammino[10][10]);
void print_array(char cammino[10][10]);

int main(void) {
	char cammino[10][10];
	generate_random_walk(cammino);
}

void print_array(char cammino[10][10]) {
	for (int tRow = 0; tRow <= 9; tRow++) {
		for (int tCol = 0; tCol <= 9; tCol++) {
			printf("%c ", cammino[tRow][tCol]);
		}
		printf("\n");
	}
}

void generate_random_walk(char cammino[10][10]) {
	srand((unsigned) time(NULL));
	char lettera = 'A';
	int cRow, cCol, row = 0, col = 0, dir;
	for (cRow = 0; cRow <= 9; cRow++) { // riempie quadrante con '.'
		for (cCol = 0; cCol <= 9; cCol++) {
			cammino[cRow][cCol] = '.';
		}
	}
	printf("*** Movimento casuale lettera in quadrante***");
	cRow = rand() % 10;
	cCol = rand() % 10;
	cammino[cRow][cCol] = lettera;
	printf("\ncRow e cCol: %d/%d\n", cRow, cCol);
	//~ Stampa quadrante
	print_array(cammino);
	while (cammino[cRow == 0 ? 0 : cRow -1][cCol] == '.' || cammino[cRow == 9 ? 9 : cRow +1][cCol] == '.' || cammino[cRow][cCol == 0 ? 0 : cCol -1] == '.' || cammino[cRow][cCol == 9 ? 9 : cCol +1] == '.') {
		do {
			do { // Seleziono una direzione casuale di movimento
				dir = rand() % 4;
				printf("\nProssima direzione: ");
				switch (dir) {
					case 0 : row = -1; col = 0; printf("Up   "); break; // up
					case 1 : row = 0; col = -1; printf("Left "); break; // left
					case 2 : row = 0; col = +1; printf("Right"); break; // right
					case 3 : row = +1; col = 0; printf("Down "); break; // down
				}
				//~ while (getchar() != '\n');
			//~ Il nuovo posto è all'interno della griglia? No, ritorna; sì, continua
			} while (cRow + row < 0 || cRow + row > 9 || cCol + col < 0 || cCol + col > 9);
			//~ Il nuovo posto è libero? No, ripeti  scelta direzione; sì, continua
		} while (cammino[cRow + row][cCol + col] != '.');
		cRow += row; cCol += col;
		cammino[cRow][cCol] = ++lettera;
	//~ Stampa quadrante
	printf("\nProssima lettera: %c\n", lettera);
	print_array(cammino);
	if (lettera >= 'Z')
	break;
	}
}
*/

/*
 	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 9.4
	// Parole Anagramma
	// funzione read_word(int counts[26]);
	// funzione equal_array(int counts1[26],int counts1[26]);
#define SIZE(array) (sizeof(array) / sizeof(array[0]))

void read_word(int parola[26]);
bool equal_array(int parola1[26], int parola2[26]);

int main(void) {
	int parola1[26] = {0};
	int parola2[26] = {0};
	printf("\n\nDigita la prima parola: ");
	read_word(parola1);
	printf("\nDigita la seconda parola: ");
	read_word(parola2);
	bool result = equal_array(parola1, parola2);
	printf("\n\nLe due parole ");
	if (result == false)
		printf("non ");
	printf("sono anagrammi.");
}

void read_word(int parola[26]) {
	int myChr;
	while ((myChr = tolower(getchar())) != '\n') {
		if (isalpha(myChr) != 0) {
			myChr -= 'a';
			printf("Valore di %c = %d\n", myChr + 'a', myChr);
			parola[myChr]++;
		}
	}
	//~ for (int i = 0; i < 26; i++) {
		//~ printf("\nCarattere %c presente %d volta/e", i + 'a', parole[i]);
	//~ }
}

bool equal_array(int parola1[26], int parola2[26]) {
	for (int i = 0; i < 26; i++)
		if (parola1[i] != parola2[i])
			return false;
	return true;
}
*/


/*
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 9.5
	// Quadrato magico
	// Devo inserire i numeri andando sempre verso in alto a destra; se "sbordo" devo "arrotolare" e se la posizione è già occupata scendo di una riga e mantengo la colonna
	// usare funzione void create_magic_square(int n, char magic_square[n][n]);
	// usare funzione void print_magic_square(int n, char magic_square[n][n]);
#define SIZE(array) (sizeof(array) / sizeof(array[0]))

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void) {
	unsigned int side;
	printf("\n*** Quadrato Magico ***");
	printf("\nDigita il lato del quadrato (dispari): ");
	scanf("%d", &side);
	char magic_square[side][side];
	create_magic_square(side, magic_square);

	int Row = 0, Col = side / 2;
	magic_square[Row][Col] = 1;
	for (int i = 2; i <= side * side; i++) {
		Row = Row == 0 ? side - 1 : Row - 1;	// se prima riga, vado all'ultima (side -1)
		Col = Col == side - 1 ? 0 : Col + 1;	// se ultima colonna, vado alla prima (0)
		if (magic_square[Row][Col] != 0) {		// se posizione occupata
			Row = Row == side ? 0 : Row + 1;	// incremento riga e mantengo colonna
		}
		magic_square[Row][Col] = i;
	}
	print_magic_square(side, magic_square);	
}

void create_magic_square(int n, char magic_square[n][n]) {
	for (int Row = 0; Row < n; Row++) {			// riempie quadrante con '0'
		for (int Col = 0; Col < n; Col++) {
			magic_square[Row][Col] = 0;
		}
	}
}

void print_magic_square(int side, char magic_square[side][side]) {
		printf("\n");
		int colValue[side];
		for (int i = 0; i < SIZE(colValue); i++)
			colValue[i] = 0;
		for (int Row = 0; Row < side; Row++) {
			int rowValue = 0;
			for (int Col = 0; Col < side; Col++) {
				printf("  %3d", magic_square[Row][Col]);
				rowValue 	   += magic_square[Row][Col];
				colValue[Col] += magic_square[Row][Col];
			}
			printf(" %3d\n", rowValue);		// stampa totale riga
		}
		for (int i = 0; i < side; i++)
			printf(" %4d", colValue[i]);	// stampa totale colonna
}
*/

/*
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 9.6
	// Polinomio

int polinomio(long x);
int potenza(long x, int n);

int main(void) {
	long x;
	printf("\n\nDigita il valore di x: ");
	scanf("%ld", &x);
	printf("\nValore di 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %d", polinomio(x));
}
int polinomio(long x) {
	int val = 3 * potenza(x, 5) + 2 * potenza(x, 4) - 5 * potenza(x, 3) - potenza (x, 2) + 7 * x - 6;
	return val;
}
int potenza(long x, int n) {
	if (n == 0)
		return 1;
	n--;
	return x * potenza(x , n);
}
*/

/*
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 9.7
	// Stampa potenze con ricorsione; il libro fa capire che nell'esercizio precedente col polinomio la ricorsione non era richiesta

int potenza(int x, int n);

int main(void) {
	int x;
	int n;
	printf("\n\nDigita il valore di x ed n separati da uno spazio: ");
	scanf("%d %d", &x, &n);
	printf("\nRisultato di %d^%d = %d", x, n, potenza(x, n));
}
int potenza(int x, int n) {
	// condizione base
	if (n == 0)
		return 1;
	if (n % 2 == 0) {
		return potenza(x, n / 2) * potenza(x, n / 2);
	}
	else {
		return x * potenza(x , n - 1);
	}
}
*/

/*
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 9.8
	// Gioco craps. Primo lancio 7 o 11 vince, 2 o 3 o 12 perde. Tutto il resto "punto" e continua. Se esce nuovamente punto, vince. Se esce 7, perde. Se altro valore continua. Alla fine chiede se terminare; se sì, stampare vittorie e perdite.
	// Funzione main, int roll_dice(void); e void play_game(void);
	// Funzione roll genera due numero 1-6 e restituisce somma
	// Funzione play chiama roll per giocare, restituisce true vince o false perde. Mostra anche esiti lanci
	// Funzione main chiama play, traccia vittorie e sconfitte, you win e yu lose.  

	int roll_dice(void);	// genera due numeri 1-6 e restituisce somma
	bool play_game(void);	// chiama roll per giocare, ritorna true vince o false perde. Mostra esiti lanci

int main(void) {
	char sn, ch;
	int win = 0, lose = 0;
	srand((unsigned) time(NULL));
	printf("\n++++++++++++++");
	printf("\n+++ CRAPS! +++");
	printf("\n++++++++++++++");
	while(1) {
		play_game() == true ? win++ : lose++;
		printf("\n\nDesideri giocare ancora? S/N: ");
		scanf("%c", &sn);
		while ((ch = getchar()) != '\n');
		if (tolower(sn) == 'n') {
		printf("\n++++++++++++++++++++++");
		printf("\n+++ Fine del gioco +++\nPartite vinte = %d\nPartite perse = %d", win, lose);
		break;
		}
	}
}

int roll_dice(void) { // genera due numeri 1-6 e restituisce somma      
	int dado1 = rand () % 6 + 1;
	int dado2 = rand () % 6 + 1;
	printf("\n\nDado 1 = %d; dado 2 = %d", dado1, dado2);
	return dado1 + dado2;
}

bool play_game(void) {
	int lancio, punto;
	lancio = roll_dice();
	switch(lancio) { // qui sotto si può ottimizzare consolidando i return e gestendo hai vinto/perso in main come in https://github.com/fordea/c-programming-a-modern-approach/blob/master/ch09/Projects/08.c
		case 7 : case 11 :
			printf("\nIl tuo lancio: %2d - hai vinto!", lancio);
			return true;
		case 2 : case 3 : case 12:
			printf("\nIl tuo lancio: %2d - hai perso!", lancio);
			return false;
		default :
			punto = lancio;
			printf("\nIl tuo punto: %2d - il gioco continua!", lancio);
	}
	while(1) {
		lancio = roll_dice();
		if (lancio == punto) {
			printf("\nIl tuo lancio: %2d - hai vinto!", lancio);
			return true;
		}
		else if (lancio == 7) {
			printf("\nIl tuo lancio: %2d - hai perso!", lancio);
			return false;
		}
		else {
			printf("\nIl tuo lancio: %2d - il gioco continua!", lancio);
		}
	}
}
*/
