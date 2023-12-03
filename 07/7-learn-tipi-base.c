#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h> // per l'utilizzo di toupper()
#include <stdbool.h> // permette 'bool variabile;' e poi 'variabile = false;' e 'variabile = true;' esattamente come se usassi _Bool che è stato inserito nel C99
#include <stdint.h> // permette di usare i tipi di questa libreria

#define TRUE 1
#define FALSE 0 // e a questo punto posso fare 'flag = TRUE'
#define BOOL int // è una macro dunque sostituisce 'BOOL' con int ogni volta ed è un trucco per creare tipi "BOOL"

// dichiarazioni
	int n, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;
	int ciclo, contatore, contatore2, quadrati, i, j, k, numero, valore, comando, somma, primi, divisore, dividendo, resto, cifra, input;
	int mese, mesi, giorni, giorno, rate, data, value, numeratore1, denominatore1, numeratore2, denominatore2;
	char ch, operazione;
	int myInt1, myInt2, myInt3, myInt4, numeratore, denominatore, azioni, valore, vocali, iniziale;
	short int unsigned testShortInt;
	long int testLongInt;
	long long int fattoriale;
	float investimento, valoreAzione, commissione; 
	float importo, bilancio, prestito, pagamento, interesse, calcoloFloat, numerofloat, numeroFloat1 = 0.f, numeroFloat2 = 0.f;
	double e, doubleI, doubleJ, doubleK;
	int hour, minute, arrival, departure_hour, departure_minute, arrival_hour, arrival_minute;
	char ampm;
	
