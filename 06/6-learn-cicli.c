#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h> // permette 'bool variabile;' e poi 'variabile = false;' e 'variabile = true;' esattamente come se usassi _Bool che è stato inserito nel C99

#define TRUE 1
#define FALSE 0 // e a questo punto posso fare 'flag = TRUE'
#define BOOL int // è una macro dunque sostituisce 'BOOL' con int ogni volta ed è un trucco per creare tipi "BOOL"

// dichiarazioni
	int n, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;
	int ciclo, contatore, contatore2, quadrati, i, j, k, numero, valore, comando, somma, primi, divisore, dividendo, resto, cifra, input;
	int mese, mesi, giorni, giorno, rate, data;
	int myInt1, myInt2, myInt3, myInt4, numeratore, denominatore, azioni, valore;
	short int unsigned testShortInt;
	long int testLongInt;
	long long int fattoriale;
	float investimento, valoreAzione, commissione; 
	float importo, bilancio, prestito, pagamento, interesse, calcoloFloat, numerofloat;
	double e;

int main(void) {

	printf("\nsizeof short int = %d", sizeof(testShortInt));
	printf("\nsizeof int = %d", sizeof(n));
	printf("\nsizeof long int = %d", sizeof(testLongInt));
	printf("\nsizeof long long int = %d", sizeof(fattoriale));
	testShortInt = 65535u;
	printf("\nn = %d", testShortInt);


goto salta_while;
	// WHILE: prima viene eseguita espressione di controllo e poi corpo; corpo potrebbe non essere mai eseguito
	ciclo = 10, contatore = 1;
	while(ciclo > 0) {
		contatore *= 2;
		--ciclo;
		printf("\nIterazione while v1: %d; valore attuale del contatore: %d", 10 - ciclo, contatore);
	}

	printf("\n");

	ciclo = 10, contatore = 2;
	while(ciclo > 0) {
		contatore *= 2;
		printf("\nIterazione while v2: %d; valore attuale del contatore: %d", 10 - --ciclo, contatore);
	}

	printf("\n");

	printf("\nTavola dei quadrati.\nDigita il numero di iterazioni da visualizzare: ");
	scanf("%d", &quadrati);
	i = 0;
	while(i <= quadrati) {
		printf("\nIterazione: %3d; quadrato: %7d", i, i * i);
		i++;
	}
	
	printf("\n\nSomma di numeri.\nDigita dei numeri interi a piacere seguiti da Enter; uno '0' per finire: ");
	contatore = 0;
	scanf("%d", &numero);
	while(numero != 0) {
		scanf("%d", &numero);
		contatore += numero;
	}
	printf("Somma dei numeri digitati: %d\n\n", contatore);
salta_while: ;

goto salta_do_while;
	// DO WHILE: prima viene eseguito corpo e poi espressione di controllo; corpo sempre eseguito almeno una volta
	ciclo = 10, contatore = 1;
	do {
		contatore *= 2;
		--ciclo;
		printf("\nIterazione do-while: %2d; valore attuale del contatore: %5d", 10 - ciclo, contatore);
	}
	while(ciclo > 0);

	printf("\n\nCalcolo del numero di cifre: digita un numero: ");
	scanf("%d", &numero);
	printf("Numero digitato: %d", numero);
	contatore = 0;
	do {
		numero = numero / 10; // meglio sarebbe n /= 10
		printf("\nIterazione do-while: %2d", ++contatore);
	}
	while(numero > 0);
	printf("\nNumero di cifre del numero digitato: %d", contatore);
salta_do_while: ;
	
goto salta_for;
	// FOR

	for (i = 1; i <= 10; i++)
		printf("\nIterazione for '(i = 1; i <= 10; i++)': %2d; ", i);
	printf("\n");
	for (i = 1; i < 10; i++)
		printf("\nIterazione for '(i = 1; i < 10; i++)': %2d; ", i);
	printf("\n");
	i = 7;
	for (; i < 10; i++)
		printf("\nIterazione for '(; i < 10; i++)': %2d; ", i);

	printf("\n");
	for (int forVar = 1; forVar <= 10; forVar++) // int definito qui non visibile fuori dal ciclo
		printf("\nIterazione for '(int forVar = 1; forVar <= 10; forVar++)': %2d; ", forVar);

	printf("\n");
	for (numero = 1, i = 1; i <= 10; i++)
		printf("\nIterazione for '(numero = 1, i = 1; i <= 10; i++)': %5d %2d; ", numero += numero, i);

	printf("\n");
	printf("\nTavola dei quadrati v2 con short.\nDigita il numero di iterazioni da visualizzare: ");
	scanf("%d", &quadrati); // arriva a 32766 poi sbarella
	for (short is = 0; is <= quadrati; is++)
		printf("\nIterazione: %3d; quadrato: %7d", is, is * is);

	printf("\n");
	printf("\nTavola dei quadrati v2a con int.\nDigita il numero di iterazioni da visualizzare: ");
	scanf("%d", &quadrati); // arriva a 46340 poi sbarella
	for (i = 0; i <= quadrati; i++)
		printf("\nIterazione: %3d; quadrato: %7d", i, i * i);

	printf("\n");
	printf("\nTavola dei quadrati v2b con long.\nDigita il numero di iterazioni da visualizzare: ");
	scanf("%d", &quadrati); // arriva a 46340 poi sbarella
	for (long il = 0; il <= quadrati; il++)
		printf("\nIterazione: %3ld; quadrato: %7ld", il, il * il);

	//~ printf("\n");
	//~ printf("\nTavola dei quadrati v3.\nDigita il numero di iterazioni da visualizzare: ");
	//~ scanf("%d", &n);
	//~ for (int square = 1, odd = 3, i = 1; i <= n; odd += 2) {
		//~ printf("\nIterazione: %3d; quadrato: %7d", i, square);
		//~ ++i;
		//~ square += odd;
	//~ }
salta_for: ;

goto salta_primi_1;
	// *********************************************************************
	// *********************************************************************
	// NUMERI PRIMI // break va immediatamente subito dopo la fine del ciclo
	// *********************************************************************
	// *********************************************************************

	// ******** Verifico se un numero è primo ********
	printf("\n\nVerifico se un numero è primo. Digita il numero da valutare: ");
	scanf("%d", &dividendo);
	for (divisore = 2; divisore < dividendo; divisore++) {
		if (dividendo % divisore == 0) {
			break;	// ho trovato un divisore dunque il numero non è primo
		}
	}
	printf("\nDivisore = %d", divisore);
	if (divisore < dividendo) {
		printf("\n%d è divisibile per %d", dividendo, divisore);
	}
	else // viene eseguito perché divisore++ viene eseguito alla fine del ciclo e incrementato da div++
		printf("\n%d è primo", dividendo);

	// con ******* Come sopra, ma  *******
	// con ******* con SQUARE ROOT *******
	printf("\n\nVerifico se un numero è primo con algoritmo ottimizzato (SQRT)");
	//~ for (divisore = 2; divisore * divisore -1 < dividendo; divisore++) {		// mia idea
	for (divisore = 2; divisore * divisore <= dividendo; divisore++) {				// corretto
		printf("\nIterazione # %3d; divisore = %d; dividendo = %d", divisore -1, divisore, dividendo);
		if (dividendo % divisore == 0) {
			break;	// ho trovato un divisore dunque il numero non è primo
		}
	}
	//~ if (divisore < dividendo && dividendo % divisore == 0) {
	if (divisore * divisore <= dividendo) {
		printf("; %d è divisibile per %d!", dividendo, divisore);
	}
	else
		printf("\n%d è primo", dividendo);
salta_primi_1: ;

goto salta_primi_2;

	//~ // NUMERI PRIMI. Il ciclo esterno passa i numeri; l'interno verifica tutti i numeri da 2 al numero correntemente in essere nel ciclo esterno.
	printf("\n\nCalcolo dei numeri primi da 1 a x. Digita il numero x da valutare: ");
	scanf("%d", &dividendo);
	int dividendoInterno = 0;
	primi = 0;
	for (int contatore = 2; contatore <= dividendo; contatore ++) {
		for (dividendoInterno = contatore, divisore = 2; divisore < dividendoInterno; divisore++) {
			printf("\ndivisore = %d; contatore = %d", divisore, dividendoInterno);
			if (dividendoInterno % divisore == 0) {
				break;
			}
		}
		if (divisore == dividendoInterno) {
			if (divisore == 2) {
				printf("\ndivisore = %d; contatore = %d", divisore, dividendoInterno);
			}
			printf("; %d è primo.", divisore);
			primi++;
		}
	}
	printf("\nNumeri primi totali nell'intervallo da 2 a %d: %d", dividendo, primi);


	// NUMERI PRIMI come sopra ma con un for "ottimizzato"; il controllo del modulo fatto direttamente nell'espressione 2 del for
	printf("\n");
	printf("\nCalcolo dei numeri primi da 1 a x v2.");
	//~ scanf("%d", &numero);
	primi = 0;
	for (int contatore = 2; contatore <= dividendo; contatore ++) { // passa in rassegna i numeri da 2 a quello digitato dall'utente
		for (dividendoInterno = contatore, divisore = 2; divisore <= contatore && contatore % divisore != 0; divisore++)
			/* ISTRUZIONE VUOTA*/;
		if (divisore == contatore) {
		//~ printf("\%d,", contatore);
		primi++;
		}
	}
	printf("\nNumeri primi totali nell'intervallo da 2 a %d: %d", dividendo, primi);


	// NUMERI PRIMI come sopra ma con un for "più ottimizzato"; il controllo del modulo fatto direttamente nell'espressione 2 del for. NUOVO: non controlla tutti i numeri fino al numero, ma solo fino alla sua radice :-)
	printf("\n");
	printf("\nCalcolo dei numeri primi da 1 a x v3; usa SQRT :-).");
	primi = 0;
	divisore = 2;
	for (int contatore = 2; contatore <= dividendo; contatore++) { // passa in rassegna i numeri da 2 a quello digitato dall'utente
		printf("\nIterazione esterna # %3d; divisore = %d; contatore = %d, dividendo = %d", contatore -1, divisore, contatore, dividendo);
		for (dividendoInterno = contatore, divisore = 2, contatore2 = 1; divisore * divisore < dividendoInterno && dividendoInterno % divisore != 0; divisore++) { // finché il numero in esame è inferiore a quello del ciclo esterno e c'è un resto, non è divisibile e va avanti a contare
		printf("\n\tIterazione interna # %3d; divisore = %d; dividendo = %d", contatore2++, divisore, dividendo);
		}	/* ISTRUZIONE VUOTA*/
		if (divisore * divisore <= dividendoInterno) { // se non c'è un resto arrivo qui dunque il numero ha trovato un divisore e non è primo
		//~ printf("\%d,", contatore);
			printf("\n\tDivisore %d trovato per dividendo %d\n", divisore, contatore);
		}
		else {
			printf("\n\t==> Numero primo trovato %d!\n", contatore);
			primi++;
		}
			
	}
	printf("\nNumeri primi totali nell'intervallo da 2 a %d: %d", dividendo, primi);
salta_primi_2: ;

goto salta_vario;
	// ****************************
	// Vario
	printf("\n\nSomma di numeri.\nDigita dei numeri interi a piacere seguiti da Enter; uno '0' per finire: ");
	for (;;) {
		printf("\nDigita un numero intero: ");
		scanf("%d", &numero);
		printf("Il quadrato di %d è %d\n", numero, numero * numero);
		if (numero == 0) {
			break;
		}
		contatore += numero;
	}
	printf("\nLa somma dei numeri digitati è: %d", contatore);

	// CONTINUE va immediatamente prima della fine del ciclo,
	// BREAK va immediatamente subito dopo la fine del ciclo
	printf("\n\nSomma di numeri pari; i dispari saranno ignorati. Digita uno '0' per finire.\n");
	for (contatore = 0;;) {
		printf("Digita un numero intero pari: ");
		scanf("%d", &numero);
		
		if (numero % 2 != 0) {
			continue;
		}
		contatore += numero;
		if (numero == 0) {
			break;
		}
	}
	printf("\nLa somma dei numeri digitati è: %d", contatore);
salta_vario: ;

goto salta_bilancio;
	// GESTIONE BILANCIO
	printf("\n\n*** ACME programma gestione bilancio ***\nComandi: 0-Azzeramento, 1-Accredito, 2-Addebito, 3-Bilancio, 4-Esci");
	printf("\n\nBilancio inziale: %.2f €", bilancio);
	for (;;) {
		printf("\nInserire comando: ");
		scanf("%d", &comando);
		switch(comando) {
			case 0 :
				bilancio = 0.0f;
				break;
			case 1 :
				printf("Digita l'importo da accreditare: ");
				scanf("%f", &importo);
				bilancio += importo;
				break;
			case 2 :
				printf("Digita l'importo da addebitare: ");
				scanf("%f", &importo);
				bilancio -= importo;
				break;
			case 3 :
				printf("Il bilancio attuale è pari ad € %.2f\n", bilancio);
				break;
			case 4 :
				printf("Uscita dal programma");
				return 0;
			default :
				printf("Comando non valido");
				break;
		}
	}
salta_bilancio: ;

goto salta_esercizi;
	i = 1;
	while (i <= 128) {
		printf("\ni = %d", i);
		i *= 2;
	}

	printf("\n");

	i = 9384;
	do {
		printf("\ni = %d", i);
		i /= 10;
	} while (i > 0);

	printf("\n");
	
	for (i = 5, j = i - 1; /*i > 0,*/ j > 0; --i, j = i - 1) // la parte commentata non viene presa in considerazione nemmeno se fosse non commentata, 
		printf("\ni = %d, j = %d", i, j);

	printf("\n");
	i = 5;
	printf("\ni = %d, j = %d", --i, j = i - 1);
	printf("\ni++ = %d", i++);
	printf("\ni = %d", i);
	printf("\n++i = %d", ++i);
	
	
	printf("\n");
	for (i = 1; i <= 128; i *= 2)
		printf("\ni = %d", i);
		
	printf("\n");
	for (i = 9384; i > 0; i /= 10)
		printf("\ni = %d", i);
	
	printf("\n");
	for (i = 10, contatore = 0; i >= 1; i /= 2) {
		printf("\ni = %d; contatore = %d", i++, contatore);
		contatore++;
		if (contatore == 10) {
			break;
		}
	}
	
	printf("\n");
	i = 10, contatore = 0;
	while (i >= 1) {
		printf("\ni = %d; contatore = %d", i++, contatore);
		i /= 2;
		contatore++;
		if (contatore == 10) {
			break;
		}
	}

	printf("\n\nSomma numeri pari");
	int somma_pari = 0;
	int somma_dispari = 0;
	for (i = 0; i <= 10; i++) {
		printf("\ni = %d; somma pari interna = %2d; ", i, somma_pari);
		if (i % 2) {
			somma_dispari += i;
			continue; // se c'è un resto è un numero dispari ed esce dal ciclo
		}
		somma_pari += i;
		printf("somma pari esterna = %2d", somma_pari);
	}
	printf("\nLa somma dei numeri pari fino a 10 è: %d", somma_pari);
	printf("\nLa somma dei numeri dispari fino a 10 è: %d", somma_dispari);

	printf("\n\n");
	printf("valore 1 %% 2 = %d", 1 % 2);
	int x;
	x = 7 % 2;
	printf("\nResto = %d", x);
	
	// Riscrivere questo ciclo in modo che il corpo sia vuoto
	for (myInt1 = 0, myInt2 = 3; myInt2 > 0; myInt1++) {
		myInt2 /=2;
		printf("\nValore attuale di myInt1 = %d e myInt2 = %d", myInt1, myInt2);
	}
	printf("\nValore finale di myInt1 = %d e myInt2 = %d\n", myInt1, myInt2);

	for (myInt1 = 0, myInt2 = 3; myInt2 > 0; myInt1++, myInt2 /=2)
		printf("\nValore attuale di myInt1 = %d e myInt2 = %d", myInt1, myInt2);
		;
	printf("\nValore finale di myInt1 = %d e myInt2 = %d", myInt1, myInt2);
salta_esercizi: ;


//~ ++++++++++++++++++++++++++++++
//~ + PROGETTI DI PROGRAMMAZIONE +
//~ ++++++++++++++++++++++++++++++


goto salta_esercizio1;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 6.1
	// Utente digita numeri, quando digita 0 viene visualizzato il numero più grande

	printf("\n\nProgramma che memorizza il numero più grande tra quelli inseriti.");
	printf("\nDigita dei numeri float; digita 0 per visualizzare il più grande.\n");

	float numerof = 0, maxfloat = 0;
		printf("\nDigita un numero: ");
		scanf("%f", &numerof);
		maxfloat = numerof;
	for (;;) {
		printf("Digita un numero: ");
		scanf("%f", &numerof);
		if (numerof > maxfloat) {
			maxfloat = numerof;
		}
		if (numerof <= 0) {
			break;
		}
	}
	printf ("\nIl numero più grande inserito è %.2f", maxfloat);
salta_esercizio1: ;

//~ goto salta_esercizio2;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 6.2
	// Massimo Comun Divisore di due numeri
	// https://www.mat.uniroma2.it/~tovena/MCD.pdf
	printf("\n\nProgramma che calcola il Massimo Comun Divisore tra due interi con while.");
	printf("\nDigita il primo numero intero: ");
	scanf("%d", &myInt1);
	printf("Digita il secondo numero intero: ");
	scanf("%d", &myInt2);
	while(myInt2 > 0) {
		resto = myInt1 % myInt2;
		printf("\nmyInt1 = %6d; myInt2 = %6d; resto = %6d", myInt1, myInt2, resto);
		myInt1 = myInt2;
		myInt2 = resto;
	}
	printf("\nMCD = %d", myInt1);

	printf("\n\nProgramma che calcola il Massimo Comun Divisore tra due interi con do while.");
	printf("\nDigita il primo numero intero: ");
	scanf("%d", &myInt1);
	printf("Digita il secondo numero intero: ");
	scanf("%d", &myInt2);
	do {
		resto = myInt1 % myInt2;
		printf("\nmyInt1 = %6d; myInt2 = %6d; resto = %6d", myInt1, myInt2, resto);
		myInt1 = myInt2;
		myInt2 = resto;
	}
	while(myInt2 > 0);
	printf("\nMCD = %d", myInt1);
salta_esercizio2: ;

goto salta_esercizio3;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 6.3
	// Riduzione frazioni ai minimi termini
	// Divido numeratore e denominatore per MCD

	printf("\n\nProgramma che riduce una frazione ai minimi termini.");
	printf("\nDigita la frazione nel formato a/b: ");
	scanf("%d / %d", &numeratore, &denominatore);
	myInt1 = numeratore, myInt2 = denominatore;
	do {
		resto = myInt1 % myInt2;
		printf("\nmyInt1 = %6d; myInt2 = %6d; resto = %6d", myInt1, myInt2, resto);
		myInt1 = myInt2;
		myInt2 = resto;
	}
	while(myInt2 > 0);
	printf("\nMCD = %d", myInt1);
	printf("\nFrazione originale: %d/%d; frazione ridotta: %d/%d", numeratore, denominatore, numeratore / myInt1, denominatore / myInt1);
salta_esercizio3: ;

goto salta_esercizio4;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 6.4
	// Calcolo percentuale broker

	for (;;) {
		printf("\n\nDigita il valore dell'azione o '0' per uscire: ");
		scanf("%f", &valoreAzione);
			if (valoreAzione == 0.0f)
				break;
		printf("Digita il numero di azioni transate: ");
		scanf("%d", &azioni);
		investimento = valoreAzione * azioni;
		if (investimento < 2500.00f) {
			commissione = 30.0f + investimento * 1.7f /100;
			}
		else if (investimento < 6250.00f) {
			commissione = 56.0f + investimento * 0.66f /100;
			}
		else if (investimento < 20000.00f) {
			commissione = 76.0f + investimento * 0.34f /100;
			}
		else if (investimento < 50000.00f) {
			commissione = 100.0f + investimento * 0.22f /100;
			}
		else if (investimento < 500000.00f) {
			commissione = 155.0f + investimento * 0.11f /100;
			}
		else {
			commissione = 255.0f + investimento * 0.09f /100;
			}
		printf(" Commissione = $ %.2f\n", commissione);
		//~ commissione = commissione < 39.00f ? 39.00f : commissione;
		printf(" Broker A: Investimento = $ %.2f; commissione = $ %10.2f", investimento, commissione);
		if (azioni < 2000) {
			commissione = 33.0f + investimento * 3.00f /100;
			}
		else {
			commissione = 33.0f + investimento * 2.00f /100;
			}
		printf("\n Broker B: Investimento = $ %.2f; commissione = $ %10.2f", investimento, commissione);
	}
salta_esercizio4: ;

goto salta_esercizio5;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 6.5
	// Inversione cifre
	printf("\n\nDigita un intero e ne invertirò le cifre: ");
	scanf("%d", &myInt1);
	while (myInt1 > 0) {
		cifra = myInt1 % 10;
		myInt1 /=10;
		printf("%d", cifra);
	}
salta_esercizio5: ;

goto salta_esercizio6;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 6.6
	// Stampa dei quadrati pari fino a un certo numero
	printf("\n\nDigita un intero per visualizzare i quadrati pari fino a quel numero: ");
	scanf("%d", &myInt1);
	contatore = 2;
	while (contatore * contatore <= myInt1) {
		if (contatore * contatore % 2 == 0) // per i quadrati pari basta che la base sia pari
			printf("\nQuadrato di %2d = %5d", contatore, contatore * contatore);
		contatore +=2;
	}
salta_esercizio6: ;

goto salta_esercizio7;
	// il quadrato di n è la somma dei primi n numeri dispari; due versioni :-)
	// ad esempio il quadrato di 8 è la somma dei primi 8 numeri dispari
	printf("\n\nTavola dei quadrati v3. Il quadrato di n è la somma dei primi n numeri dispari.");
	printf("\nDigita il numero del quale calcolare il quadrato e i precedenti: ");
	scanf("%d", &input);
	n = input;
	for (int i = 0, dispari = -1, quadrato = 0; i < n; i++, dispari += 2, printf("\nQuadrato di %3d = %5d", i, quadrato += dispari))

	n = input;
	for (int i = 1, dispari = 1, quadrato = 1; i <= n; i++, dispari += 2, quadrato += dispari)
		printf("\nQuadrato di %3d = %5d", i, quadrato);
salta_esercizio7: ;

goto salta_esercizio8;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 6.8
	// Stampa del calendario
	int i, n, start_day;

	printf("\n\nDigita il numero di giorni del mese: ");
	scanf("%d", &n);
	printf("\nDigita il primo giorno del mese (1=Lun, 7=Dom): ");
	scanf("%d", &start_day);

	printf("Lun\tMar\tMer\tGio\tVen\tSab\tDom\n");
	/* print any leading "blank dates" */
	for (i = 1; i < start_day; i++)
		printf("\t");

	/* now print the calendar */
	for (i = 1; i <= n; i++) {
	printf("%2d\t", i);
	if ((start_day + i - 1) % 7 == 0)
	  printf("\n");
	}
salta_esercizio8: ;


goto salta_esercizio9;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 6.9
	// A fronte di prestito con interesse stampa debito residuo dopo x pagamenti mensili
	printf("\n\nImporto del prestito: ");
	scanf("%f", &prestito);
	printf("Rata mensile: ");
	scanf("%f", &pagamento);
	printf("Tasso di interesse percentuale: ");
	scanf("%f", &interesse);
	printf("Numero di rate pagate: ");
	scanf("%d", &rate);
	printf("\nImporto iniziale = %.2f", prestito);
	//~ for (i = 1; prestito > 0; i++) {	// OPZIONE 1
	for (i = 1; i <= rate; i++) {			// OPZIONE 2
		printf("\nDopo mese %2d = %8.2f", i, prestito = prestito * (1 + interesse /100 /12) - pagamento);
	}	
salta_esercizio9: ;


goto salta_esercizio10;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 6.10
	// Confronto date
	printf("\n\nConfronto di date per determinare la meno recente.");
	int giornoInput, meseInput, annoInput, annoCheck, meseCheck, giornoCheck;
	printf("\nDigita una data nel formato gg/mm/aa, 0/0/0 per finire: ");
	scanf("%d/%d/%d", &giornoCheck, &meseCheck, &annoCheck);
	for (;;) {
		printf("Digita una data nel formato gg/mm/aa, 0/0/0 per finire: ");
		scanf("%d/%d/%d", &giornoInput, &meseInput, &annoInput);
		if (giornoInput == 0 && meseInput == 0 && annoInput == 0)
			break;
		if (annoInput == annoCheck) {
			if (meseInput == meseCheck) {
				if (giornoInput == giornoCheck) {
					continue;
				}
				else if (giornoInput < giornoCheck) {
					giornoCheck = giornoInput;
					meseCheck = meseInput;
					annoCheck = annoInput;
				}
			}
			else if (meseInput < meseCheck) {
				giornoCheck = giornoInput;
				meseCheck = meseInput;
				annoCheck = annoInput;
			}
		}
		else if (annoInput < annoCheck) {
			giornoCheck = giornoInput;
			meseCheck = meseInput;
			annoCheck = annoInput;
		}
	}
	printf("\nLa data meno recente tra quelle digitate è %.2d/%.2d/%.2d", giornoCheck, meseCheck, annoCheck);
salta_esercizio10: ;

goto salta_esercizio10bis;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 6.10 bis
	// Confronto date
	printf("\n\nConfronto di date v2 per determinare la meno recente.");
	//~ int giornoInput, meseInput, annoInput, annoCheck, meseCheck, giornoCheck;
	printf("\nDigita una data nel formato gg/mm/aa, 0/0/0 per finire: ");
	scanf("%d/%d/%d", &giornoCheck, &meseCheck, &annoCheck);
	for (;;) {
		printf("Digita una data nel formato gg/mm/aa, 0/0/0 per finire: ");
		scanf("%d/%d/%d", &giornoInput, &meseInput, &annoInput);
		if (giornoInput == 0 && meseInput == 0 && annoInput == 0) {
			break;
		}
		if (annoInput < annoCheck) {
			giornoCheck = giornoInput, meseCheck = meseInput, annoCheck = annoInput;
		}
		else if (annoInput > annoCheck) {
			continue;
		}
		else // stesso anno
			if (meseInput < meseCheck) {
				giornoCheck = giornoInput, meseCheck = meseInput, annoCheck = annoInput;
			}
			else if (meseInput > meseCheck) {
				continue;
			}
			else // stesso mese; se giorno è uguale o superiore non serve controllare
				if (giornoInput < giornoCheck) {
					giornoCheck = giornoInput, meseCheck = meseInput, annoCheck = annoInput;
				}
		}
	printf("\nLa data meno recente tra quelle digitate è %.2d/%.2d/%.2d", giornoCheck, meseCheck, annoCheck);
salta_esercizio10bis: ;


goto salta_esercizio11;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 6.11
	// Numero di Eulero 'e'
	printf("\n\nCalcolo del numero di Eulero.\nDigita il numero di iterazioni (max 12): ");
	scanf("%d", &numero);
	//~ for (i = 1, calcoloFloat = 1.0f; i <= numero; i++, calcoloFloat += 1.0f/i);
	for (i = 1, e = 1.0f; i <= numero; i++) {
		for (j = 1, fattoriale = 1; j <= i; j++) {
			fattoriale *= j;
			printf("\n\tIl fattoriale di i = %d e j = %d è %lld", i, j, fattoriale);
		}
		
		//~ printf("\nIterazione %3d: valore di 1/i = %f; ", ii, 1.0f/i);
		e += 1.0f / fattoriale;
		printf("\ne = %f", e);
	}
	printf("\nIl valore calcolato dopo %d iterazioni è %f",i -1, e);
salta_esercizio11: ;

goto salta_esercizio11_bis;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 6.11 v2
	// Numero di Eulero 'e'
	printf("\n\nCalcolo del numero di Eulero.\nDigita il numero di iterazioni (max 20): ");
	scanf("%d", &numero);
	//~ for (i = 1, calcoloFloat = 1.0f; i <= numero; i++, calcoloFloat += 1.0f/i);
	e = 1.0f;
	for (i = 1, fattoriale = 1; i <= numero; i++) {
		fattoriale *= i;
		printf("\n\tIl fattoriale di i = %2d è %21lld", i, fattoriale);
		//~ printf("\nIterazione %3d: valore di 1/i = %f; ", i, 1.0f/i);
		e += 1.0f / fattoriale;
		printf("; e = %.20f", e);
	}
	printf("\nIl valore calcolato dopo %d iterazioni è %.20f", i -1, e);
salta_esercizio11_bis: ;

goto salta_esercizio11_ter;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 6.11 v2
	// Numero di Eulero 'e'
	printf("\n\nCalcolo del numero di Eulero.\nDigita un valore piccolo): ");
	scanf("%f", &numerofloat);
	e = 1.0f;
	for (i = 1, fattoriale = 1;; i++) {
		fattoriale *= i;
		printf("\n\nFattoriale di i = %2d è %21lld", i, fattoriale);
		printf("\n1 / fattoriale = %.10f", 1.0f / fattoriale);
		if (1.0f / fattoriale < numerofloat)
			break;
		e += 1.0f / fattoriale;
		printf("; e = %.20f", e);
	}
	printf("\n\nIl valore calcolato dopo %d iterazioni è %.20f", i -1, e);
salta_esercizio11_ter: ;

	return 0;
}
