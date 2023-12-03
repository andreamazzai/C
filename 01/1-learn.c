#include <stdio.h>
#include <string.h>
#include <math.h>

int a = 0;
int *ptr;
int main(void){

// PRINTF
	printf("\n\n **** printf() ****\n");
	int x_print_int = 4096;
	printf("Format %%d: int x = %d\n", x_print_int);
	printf("Format %%i: int x = %d\n", x_print_int);
	printf("Format %%u: int -x = %u\n", -x_print_int);
	printf("Format %%u: int x = %u\n", x_print_int);
	printf("Format %%x: int x = %x\n", x_print_int);
	printf("Format %%o: int x = %o\n", x_print_int);

	// Prove per capire dimensione INT
	// https://learn.microsoft.com/it-it/cpp/cpp/data-type-ranges?view=msvc-170
	unsigned short int x_print_unsigned_short_int_size = pow(2, 16) -1;
	printf("\n1) Format %%u: unsigned short int x = %u\n", x_print_unsigned_short_int_size);
	printf("Variable size = %d\n", sizeof(x_print_unsigned_short_int_size));

	signed short int x_print_signed_short_int_size = pow(2, 15) -1;
	printf("\n2) Format %%d: signed short int x = %d\n", x_print_signed_short_int_size);
	printf("Variable size = %d\n", sizeof(x_print_signed_short_int_size));

	x_print_signed_short_int_size = - pow(2, 15);
	printf("\n2a) Format %%d: signed short int x = %d\n", x_print_signed_short_int_size);
	printf("Variable size = %d\n", sizeof(x_print_signed_short_int_size));

	unsigned int x_print_unsigned_int_size = pow(2, 32) -1;
	printf("\n3) Format %%u: unsigned int x = %u\n", x_print_unsigned_int_size);
	printf("Variable size = %u\n", sizeof(x_print_unsigned_int_size));

	signed int x_print_signed_int_size = pow(2, 31) -1;
	printf("\n4) Format %%d: signed int x = %d\n", x_print_signed_int_size);
	printf("Variable size = %d\n", sizeof(x_print_signed_int_size));

	//~ unsigned long long int x_print_unsigned_ll_int_size = pow(2, 64) -1;
	//~ printf("\n5) Format %%llu: int x = %llu\n", x_print_unsigned_ll_int_size);
	//~ printf("Variable size = %d\n", sizeof(x_print_unsigned_ll_int_size));
	
	//~ signed long long int x_print_signed_ll_int_size_ll = pow(2, 62) -1;
	//~ printf("\n6) Format %%lld: int x = %lld\n", x_print_signed_ll_int_size_ll);
	//~ printf("Variable size = %d\n", sizeof(x_print_signed_ll_int_size_ll));

	// Essendo signed, il range di 8 bit è tra -128 e +127; ragionamento similare per 32 bit
	int x_print_int_base = 2;
	int x_print_int_exp = 31;
	int x_print_int_result = 1;
	while(x_print_int_exp != 0) {
		x_print_int_result *= x_print_int_base;
	printf("\n5) Format %%d: signed int x = %d", x_print_int_result);
		--x_print_int_exp;
	}
	x_print_int_result -= 1; // passo dal valore più basso negativo al valore più alto possibile positivo, come se facessi -128 -1 = +127
	printf("\n5) Format %%d: signed int x = %d\n", x_print_int_result);
	printf("Variable size = %d\n", sizeof(x_print_int_result));

// unsigned ll int
	x_print_int_base = 2;
	x_print_int_exp = 64; // 64 bit
	unsigned long long int x_print_unsigned_ll_int_result = 1;
	while(x_print_int_exp != 0) {
		x_print_unsigned_ll_int_result *= x_print_int_base;
		--x_print_int_exp;
	}
	x_print_unsigned_ll_int_result -= 1;
	printf("\n6) Format %%llu: unsigned long long int x = %llu\n", x_print_unsigned_ll_int_result);
	printf("Variable size = %d\n", sizeof(x_print_unsigned_ll_int_result));

// signed ll int
	x_print_int_base = 2;
	x_print_int_exp = 63;
	long long int x_print_signed_ll_int_result = 1;
	while(x_print_int_exp != 0) {
		x_print_signed_ll_int_result *= x_print_int_base;
		--x_print_int_exp;
	}
	x_print_signed_ll_int_result -= 1;
	printf("\n7) Format %%lld: signed long long int x = %lld\n", x_print_signed_ll_int_result);
	printf("Variable size = %d\n", sizeof(x_print_signed_ll_int_result));

	float x_print_float = pow(2, 64);
	printf("\n8a) Format %%f: float x = %f\n", x_print_float);
	printf("Variable size = %d\n", sizeof(x_print_float));

	double x_print_dbl = pow(2, 64);
	printf("\n8b) Format %%f: double x = %f\n", x_print_dbl);
	printf("Variable size = %d\n", sizeof(x_print_dbl));

	long double x_print_long_dbl = pow(2, 64);
	printf("\n8c) Format %%f: long double x = %Lf\n", x_print_long_dbl);
	printf("Variable size = %d\n", sizeof(x_print_long_dbl));

	int x_print_bin = 65;
	printf("\nFormat %%c: int x = %c\n", x_print_bin);
	float x_print2 = 1472050.7646;
	printf("Format %%f: float x = %f\n", x_print2);
	printf("Format %%e: float x = %e\n", x_print2);
	printf("Format %%E: float x = %E\n", x_print2);
	printf("Format %%g: float x = %g\n", x_print2);
	int x_print3= 53280;
	printf("Format %%x: int x = %x\n", x_print3);
	printf("Format %%x: int x = %#x\n", x_print3);
	printf("Format %%X: int x = %X\n", x_print3);
	printf("Format %%X: int x = %#X\n", x_print3);
	char stringa_x_print[] = "stringa_x_print di prova";
	printf("Format %%s: char[] stringa_x_print = %s\n", stringa_x_print);
	printf("Format %%p: indirizzo char[] stringa_x_print = %p\n", &stringa_x_print);
	printf("Format %%p: indirizzo char[] stringa_x_print = %p\n", (void*)&stringa_x_print);
	char stringa_x_print2[] = "allineamento";
	printf("Format %%20s:    allinea a dx - %20s\n", stringa_x_print2);
	printf("Format %%-20s:   allinea a sx - %-20s\n", stringa_x_print2);
	printf("Format %%20.5s:  allinea a dx - %20.5s\n", stringa_x_print2);
	printf("Format %%-20.5s: allinea a sx - %-20.5s\n", stringa_x_print2);


	printf("\n\n **** printf() ****\n");
	a = 5 + printf("Hello World!");
	printf("\nStampiamo 'sto numero: %d", a);
	printf("\nStampiamo 'sto numero: %d,%d,%d,%d",a, 243, a + 3, printf(", ciaooo"));
	
	printf("\nStampiamo un carattere: %c", 'g');
	printf("\nStampiamo una stringa: %s", "E dajeeeeeee");


goto salta_puntatori;
// PUNTATORI
	int altezza = 5;
	int larghezza = 10;
	int area = altezza * larghezza;
	
	int *ptr_altezza; // scorciatoia: int *ptr_altezza = &altezza
	int *ptr_larghezza; // così invece definisco pointer, ma non assegno indirizzo
	int *ptr_area;
	ptr_altezza = &altezza; // assegno a pointer l'indirizzo di altezza
	ptr_larghezza = &larghezza;
	ptr_area = &area;
		
	printf("\n");
	printf("\nAltezza: %d", altezza);
	printf("\nLarghezza: %d", larghezza);
	printf("\nArea: %d", area);
	
	printf("\nValore altezza da pointer: %i", *ptr_altezza);
	printf("\nValore larghezza da pointer: %i", *ptr_larghezza);
	printf("\nIndirizzo altezza: %p", ptr_altezza);
	printf("\nIndirizzo larghezza: %p", ptr_larghezza);
//	printf("\nLa routine si trova a:%p", &main);
	
	*ptr_altezza = 8;
	*ptr_larghezza = 9;
	
	*ptr_area = *ptr_altezza * *ptr_larghezza;
	printf("\nL'area è: %d", *ptr_area);
salta_puntatori:

goto theend;

/*
	char string[] = "Hello World!";
	char *my_pointer = string;
	printf("\n\nLa prima lettera è: %c", *my_pointer);
	printf("\nLa frase intera è: %s", my_pointer);
	*my_pointer = 'h';
	printf("\n\nColpo di scenaaa");
	printf("\nLa prima lettera è: %c", *my_pointer);
	printf("\nLa frase intera è: %s", my_pointer);
	
	char stringa[] = "hello world";
	char *ptr = stringa;
	printf("\n\nPrima... La stringa è: %s", ptr);
	*ptr = 'H';
	ptr ++;
	*ptr = 'E';
	ptr ++;
	ptr = ptr -2;
	printf("\n\nE poi... La stringa è: %s", ptr);
	
	printf("\n\nLa stringa vista dall'array: %s", stringa);
	printf("\n\nIl primo carattere visto dall'array: %c", stringa[0]);
	
	stringa[0] = 'J';
	printf("\n\nIl primo carattere visto dall'array: %c", stringa[0]);
	printf("\n\nLa stringa vista dall'array: %s", stringa);
*/

	char date[] =	"20230216";
	char year[] =	"YYYY";
	char month[] =	"MM";
	char day[] =	"DD";
	
	for (int i = 0; i < sizeof(year) -1; i++) {
		year[i] = date[i];
	}
	
	for (int i = 0; i < sizeof(month) -1; i++) {
		month[i] = date[i + sizeof(year) -1];
	}
	
	for (int i = 0; i < sizeof(day) -1; i++) {
		day[i] = date[i + sizeof(day) -1];
	}
	
		printf("\n\nL'anno è: %s", year);
		printf("\nIl mese è: %s", month);
		printf("\nIl giorno è: %s", day);
	
	printf("\n\n");
	char food[] = "tonno";
	printf("Il cibo selezionato è: %s\n", food);
	strcpy(food, "manzo");
	printf("Il cibo selezionato è: %s\n", food);

/*	
	char mionome[20];
	char fidanzatina[20];
	int bambini;
	
	printf("\n");
	printf("Qual è il tuo nome? ");
	scanf("%s", mionome);
	printf("Qual è il nome della fidanzatina? ");
	scanf("%s", fidanzatina);
	printf("Quanti bambini volete? ");
	scanf("%d", &bambini);
	printf("\n%s e %s sono innamorati e avranno %d bambini", mionome, fidanzatina, bambini);
*/
	
	char *varia = "ma si puo' fare o no?";
	printf("\n\nIl contenuto della variabile 'varia' è: %s", varia);
	
	printf("\n\nIl valore è: %f", 2.67e5);
	printf("\n\nIl valore è: %f", 2.67e5);
	printf("\n\nIl valore è: %o", 0164);
	
	
// Attenzione ai confini degli array
	char primo[] = "123456789";
	char secondo[] = "123456789012345";
	primo[-4]	= 'x';
	printf("\n\nVediamo... %s", primo);
	printf("\nVediamo... %s", secondo);
	printf("\nIndirizzo di 'primo': %p", &primo);
	printf("\nIndirizzo di 'secondo': %p", &secondo);
	
// C'è un null e dunque non stampa oltre la stringa originaria	
	char str1_check[10] = "123456";
	str1_check[7] = '7';
	str1_check[8] = '8';
	printf("\nLa stringa è: %s", str1_check);
	str1_check[6] = '_'; // ma questo sovrascrive \0
	printf("\nLa stringa è: %s", str1_check);
	
// SHIFT
	int signed x = 0b10100010;
	printf("\n\nDecimale: %d, Binario: %X", x, x);
	x = x >> 1;
	printf("\n\nDecimale: %d, Binario: %x", x, x);
	
// OVERFLOW
	short int xa = 96;
	int ya = 32600;
	printf("\n\nX = %d; Y = %d", xa, ya);
	xa = ya;
	printf("\nX = %d; Y = %d", xa, ya);

// CAST
	printf("\n\n **** CAST ****\n");
	int xint = 9;
	int yint = 4;
	float xfloat = 9;
	float yfloat = 4;
		
	printf("x = %i; y = %i \n", xint, yint);

	int fb = xint / yint;
	printf("'int f = (x / y)' = %i \n", fb);

	float fc = xint / yint;
	printf("'float f = (x / y)' = %f \n", fc);
	
	float fd = xfloat / yfloat;
	printf("'float f = float_x / float_y' = %f \n", fd);
	
	float ff = xint / yfloat;
	printf("'float f = x / float_y' = %f \n", ff);

	float fe = xint / (float)yint;
	printf("'float f = x / (float)y' = %f \n", fe);

	float fg = xfloat / yint;
	printf("'float f = float_x / y' = %f \n", fg);
	
	printf("\n\n");	
	int ag = 123;
	int bg = 456;
	int cg = ag + bg;
	printf("'a + b' = %i \n", cg);
	int cg1 = (char)(ag + bg);
	printf("'(char)(a + b)' = %i \n", cg1);
	printf("%i", (char)(bg));
	
// Array e Pointer	
	printf("\n\n");	
	int numeri[5];
	int *ptr_numeri = numeri;
	int val =2;
	
	for (;ptr_numeri < &numeri[5]; ptr_numeri++) {
		printf("\nL'indirizzo di 'ptr_numeri' è %p", ptr_numeri);
		*ptr_numeri = val;
		// val = val * 2;
		val *= 2;
		}
		
	for (int i = 0; i < 5 ; i++) {
		printf("\nValore elemento %d = %d", i+1, numeri[i]);
	}

// FLOAT e INT
	printf("\n\n **** FLOAT E INT ****\n");
	int prezzo_patate = 2; // prezzo vendita
	int patate_totali = 24674; //patate raccolte e vendute
	int giorni = 17; // giorni
	
	double guadagno = (float)prezzo_patate * patate_totali / giorni;
	printf("Guadagno giornaliero = %f", guadagno);

// TEST
goto salta_test;
	printf("\n\n **** TEST ****\n");
	char lastname_test[20];
	printf("Digita il cognome: ");
	scanf("%s", lastname_test);
	printf("Il cognome inserito è: %s\n", lastname_test);
	(lastname_test[0] < 'M') ? printf("Squadra A-L") : printf("Squadra M-Z");
	
	int friends_test = 0;
	printf("\n\nQuanti amici hai? ");
	scanf("%d", &friends_test);
	printf("Dunque hai %i amic%c", friends_test, (friends_test == 1) ? 'o' : 'i');
salta_test:

// ++
	printf("\n\n **** ++ -- ****\n");
	int a1 = 5, b1 = 10, val1 = 0;
	val1 = ++a1 * b1;
	printf("Il valore di '++a1 * b1' è: %d\n", val1);
	a1 = 5, b1 = 10, val1 = 0;
	val1 = a1++ * b1;
	printf("Il valore di 'a1++ * b1' è: %d\n", val1);
	//~ printf("Digita il cognome: ");
	//~ scanf("%s", lastname_test);
	//~ printf("Il cognome inserito è: %s\n", lastname_test);
	//~ (lastname_test[0] < 'M') ? printf("Squadra A-L") : printf("Squadra M-Z");


theend:
	
	return 0;
}