int main(void) {

	//~ unsigned costante = 6553600000u ;
	//~ printf("\nDimensione int costante = 12345678945 ==> %d", sizeof(costante));
	//~ printf("\n\nDigita un unsigned hex: ");
	//~ unsigned unsignedX;
	//~ scanf("%x", &unsignedX);
	//~ printf("\nDimensione &unsignedX = %d", sizeof(unsignedX));
	//~ printf("\n&unsignedX in decimale = %d", unsignedX);
	//~ printf("\n\nDigita uno short int: ");
	//~ scanf("%hd", &testShortInt);
	//~ printf("\nDimensione &testShort = %d", sizeof(testShortInt));
	//~ printf("\n&testShort in hex = %x", testShortInt);

typedef int8_t bit8;
//~ typedef int16_t bit16;
//~ typedef int32_t bit32;

bit8 val8;
val8 = 5;
printf("\nVal8 = %d", val8);
val8 = 255; // ad esempio 300 causa overflow
printf("\nVal8 = %d", val8);

	//~ typedef int Int32;
	//~ typedef int iInt32;


goto salta_1;
	//~ double doubleNumber;
	//~ printf("\n\nDigita un doubleNumber: ");
	//~ scanf("%lf", &doubleNumber); // %l serve solo nella scan; no printf
	//~ printf("sizeof(doubleNumber) = %d", sizeof(doubleNumber));
	//~ printf("\nValue of doubleNumber = %f", doubleNumber);

	//~ long double LongDoubleNumber;
	//~ printf("\n\nDigita un LongDoubleNumber: ");
	//~ scanf("%Lf", &LongDoubleNumber);
	//~ printf("sizeof(LongDoubleNumber) = %d", sizeof(LongDoubleNumber));
	//~ printf("\nValue of LongDoubleNumber = %Lf", LongDoubleNumber);
salta_1: ;

	//~ printf("\n4/3 = %f", 4.f/3.f); // risultato corretto
	//~ printf("\n4/3 = %d", 4/3); // pitfall perché la divisione di due interi non può essere un float, ma un intero che è di conseguenza errato
	//~ printf("\n4/3 = %f", 4/3); // vedi sopra, questo funziona... ma il risultato è intero e perdo tutta la parte decimale

goto salta_2;
	int lettera;
	printf("\n\nDigita una lettera: ");
	scanf("%c", &lettera); // attenzione perché la scanf si lascia dietro lo \n che verrebbe letto dalla successiva getchar
	printf("La lettera digitata è %d", lettera);
	if (lettera >= 'A' && lettera <= 'Z')
		printf("\nTutto ok %d", 'A');
	else
		printf("\nMmmhhh %d", 'A');
	printf("\nAndiamo avanti");

	//~ for(i = 0; i <=255; i++)
		//~ printf("\n%c", i);
salta_2: ;

goto salta_3;
	//~ while (getchar() != '\n'); // questo serve a pulire lo \n della scanf precedente
	printf("\n\nDigita una stringa: ");
	//~ scanf("%c", &ch);
	ch = getchar();
	i = 0;
	while (ch != '\n') {
		i++;
		ch = getchar();
	}
	printf("Lunghezza della stringa: %d", i);

	//versione "short"
	printf("\n\nDigita una stringa: ");
	i = 0;
	while (getchar() != '\n')
		i++;
	printf("Lunghezza della stringa: %d", i);
salta_3: ;


goto salta_progetto7_2;
	// PROGETTO 7.2
	// Calcolo quadrati con check ogni 24
	printf("\n");
	printf("\nTavola dei quadrati con int.\nDigita il numero di iterazioni da visualizzare: ");
	scanf("%d", &quadrati); // arriva a 46340 poi sbarella
	for (i = 0; i <= quadrati; i++) {
		if (i % 24 == 0) {
			printf("\nPremi Enter per continuare");
			while (getchar() != '\n');
			//~ getchar(); // anche questo funziona
			//~ ch = getchar(); // anche questo funziona
			// però non prendono solo Enter, ma anche tutti i caratteri che eventualmente digito
		}
		printf("\nIterazione: %3d; quadrato: %7d", i, i * i);
	}
salta_progetto7_2: ;


goto salta_progetto7_3;
	// PROGETTO 7.3
	// Somma di numeri double
	printf("\n\n\nSomma di numeri double.\nDigita dei numeri double a piacere seguiti da Enter; uno '0' per finire: ");
	double contatoreDouble = 0;
	double numeroDouble;
	scanf("%lf", &numeroDouble);
	contatoreDouble += numeroDouble; // questo lo posso evitare se quello sotto lo sposto su di una riga
	while (numeroDouble != 0) {
		scanf("%lf", &numeroDouble);
		contatoreDouble += numeroDouble;
	}
	printf("Somma dei numeri digitati: %f\n\n", contatoreDouble);
salta_progetto7_3: ;


goto salta_progetto7_4;
	// PROGETTO 7.4
	// Traduzione da numero telefonico alfabetico
	printf("\n\n\nTraduzione da numero telefonico alfabetico a numerico.");
	printf("\nDigita un numero, ad esempio 1-800-COL-LECT: ");
	ch = 0;
		while (ch != '\n') {
			ch = getchar();
			if (ch >=65 && ch <= 90) {
				if (ch <= 67)		// fino a C
					printf("2");
				else if (ch <= 70)	// fino a F
					printf("3");
				else if (ch <= 73)	// fino a I
					printf("4");
				else if (ch <= 76)	// fino a L
					printf("5");
				else if (ch <= 79)	// fino a O
					printf("6");
				else if (ch <= 83)	// fino a S (4 lettere qui)
					printf("7");
				else if (ch <= 86)	// fino a V
					printf("8");
				else if (ch <= 90)	// fino a Z (4 lettere qui)
					printf("9");
			}
			else
				putchar(ch); // meglio questo
				//~ printf("%c", ch);
		}
salta_progetto7_4: ;

goto salta_progetto7_5;
	// PROGETTO 7.5
	// Scarabeo
	printf("\n\n\nScarabeo - calcolo valore di una parola.");
	printf("\nDigita una parola seguita da Invio: ");
	ch = 0;
		while (ch != '\n') { 			// si potrebbe fare: [while ((ch = getchar()) != '\n')]
			ch = toupper(getchar());	// e [ch = toupper(ch)]
										// e meglio ancora [switch (toupper (ch))]
			if (ch >=65 && ch <= 90) {
				if (ch == 68 || ch == 71)										// DG
					value += 2;
				else if (ch == 66 || ch == 67 || ch == 77 || ch == 80)			// BCMP
					value += 3;
				else if (ch == 70 || ch == 72 || ch == 86 || ch == 87 || ch == 89)	// FHVWY
					value += 4;
				else if (ch == 75)													// K
					value += 5;
				else if (ch == 74 || ch == 88)										// JX
					value += 8;
				else if (ch == 81 || ch == 90)										// QZ
					value += 10;
				else
					value += 1;
			}
		}
	printf("\nIl valore della parola è %d", value);
salta_progetto7_5: ;

goto salta_progetto7_6;
	// PROGETTO 7.6
	// Stampa sizeof... nel C89 meglio fare cast a UL e stamparlo
	// nel C99 il size_t può essere > di UL  meglio fare %zu senza cast
	 // pagina 157; Since the type of a sizeof expression may vary from one implementation to another, it's necessary in C89 to cast sizeof expressions to a known type before printing them. The sizes of the basic types are small numbers, so it's safe to cast them to int. (In general, however, it's best to cast sizeof expressions to unsigned long and print them using %lu.) In C99, we can avoid the cast by using the %zu conversion specification.

	short shortNumber;
	printf("\n\nsizeof(shortNumber) = %lu", (unsigned long) sizeof(shortNumber));
	int intNumber;
	printf("\nsizeof(intNumber) = %lu", (unsigned long) sizeof(intNumber));
	long longNumber;
	printf("\nsizeof(longNumber) = %lu", (unsigned long) sizeof(longNumber));
	long long longLongNumber;
	printf("\nsizeof(longLongNumber) = %lu", (unsigned long) sizeof(longLongNumber));
	
	float floatNumber;
	printf("\n\nsizeof(floatNumber) = %lu", (unsigned long) sizeof(floatNumber));
	double doubleNumber;
	printf("\nsizeof(doubleNumber) = %lu", (unsigned long) sizeof(doubleNumber));
	long double LongDoubleNumber;
	printf("\nsizeof(LongDoubleNumber) = %lu", (unsigned long) sizeof(LongDoubleNumber));
salta_progetto7_6: ;

goto salta_progetto7_7;
	// PROGETTO 7.7
	// Stampa risultato operazione +-*/ tra frazioni
	printf("\n\n************************************");
	printf("\n*** Operazioni +-*/ tra frazioni ***");
	printf("\n************************************");
	printf("\nDigita la prima frazione nel formato x/y: ");
	scanf(" %d / %d", &numeratore1, &denominatore1);
	printf("Scegli l'operazione da eseguire (+-*/): ");
	scanf(" %c", &operazione);
	printf("Digita la seconda frazione nel formato x/y: ");
	scanf(" %d / %d", &numeratore2, &denominatore2);

	while (operazione != '+' && operazione != '-' && operazione != '*' && operazione != '/') {
		printf("\nOperazione non ammessa. Digita nuovamente l'operatore: ");
		scanf(" %c", &operazione);
	}
	switch(operazione) {
		case '+' : numeratore = numeratore1 * denominatore2 + numeratore2 * denominatore1; denominatore = denominatore1 * denominatore2; break;
		case '-' : numeratore = numeratore1 * denominatore2 - numeratore2 * denominatore1; denominatore = denominatore1 * denominatore2; break;
		case '*' : numeratore = numeratore1 * numeratore2; denominatore = denominatore1 * denominatore2; break;
		case '/' : numeratore = numeratore1 * denominatore2; denominatore = denominatore1 * numeratore2; break;
	}
	// riduzione ai minimi termini
	myInt1 = numeratore;
	myInt2 = denominatore;
	do {
		resto = myInt1 % myInt2;
		printf("\nmyInt1 = %6d; myInt2 = %6d; resto = %6d", myInt1, myInt2, resto);
		myInt1 = myInt2;
		myInt2 = resto;
	}
	while(myInt2 > 0);
	printf("\nMCD = %d", myInt1);
	printf("\nFrazione originale ricavata dall'operazione: %d/%d; frazione ridotta: %d/%d", numeratore, denominatore, numeratore / myInt1, denominatore / myInt1);
	
	//~ printf("\nIl risultato dell'operazione è %d/%d", numeratore, denominatore);
salta_progetto7_7: ;

goto salta_voli;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 7.8
	// Calcolo dell'ora del volo più prossimo con formato 12 ore
	printf("\n\nDigita l'orario di partenza preferito nel formato HH:MM AM/PM a 12 ore: ");
	scanf("%d:%d %c", &hour, &minute, &ampm);
	ampm = toupper(ampm);
	//~ Se sono le 12AM o 12PM hour è settata a 0; poi se è PM si aggiunge 12 per avere l'ora reale
	hour = hour == 12 ? 0 : hour;
	hour = (ampm == 'P' ? hour + 12 : hour);
	
	int departure_time = 60 * hour + minute;
	int departure;
	int departure1 =  8 * 60 +  0, arrival1 = 10 * 60 + 16;
	int departure2 =  9 * 60 + 43, arrival2 = 11 * 60 + 52;
	int departure3 = 11 * 60 + 19, arrival3 = 13 * 60 + 31;
	int departure4 = 12 * 60 + 47, arrival4 = 15 * 60 +  0;
	int departure5 = 14 * 60 +  0, arrival5 = 16 * 60 +  8;
	int departure6 = 15 * 60 + 45, arrival6 = 17 * 60 + 55;
	int departure7 = 19 * 60 +  0, arrival7 = 21 * 60 + 20;
	int departure8 = 21 * 60 + 45, arrival8 = 23 * 60 + 58;

	//~ printf("\nDebug - L'orario inserito in format o24 ore è: %d:%d", hour, minute);
	//~ printf("\nDebug - Departure_Time è: %d", departure_time);
	//~ if (departure_time <= departure1) {
		//~ departure = departure1;
		//~ }
	if (departure_time <= (departure1 + departure2) /2) {
		departure = departure1;
		arrival = arrival1;
		}
	else if (departure_time <= (departure2 + departure3) /2) {
		departure = departure2;
		arrival = arrival2;
		}
	else if (departure_time <= (departure3 + departure4) /2) {
		departure = departure3;
		arrival = arrival3;
		}
	else if (departure_time <= (departure4 + departure5) /2) {
		departure = departure4;
		arrival = arrival4;
		}
	else if (departure_time <= (departure5 + departure6) /2) {
		departure = departure5;
		arrival = arrival5;
		}
	else if (departure_time <= (departure6 + departure7) /2) {
		departure = departure6;
		arrival = arrival6;
		}
	else if (departure_time <= (departure7 + departure8) /2) {
		departure = departure7;
		arrival = arrival7;
		}
	else {
		departure = departure8;
		arrival = arrival8;
	}

	departure_hour = departure / 60;
	departure_minute = departure % 60;
	arrival_hour = arrival / 60;
	arrival_minute = arrival % 60;

	ampm = departure_hour <= 11 ? 'A' : 'P';
	departure_hour = departure_hour > 12 ? departure_hour - 12 : departure_hour;
	printf("\nL'orario di partenza più vicino è: %.2d:%.2d %cM", departure_hour, departure_minute, ampm);
	ampm = arrival_hour <= 11 ? 'A' : 'P';
	arrival_hour = arrival_hour > 12 ? arrival_hour - 12 : arrival_hour;
	printf(" con arrivo previsto alle: %.2d:%.2d %cM", arrival_hour, arrival_minute, ampm);
salta_voli: ;

goto salta_conversione12_24;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 7.9
	// Conversione orario da 12 a 24 ore
	printf("\n\nDigita l'orario da convertire dal formato a 12 ore HH:MM AM/PM a quello a 24 ore: ");
	scanf("%d:%d %c", &hour, &minute, &ampm);
	ampm = toupper(ampm);
	//~ Se sono le 12AM o 12PM hour è settata a 0; poi se è PM si aggiunge 12 per avere l'ora reale
	hour = hour == 12 ? 0 : hour;
	hour = (ampm == 'P' ? hour + 12 : hour);
	printf("\nOrario convertito: %.2d:%.2d", hour, minute);
salta_conversione12_24: ;

goto salta_contaVocali;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 7.10
	// Conta il numero di vocali in una frase
	printf("\n\nDigita una frase e ne conterò le vocali: ");
	while ((ch = getchar()) != '\n') {		// parentesi suggerita dal compilatore
		//~ putchar(ch);
		ch = tolower(ch);
		switch (ch) {
			case 'a' : case 'e' : case 'i' : case 'o' : case 'u' : {
				vocali++;
				break;
			};
		}
	}
	printf("Numero di vocali nella frase digitata: %d", vocali);
salta_contaVocali: ;

goto salta_cognomeNome;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 7.11
	// Stampa cognome e iniziale del nome
	printf("\n\nDigita nome cognome: ");
	while ((ch = getchar()) == ' ')	;		// scarto gli spazi prima della iniziale
	iniziale = ch;
	printf("*** Debug - L'iniziale è '%c'\n", iniziale);
	while (getchar() != ' ') ;				// scarto le altre lettere del nome
	while ((ch = getchar()) == ' ')	;		// scarto gli spazi prima del cognome
	putchar(ch);
	while ((ch = getchar()) != '\n')
		putchar(ch);
	printf(", %c.", iniziale);
salta_cognomeNome: ;

goto salta_cognomeNomeBis;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 7.11 bis
	// Stampa cognome e iniziale del nome, un ciclo while in meno
    printf("\n\nEnter a first and last name: ");
    while ((ch = getchar()) == ' '); //Skip initial white space until first char
    iniziale = ch;
    while ((ch = getchar()) != ' '); //Skip chars after first char until whitespace
    while ((ch = getchar()) != '\n') {
        if (ch != ' ')
            putchar(ch);
    }
    printf(", %c.", iniziale);
salta_cognomeNomeBis: ;

goto salta_cognomeNomeTer;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 7.11 ter
	// Stampa cognome e iniziale del nome con scanf
    printf("\n\nEnter a first and last name: ");
    scanf(" %c", &iniziale);
    while ((ch = getchar()) != ' ');	// salto i caratteri del nome fino allo spazio successivo
    scanf(" "); 						// salta gli spazi prima del nome
    while ((ch = getchar()) != '\n')
		putchar(ch);
    printf(", %c.", iniziale);
salta_cognomeNomeTer: ;

goto salta_calcoloEspressione;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 7.12
	// Calcola una espressione tipo 3+2.5*2/1.5 con do-while
	printf("\n\nDigita un'espressione tipo '3+2.5*2/1.5': ");
	scanf("%f", &numeroFloat1);
	operazione = getchar();
	do {
		scanf("%f", &numeroFloat2);
		//~ printf("\n *** Debug - numeroFloat1 = %f", numeroFloat1);
		//~ printf("\n *** Debug - numeroFloat2 = %f", numeroFloat2);
		//~ printf("\n *** Debug - operazione = %c", operazione);
		switch (operazione) {
			case '+' :
				numeroFloat1 += numeroFloat2;
				//~ printf("\n *** Debug - operazione +");
				break;
			case '-' :
				numeroFloat1 -= numeroFloat2;
				//~ printf("\n *** Debug - operazione -");
				break;
			case '*' :
				numeroFloat1 *= numeroFloat2;
				//~ printf("\n *** Debug - operazione *");
				break;
			case '/' :
				numeroFloat1 /= numeroFloat2;
				//~ printf("\n *** Debug - operazione /");
				break;
			case ' ' : break;
		}
		operazione = getchar();
	}
	while (operazione != '\n') ;
	printf("\nIl risultato è %f", numeroFloat1);
salta_calcoloEspressione: ;

goto salta_calcoloEspressioneBis;
	//~ // +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 7.12 bis
	// Calcola una espressione tipo 3+2.5*2/1.5 con while
	printf("\n\nDigita un'espressione tipo '3+2.5*2/1.5': ");
	i = 1;
	scanf("%f", &numeroFloat1);
	while ((operazione = getchar()) != '\n') {
		scanf("%f", &numeroFloat2);
		//~ printf("\n *** Debug - operazione = %c", operazione);
		//~ printf("\n *** Debug - interazione #%d", i++);
		//~ printf("\n *** Debug - numeroFloat1 = %f", numeroFloat1);
		//~ printf("\n *** Debug - numeroFloat2 = %f\n", numeroFloat2);
		switch (operazione) {
			case '+' :
				numeroFloat1 += numeroFloat2;
				//~ printf("\n *** Debug - operazione +");
				break;
			case '-' :
				numeroFloat1 -= numeroFloat2;
				//~ printf("\n *** Debug - operazione -");
				break;
			case '*' :
				numeroFloat1 *= numeroFloat2;
				//~ printf("\n *** Debug - operazione *");
				break;
			case '/' :
				numeroFloat1 /= numeroFloat2;
				//~ printf("\n *** Debug - operazione /");
				break;
			case ' ' : break;
		}
	}
	while (operazione != '\n') ;
	printf("\nIl risultato è %f", numeroFloat1);
salta_calcoloEspressioneBis: ;

goto salta_lunghezzaMediaParola;
	//~ // +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 7.13
	// Calcola la lunghezza media delle parole in una frase
	printf("\n\nDigita una frase: ");
	while ((ch = getchar()) != '\n') {
		if (ch == ' ') {
			contatore2++;
		}
		else {				// invece di else { e } si poteva usare un continue	dopo contatore2++
			contatore++;	
		}
	}
	contatore2++;
	printf("\nLa lunghezza totale della frase è di %d lettere", contatore);
	printf("\nLa lunghezza media delle parole è di %.2f lettere", (float) contatore / contatore2);
salta_lunghezzaMediaParola: ;

goto salta_squareRootNewton;
	//~ // +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 7.14
	// Calcolo radice quadrata con metodo Newton
	// https://web.ma.utexas.edu/users/m408n/CurrentWeb/LM4-8-4.php
	// a dire il vero questo metodo è un po' diverso da quello riportato nel libro, che è il metodo della media
	// prima il ciclo for e poi ciclo do while
	double dx, dy, dxy, dyxy;
	printf("\n\nDigita un numero e ne calcolerò la radice quadrata: ");
	scanf("%lf", &dx);
	printf("Digita una stima della radice quadrata: ");
	scanf("%lf", &dy);
	while (getchar() != '\n');
	printf("\nx\ty -----------------| x/y ------------------| avg y|x/y ------------|");
	for (i = 1;; i++, dy = dyxy) {
		dxy = dx / dy;
		dyxy = ((dy + dxy) / 2);
		printf("\n%.0f\t%20.10f\t%20.10f\t%20.10f", dx, dy, dxy, dyxy);
		if (i % 24 == 0) {
			printf("\nPremi Enter per continuare");
			while (getchar() != '\n');
			printf("x\ty -----------------| x/y ------------------| avg y|x/y ------------|");
		}
		if ((fabs(dy - dyxy)) < 0.0000001 * dy)
			break;
	}
	//~ i = 1;
	//~ do {
		//~ i++;
		//~ dxy = dx / dy;
		//~ dyxy = ((dy + dxy) / 2);
		//~ printf("\n%.0f\t%.10f\t%.10f\t%.10f", dx, dy, dxy, dyxy);
		//~ if (i % 24 == 0) {
			//~ printf("\nPremi Enter per continuare");
			//~ printf("\nx\t\ty\t\tx/y\t\tavg y|x/y");
			//~ while (getchar() != '\n');
		//~ }
		//~ if ((fabs(dy - dyxy)) < 0.00001 * dy)
			//~ break;
		//~ dy = dyxy;
	//~ }
	//~ while (1);
	printf("\nControprova: %f^2 = %f", dyxy, dx);
salta_squareRootNewton: ;

//~ goto salta_fattoriale;
	//~ // +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 7.15
	// Calcolo fattoriale
		printf("\n\nCalcolo fattoriale Short. Digita un intero: ");
		scanf("%d", &valore);
		i = 1;
		for(short fattorialeShort = 1; i <= valore; i++) {
			fattorialeShort *= i;
			printf("\nIterazione # %2d, fattoriale = %55d", i, fattorialeShort);
		}
		printf("\n\nCalcolo fattoriale Int.");
		i = 1;
		for(int fattorialeInt = 1; i <= valore; i++) {
			fattorialeInt *= i;
			printf("\nIterazione # %2d, fattoriale = %55d", i, fattorialeInt);
		}
		printf("\n\nCalcolo fattoriale Long.");
		i = 1;
		for(long fattorialeLong = 1;  i <= valore; i++) {
			fattorialeLong *= i;
			printf("\nIterazione # %2d, fattoriale = %55ld", i, fattorialeLong);
		}
		printf("\n\nCalcolo fattoriale Long Long.");
		i = 1;
		for(long long fattorialeLongLong = 1; i <= valore; i++) {
			fattorialeLongLong *= i;
			printf("\nIterazione # %2d, fattoriale = %55lld", i, fattorialeLongLong);
		}
		printf("\n\nCalcolo fattoriale Float.");
		i = 1;
		for(float fattorialeFloat = 1.0f; i <= valore; i++) {
			fattorialeFloat *= i;
			printf("\nIterazione # %2d, fattoriale = %55f", i, fattorialeFloat);
		}
		printf("\n\nCalcolo fattoriale Double.");
		i = 1;
		for(double fattorialeDouble = 1; i <= valore; i++) {
			fattorialeDouble *= i;
			printf("\nIterazione # %2d, fattoriale = %55lf", i, fattorialeDouble);
		}
		printf("\n\nCalcolo fattoriale Long Double.");
		i = 1;
		for(long double fattorialeLongDouble = 1; i <= valore; i++) {
			fattorialeLongDouble *= i;
			printf("\nIterazione # %2d, fattoriale = %55Lf", i, fattorialeLongDouble);
		}
		printf("\nPremi Enter per continuare");
salta_fattoriale: ;

	return 0;
}
