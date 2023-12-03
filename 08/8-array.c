#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h> // per srand e rand
#include <ctype.h> // per l'utilizzo di toupper()
#include <stdbool.h> // permette 'bool variabile;' e poi 'variabile = false;' e 'variabile = true;' esattamente come se usassi _Bool che è stato inserito nel C99
#include <stdint.h> // permette di usare i tipi di questa libreria

#define TRUE 1
#define FALSE 0 // e a questo punto posso fare 'flag = TRUE'
#define BOOL int // è una macro dunque sostituisce 'BOOL' con int ogni volta ed è un trucco per creare tipi "BOOL"

// dichiarazioni
	int n, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;
	int ciclo, contatore, contatore2, quadrati, i, j, k, numero, valore, comando, somma, primi, divisore, dividendo, resto, cifra, input, x, y;
	int mese, mesi, giorni, giorno, rate, data, value, numeratore1, denominatore1, numeratore2, denominatore2;
	char ch, operazione, iniziale;
	int myInt1, myInt2, myInt3, myInt4, numeratore, denominatore, azioni, valore, vocali;
	short int unsigned testShortInt;
	long int testLongInt;
	long long int fattoriale;
	float investimento, valoreAzione, commissione; 
	float importo, bilancio, prestito, pagamento, interesse, calcoloFloat, numerofloat, numeroFloat1 = 0.f, numeroFloat2 = 0.f;
	double e, doubleI, doubleJ, doubleK;
	int hour, minute, arrival, departure_hour, departure_minute, arrival_hour, arrival_minute;
	char ampm, departure;
	
int main(void) {

goto salta_reverse;
	// PROGRAMMA reverse.c pagina 170
	// inverte 10 numeri
	int reverse[10];
	printf("\n\nDigita 10 numeri interi separati da uno spazio: ");
	for (i = 0; i < 10 ; i++) {
		scanf("%d", &myInt1);
		reverse[i] = myInt1;
	}
	for (i = 9; i >= 0 ; i--) {
		printf("%d ", reverse[i]);
	}
salta_reverse: ;


goto salta_vari;
	// PROGRAMMA 
	// 
	printf("\n\nEsercizio 1\n");
	//~ int varia1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	//~ int varia1[10] = {1, 2, 3, 4, 5};
	//~ int varia2[10] = {0};
	int varia3[] = {32, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	for (i = 0; i <= 9 ; i++) {
		printf("%d ", varia3[i]);
	}
	printf("\n\nEsercizio 2\n");
	int varia4[] = {[5] = 10, [11] = 4, [16] = 4, [9] = 6};
	for (i = 0; i < sizeof(varia4) / sizeof(varia4[0]) ; i++) {
		printf("\nPosizione %d: %d ", i, varia4[i]);
	}
	printf("\n\nEsercizio 3\n");
	int varia5[] = {3, 7, [5] = 10, 11, 12, [11] = 4, [16] = 4, [9] = 6, [3] = 13};
	for (i = 0; i < sizeof(varia5) / sizeof(varia5[0]) ; i++) {
		printf("\nPosizione %d: %d ", i, varia5[i]);
	}
salta_vari: ;

goto salta_ripetuta;
	// PROGRAMMA repdigit.c
	// Verifica se in un intero vi è una cifra ripetuta
	printf("\n\nDigita un intero per verificare se contiene cifre ripetute: ");
	int cifraVista[10] = {0};
	long long intLongLong, intLongLongMaster;
	scanf("%Ld", &intLongLong);
	intLongLongMaster = intLongLong; // la uso per riportare il numero nel programma seguente
	printf("La cifra digitata è: %Ld", intLongLong);
	for (i = 0; intLongLong > 0 ; i++) {
		resto = intLongLong % 10;
		cifraVista[resto]++;
		intLongLong /= 10;
		//~ printf("\nResto = %d", resto);
	}
	for (i = 0; i < sizeof(cifraVista) / sizeof(cifraVista[0]) ; i++) { // anche se basterebbe contare fino a 10 perché 10 sono le cifre dei numeri arabi
		printf("\nLa cifra %d è ripetuta %d volte.", i, cifraVista[i]);
	}
	// Versione con bool
	printf("\n\nVersione con 'bool'.\nLa cifra digitata è: %Ld", intLongLongMaster);
	bool cifraVistaBool[10] = {false};
	for (i = 0; intLongLongMaster > 0 ; i++) {
		resto = intLongLongMaster % 10;
		if(cifraVistaBool[resto] == true) // se la cifra esiste già nel vettore
			break;
		cifraVistaBool[resto] = true;
		intLongLongMaster /= 10;
	}
	if (intLongLongMaster > 0)
		printf("\nC'è una cifra ripetuta :-O");
	else
		printf("\nNessuna cifra ripetuta :-)");
salta_ripetuta: ;


goto salta_interessi;
	// PROGRAMMA interest.c
	// Stampa la crescita del capitale negli anni per diversi tassi di interesse
#define SIZE(array) (sizeof array / sizeof(array[0]))
	int anno, anni;
	float tasso;
	float investimento[5];
	printf("\n\nDigita il numero di anni da valutare: ");
	scanf("%d", &anni);
	printf("Digita il tasso di interesse annuale: ");
	scanf("%f", &tasso);
	printf("\nTasso:");
	for (i = 0; i < SIZE(investimento); i++) {
		investimento[i] = 100;
		printf("\t%3.0f%%", tasso + i);
	}
	for (anno = 1; anno <= anni; anno++) {
		printf("\nAnno %d°", anno);
		for (i = 0; i < SIZE(investimento); i++) {
			printf("\t%.2f", investimento[i] *= (1 + (tasso + i) / 100));
		}
	}
salta_interessi: ;

goto salta_carte_gioco;
	// PROGRAMMA deal.c
	// Distribuisce le carte da un mazzo
	int numCarte, seme, carta;
	const char semi[] = {'C', 'Q', 'F', 'P'};
	const char carte[] = {'2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
	bool mano[SIZE(semi)][SIZE(carte)] = {false};
	printf("\n\nTime = %ld", time(NULL));
	printf("\nSemi = %d, carte = %d", SIZE(semi), SIZE(carte));
	srand((unsigned) time(NULL));
	printf("\nQuante carte vuoi? ");
	scanf("%d", &numCarte);
	for (i = 0; i < numCarte; i++) {
		do {
			seme = rand() % 4;
			carta = rand() % 13;
			//~ printf("\nSeme = %d, Carta = %d", seme, carta);
			//~ printf("\nmano = %d", mano[seme][carta]);
			ciclo++;
		} while (mano[seme][carta] == true); // se la carta è già stata estratta dal mazzo ripeto il ciclo
		mano[seme][carta] = true;
		printf("\nCarta valida: %c di %c", carte[carta], semi[seme]);
	}
	printf("\n\nCarte estratte:");
	for (i = 0; i < SIZE(semi); i++) {
		printf("\n");
		for (j = 0; j < SIZE(carte); j++) {
			printf("%d", mano[i][j]);
		}
	}
	printf("\n\nCicli eseguiti: %d", ciclo);
salta_carte_gioco: ;

goto salta_esercizio3;
	// +++++++++++++++++++++++++++++++++++++++++++
	// ESERCIZIO 8.3
	// Vettore weekend bool con primo e ultimo true
	bool weekend[] = {true, false,  false,  false,  false,  false, true};
	printf("\n\nDimensione in byte dell'array: %d", SIZE(weekend));
salta_esercizio3: ;

goto salta_esercizio4;
	// +++++++++++++++++++++++++++++++++++++++++++
	// ESERCIZIO 8.4
	// Come sopra con designatore inizializzato
	//~ bool weekend_1[] = {[0] = true, [6] = true};
	bool weekend_1[] = {true, [6] = true}; // più corto!!!
	printf("\n\nDimensione in byte dell'array: %d", SIZE(weekend_1));
salta_esercizio4: ;

goto salta_esercizio5;
	// +++++++++++++++++++++++++++++++++++++++++++
	// ESERCIZIO 8.5
	// Fibonacci
	int fibNumbers[40] = {0, 1};
	for (i = 1; i <= 40; i++) {
		fibNumbers[i + 1] = fibNumbers[i] + fibNumbers[i - 1];
		printf("\nPosizione fibNumbers[%2d] = %d", i-1, fibNumbers[i - 1]);
	}
salta_esercizio5: ;

goto salta_esercizio6;
	// +++++++++++++++++++++++++++++++++++++++++++
	// ESERCIZIO 8.6
	// Display LCD
	const int segments1[10][7] = {
		{1, 1, 1, 1, 1, 1, 0},
		{0, 1, 1, 0, 0, 0, 0},
		{1, 1, 0, 1, 1, 0, 1},
		{1, 1, 1, 1, 0, 0, 1},
		{0, 1, 1, 0, 0, 1, 1},
		{1, 0, 1, 1, 0, 1, 1},
		{1, 0, 1, 1, 1, 1, 1},
		{1, 1, 1, 0, 0, 0, 0},
		{1, 1, 1, 1, 1, 1, 1},
		{1, 1, 1, 1, 0, 1, 1},
	};
	printf("Primo valore = %d", segments1[0][0]); // elimina warning GCC
salta_esercizio6: ;

goto salta_esercizio7;
	// +++++++++++++++++++++++++++++++++++++++++++
	// ESERCIZIO 8.7
	// Display LCD con scorciatoie
	const int segments2[10][7] = {
		{1, 1, 1, 1, 1, 1},
		{0, 1, 1},
		{1, 1, 0, 1, 1, 0, 1},
		{1, 1, 1, 1, 0, 0, 1},
		{0, 1, 1, 0, 0, 1, 1},
		{1, 0, 1, 1, 0, 1, 1},
		{1, 0, 1, 1, 1, 1, 1},
		{1, 1, 1},
		{1, 1, 1, 1, 1, 1, 1},
		{1, 1, 1, 1, 0, 1, 1},
	};
	printf("Primo valore = %d", segments2[0][0]); // elimina warning GCC
salta_esercizio7: ;

goto salta_esercizio8;
	// +++++++++++++++++++++++++++++++++++++++++++
	// ESERCIZIO 8.8
	// Dichiarazione vettore temperatura mese - ore
	float temperature_reading1[30][24] = {};
	printf("Primo valore = %fd", temperature_reading1[0][0]); // elimina warning GCC
salta_esercizio8: ;

goto salta_esercizio9;
	// +++++++++++++++++++++++++++++++++++++++++++
	// ESERCIZIO 8.9
	// Calcola temperatura media mensile
	srand((unsigned) time(NULL));
	float temperature_reading2[30][24] = {};
	for (i = 0; i <= 29 ; i++) {
		for (j = 0; j <= 23 ; j++) {
			temperature_reading2[i][j] = (float) (rand() % 350) / 10;
			printf("%4.1f ", temperature_reading2[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i <= 29 ; i++) {
		for (j = 0; j <= 23 ; j++) {
			numerofloat += temperature_reading2[i][j];
		}
	}
	printf("\n\nLa temperatura medià è %.1f", numerofloat / 720);
salta_esercizio9: ;

goto salta_esercizio10;
	// +++++++++++++++++++++++++++++++++++++++++++
	// ESERCIZIO 8.10
	// Scacchiera
	char chess_board[8][8] = {
		{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
		{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		{' ', '.', ' ', '.', ' ', '.', ' ', '.'},
		{'.', ' ', '.', ' ', '.', ' ', '.', ' '},
		{' ', '.', ' ', '.', ' ', '.', ' ', '.'},
		{'.', ' ', '.', ' ', '.', ' ', '.', ' '},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
	};
	printf("\n\n");
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			printf("%c", chess_board[i][j]);
		}
	printf("\n");
	}
salta_esercizio10: ;
	
goto salta_esercizio11;
	// +++++++++++++++++++++++++++++++++++++++++++
	// ESERCIZIO 8.11
	// Altra scacchiera con ciclo
	char checker_board[8][8] = {};
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			//~ if ((j + i) % 2 == 0)
				//~ checker_board[i][j] = '-';
			//~ else
				//~ checker_board[i][j] = '+';
		checker_board[i][j] = (i + j) % 2 == 0 ? '-' : '+'; // più compatto delle 4 righe sopra
		}
	}
	printf("\n\n");
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			printf(" %c", checker_board[i][j]);
		}
	printf("\n");
	}
salta_esercizio11: ;
	
goto salta_programma1;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGRAMMA 8.1
	// Stampa le cifre ripetute... già fatto in anticipo in PROGRAMMA repdigit.c :-D
salta_programma1: ;

goto salta_programma2;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGRAMMA 8.2
	// Stampa le cifre ripetute... in tabella... sostanzialmente fatto in PROGRAMMA repdigit.c
salta_programma2: ;

goto salta_programma3;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGRAMMA 8.3
	// Come repdigit.c: stampa le cifre ripetute, ma si ferma quando utente digita 0
	//~ int cifraVista[10] = {0}; // esiste in precedente dichiarazione
	//~ long long intLongLong, intLongLongMaster; // esiste in precedente dichiarazione
	while (1) {
		for (i = 0; i < sizeof(cifraVista) / sizeof(cifraVista[0]) ; i++) cifraVista[i] = 0;
		printf("\n\nDigita un intero per verificare se contiene cifre ripetute; 0 per finire: ");
		scanf("%Ld", &intLongLong);
		if (intLongLong == 0)
			break;
		printf("La cifra digitata è: %Ld", intLongLong);
		for (i = 0; intLongLong > 0 ; i++) {
			resto = intLongLong % 10;
			cifraVista[resto]++;
			intLongLong /= 10;
			//~ printf("\nResto = %d", resto);
		}
		for (i = 0; i < 10 ; i++) {
			printf("\nLa cifra %d è ripetuta %d volte.", i, cifraVista[i]);
		}
	printf("\n");
	}
salta_programma3: ;

goto salta_programma4;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGRAMMA 8.4
	// Come repdigit.c: stampa le cifre ripetute, ma si ferma quando utente digita 0
	// usa # define SIZE(array) (sizeof array / sizeof(array[0]))
	//~ int cifraVista[10] = {0}; // esiste in precedente dichiarazione
	//~ long long intLongLong, intLongLongMaster; // esiste in precedente dichiarazione
	while (1) {
		for (i = 0; i < sizeof(cifraVista) / sizeof(cifraVista[0]) ; i++) cifraVista[i] = 0;
		printf("\n\nDigita un intero per verificare se contiene cifre ripetute; 0 per finire: ");
		scanf("%Ld", &intLongLong);
		if (intLongLong == 0)
			break;
		printf("La cifra digitata è: %Ld", intLongLong);
		for (i = 0; intLongLong > 0 ; i++) {
			resto = intLongLong % 10;
			cifraVista[resto]++;
			intLongLong /= 10;
			//~ printf("\nResto = %d", resto);
		}
		for (i = 0; i < SIZE(cifraVista); i++) {
			printf("\nLa cifra %d è ripetuta %d volte.", i, cifraVista[i]);
		}
	printf("\n");
	}
salta_programma4: ;

goto salta_programma5;
	// PROGRAMMA 8.5 interest.c come da esercizio precedente
	// Stampa la crescita del capitale negli anni per diversi tassi di interesse
	// calcola però interessi mensili
	//~ Precedentemente definiti:
		//~ int anno, anni;
		//~ float tasso;
		//~ float investimento[5];
	printf("\n\nDigita il numero di anni da valutare: ");
	scanf("%d", &anni);
	while(getchar() == '\n');
	printf("Digita il tasso di interesse mensile: ");
	scanf("%f", &tasso);
	printf("\nTasso:");
	for (i = 0; i < SIZE(investimento); i++) {
		investimento[i] = 100;
		printf("\t  %3.1f%%", tasso + i);
	}
	for (anno = 1; anno <= anni; anno++) {
		printf("\nAnno %d°", anno);
		for (i = 0; i < SIZE(investimento); i++) {
			for (j = 0; j < 12; j++) {
				investimento[i] *= /*(float)*/ (1 + (tasso + i) / 100); // mi pare che il cast non serva
			}
			printf("\t%7.2f", investimento[i]);
		}
	}
salta_programma5: ;

goto salta_programma6;
	// PROGRAMMA 8.6
	// Scrive in formato B1FF
	char frase[50] = {0};
	i = 0;
	printf("\n\nDigita la frase da tradurre: ");
	while((ch = getchar()) != '\n') {
		ch = toupper(ch);
		switch(ch) {
			case 'A' : ch = '4'; break;
			case 'B' : ch = '8'; break;
			case 'E' : ch = '3'; break;
			case 'I' : ch = '1'; break;
			case 'O' : ch = '0'; break;
			case 'S' : ch = '5'; break;
		}
		frase[i] = ch;
		i++;
	}
	printf("In lingua B1FF: ");
	for (i = 0; frase[i] != 0; i++) {
		printf("%c", frase[i]);
	}
	printf("!!!!!!!!!!");
salta_programma6: ;

goto salta_programma7;
	// PROGRAMMA 8.7
	// Matrice 5x5 calcola somma righe colonne
	int matrice[5][5] = {0};
	int totCol[5] = {0};
	int row_value = 0;
	printf("Digita 5x5 interi da 0 a 99 separati da uno spazio");
	for (i = 0; i < 5; i++) {
		printf("\nRiga %d: ", i + 1);
		scanf(" %d %d %d %d %d", &matrice[i][0], &matrice[i][1], &matrice[i][2], &matrice[i][3], &matrice[i][4]);
	}
	printf("\n\n");
	for (i = 0; i < 5; i++) 
		printf("\tCol. %d", i + 1);
	printf("   TotRga:");
	for (i = 0; i < 5; i++) {
		printf("\nRiga %d:", i + 1);
		for (j = 0; j < 5; j++) {
			printf("\t   %3d", matrice[i][j]);
			row_value += matrice[i][j];
			totCol[i] += matrice[j][i];
		}
		printf("\t    %3d", row_value);
		row_value = 0;
	}
	printf("\nTotCol:");
	for (i = 0; i < 5; i++)
		printf("\t   %3d", totCol[i]);
salta_programma7: ;

goto salta_programma8;
	// PROGRAMMA 8.8
	// Voti, medie, massimi, minimi 
	int quiz[5][5] = {0};
	int totquiz[5] = {0};
	int maxquiz[5] = {0};
	int minquiz[5] = {10, 10, 10, 10, 10};
	//~ int totCol[5] = {0}; // precedentemente definito
	int row_tot = 0;
	printf("Digita 5x5 voti da 0 a 10 separati da uno spazio");
	for (i = 0; i < 5; i++) {
		printf("\nStudente %d: ", i + 1);
		scanf(" %d %d %d %d %d", &quiz[i][0], &quiz[i][1], &quiz[i][2], &quiz[i][3], &quiz[i][4]);
	}
	printf("\n\n\t");
	for (i = 0; i < 5; i++) 
		printf("\tQuiz %d", i + 1);
	printf("    Tot   Media");
	for (i = 0; i < 5; i++) {
		printf("\nStudente %d:", i + 1);
		for (j = 0; j < 5; j++) {
			printf("\t   %3d", quiz[i][j]);
			row_tot += quiz[i][j];
			totquiz[i] += quiz[j][i];
			if (maxquiz[j] < quiz[i][j])
				maxquiz[j] = quiz[i][j];
			if (minquiz[j] > quiz[i][j])
				minquiz[j] = quiz[i][j];
		}
		printf("\t  %3d\t  %3.1f", row_tot, (float) row_tot / 5);
		row_tot = 0;
	}
	printf("\nMedia quiz:");
	for (i = 0; i < 5; i++)
		printf("\t   %3.1f", (float) (totquiz[i]) / 5);
	printf("\nMax quiz:");
	for (i = 0; i < 5; i++)
		printf("\t   %3d", maxquiz[i]);
	printf("\nMin quiz:");
	for (i = 0; i < 5; i++)
		printf("\t   %3d", minquiz[i]);
salta_programma8: ;

goto salta_programma9;
	// PROGRAMMA 8.9
	// Cammino casuale
	srand((unsigned) time(NULL));
	char cammino[10][10];
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
	for (int tRow = 0; tRow <= 9; tRow++) {
		for (int tCol = 0; tCol <= 9; tCol++) {
			printf("%c ", cammino[tRow][tCol]);
		}
		printf("\n");
	}
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
		for (int tRow = 0; tRow <= 9; tRow++) {
			for (int tCol = 0; tCol <= 9; tCol++) {
				printf("%c ", cammino[tRow][tCol]);
			}
			printf("\n");
		}
		if (lettera >= 'Z')
		break;
	}
salta_programma9: ;

goto salta_programma10;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 8.10
	// Calcolo dell'ora del volo più prossimo
	printf("\n\nDigita l'orario di partenza preferito nel formato hh:mm a 24 ore: ");
	scanf("%d:%d", &hour, &minute);
	int orario_partenza = hour * 60 + minute;
	int partenze[] = {	8 * 60 +  0,
						9 * 60 + 43,
					   11 * 60 + 19,
					   12 * 60 + 47,
					   14 * 60 +  0,
					   15 * 60 + 45,
					   19 * 60 +  0,
				       21 * 60 + 45};
	int arrivi[] = {   10 * 60 + 16,
					   11 * 60 + 52,
					   13 * 60 + 31,
					   15 * 60 +  0,
					   16 * 60 +  8,
					   17 * 60 + 55,
					   21 * 60 + 20,
					   23 * 60 + 58};
	int delta, departure = partenze[0], arrival = arrivi[0];
	delta = abs(orario_partenza - partenze[0]);
	for (i = 0; i < SIZE(partenze); i++) {
		printf("\nOrario = %.2d:%.2d - ", partenze[i] / 60, partenze[i] % 60);
		if ((abs(partenze[i] - orario_partenza)) < delta) {
			delta = abs(partenze[i] - orario_partenza);
			departure = partenze[i];
			arrival = arrivi[i];
		}
		printf("Iterazione %d: delta = %4d ", i, delta);
		printf("- Miglior partenza = %.2d:%.2d", departure / 60, departure % 60);
	}
	printf("\n\nMiglior orario di partenza = %.2d:%.2d", departure / 60, departure % 60);
	printf("\nMiglior orario di arrivo =   %.2d:%.2d", arrival / 60, arrival % 60);
	int departure_ampm = departure / 60 < 12 ? 0 : 1;
	departure_hour = departure / 60 % 12;
	departure_minute = departure % 60;
	int arrival_ampm = arrival / 60 < 12 ? 0 : 1;
	arrival_hour = arrival / 60 % 12;
	arrival_minute = arrival % 60;
	printf("\nL'orario di partenza più vicino è: ");
		printf("%.2d:%.2d", departure_hour, departure_minute);
		printf(" %cM", departure_ampm == 0 ? 'A' : 'P');
	printf(" con arrivo previsto alle: ");
		printf("%.2d:%.2d", arrival_hour, arrival_minute);
		printf(" %cM", arrival_ampm == 0 ? 'A' : 'P');
salta_programma10: ;

goto salta_programma10_short;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 8.10
	// Calcolo dell'ora del volo più prossimo
	// Bug: se l'orario richiesto è 0, la partenza è 0
	printf("\n\nDigita l'orario di partenza preferito nel formato hh:mm a 24 ore: ");
	scanf("%d:%d", &hour, &minute);
	int dept = 0, arvl = 0, dept_h, dept_m, arvl_h, arvl_m, dept_time = hour * 60 + minute;
	int departs[] = {	8 * 60 +  0,
						9 * 60 + 43,
					   11 * 60 + 19,
					   12 * 60 + 47,
					   14 * 60 +  0,
					   15 * 60 + 45,
					   19 * 60 +  0,
				       21 * 60 + 45};
	int arrivals[] = { 10 * 60 + 16,
					   11 * 60 + 52,
					   13 * 60 + 31,
					   15 * 60 +  0,
					   16 * 60 +  8,
					   17 * 60 + 55,
					   21 * 60 + 20,
					   23 * 60 + 58};
	//~ int delta, departure = departs[0], arrival = arrivals[0];
	delta = abs(dept_time - departs[0]);
	for (i = 0; i < SIZE(departs); i++) {
		printf("\nOrario = %.2d:%.2d - ", departs[i] / 60, departs[i] % 60);
		if ((abs(departs[i] - dept_time)) < delta) {
			delta = abs(departs[i] - dept_time);
			dept = departs[i];
			arvl = arrivals[i];
		}
		printf("Iterazione %d: delta = %4d ", i, delta);
		printf("- Miglior partenza = %.2d:%.2d", dept / 60, dept % 60);
	}
	printf("\n\nMiglior orario di partenza = %.2d:%.2d", dept / 60, dept % 60);
	printf("\nMiglior orario di arrivo =   %.2d:%.2d", arvl / 60, arvl % 60);
	int dept_ampm = dept / 60 < 12 ? 0 : 1;
	dept_h = dept / 60 % 12;
	dept_m = dept % 60;
	int arvl_ampm = arvl / 60 < 12 ? 0 : 1;
	arvl_h = arvl / 60 % 12;
	arvl_m = arvl % 60;
	printf("\nL'orario di partenza più vicino è: %.2d:%.2d %cM", dept_h, dept_m, dept_ampm == 0 ? 'A' : 'P');
	printf(" con arrivo previsto alle: %.2d:%.2d %cM", arvl_h, arvl_m, arvl_ampm == 0 ? 'A' : 'P');
salta_programma10_short: ;

goto salta_programma11;
	// PROGETTO 8.11
	// Traduzione da numero telefonico alfabetico // 1-800-COL-LECT
	printf("\n\n\nTraduzione da numero telefonico alfabetico a numerico.");
	printf("\nDigita un numero, ad esempio 1-800-COL-LECT: ");
	char phonetxt[15] = {0};	// in formato testuale originario
	char phonenum[15] = {0};	// in formato numerico convertito
	for (i = 0; ch != '\n' && i < 15; i++) {
		phonetxt[i] = (ch = getchar());
		printf("\nIterazione %d - carattere %d", i, ch);
		if (ch >=65 && ch <= 90) {
			if (ch <= 67) {			// fino a C
				phonenum[i] = '2';
			}
			else if (ch <= 70) {	// fino a F
				phonenum[i] = '3';
			}
			else if (ch <= 73) {	// fino a I
				phonenum[i] = '4';
			}
			else if (ch <= 76) {	// fino a L
				phonenum[i] = '5';
			}
			else if (ch <= 79) {	// fino a O
				phonenum[i] = '6';
			}
			else if (ch <= 83) {	// fino a S (4 lettere qui)
				phonenum[i] = '7';
			}
			else if (ch <= 86) {	// fino a V
				phonenum[i] = '8';
			}
			else if (ch <= 90) {	// fino a Z (4 lettere qui)
				phonenum[i] = '9';
			}
		}
		else phonenum[i] = ch;
	}
	printf("\n\nIn formato letterale: ");
	for (i = 0; phonetxt[i] != '\n' && i < 15; i++) {
		putchar(phonetxt[i]);
	}
	printf("\nIn formato numerico:  ");
	for (i = 0; phonenum[i] != '\n' && i < 15; i++) {
		putchar(phonenum[i]);
	}
salta_programma11: ;

goto salta_programma12;
	// PROGETTO 8.12.5
	// Scarabeo
	printf("\n\n\nScarabeo - calcolo valore di una parola.");
	printf("\nDigita una parola seguita da Invio: ");
	int valChar[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
	//              {a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p   q  r  s  t  u  v  w  x  y   z
	ch = 0;
		while ((ch = getchar()) != '\n') {
			ch = toupper(ch);
			if (ch >=65 && ch <= 90) {
				value += valChar[ch - 'A'];
				// meglio ancora: value += valChar[ch = toupper(ch) - 'A'];
			}
		}
	printf("\nIl valore della parola è %d", value);
salta_programma12: ;

goto salta_programma13;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 8.13
	// Stampa cognome e iniziale del nome con scanf
	char cognome[20] = {0};
	i = 0;
    printf("\n\nDigita nome e cognome: ");
    scanf(" %c", &iniziale);
    while ((ch = getchar()) != ' ');	// salto i caratteri del nome fino allo spazio successivo
    scanf(" "); 						// salta gli spazi prima del nome
    while ((ch = getchar()) != '\n') {
		cognome[i++] = ch;
	}
	printf("\nNominativo: ");
	i = 0;
	while (cognome[i] != 0)
		putchar (cognome[i++]);
    printf(", %c.", iniziale);
salta_programma13: ;

goto salta_programma14;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 8.14
	// Inverte una frase. Esempio: you can cage a swallow can't you?
	// https://github.com/fordea/c-programming-a-modern-approach/blob/master/ch08/Projects/14.c
	char invFrase[100] = {0};
	i = 0;
	char terminatore = 0;
	printf("\nDigita la frase da invertire: ");
	while (i < SIZE(invFrase) && terminatore == 0) {
		ch = getchar();
		switch (ch) {
			case '.' : case '?' : case '!': terminatore = ch; break;
			default : invFrase[i] = ch; i++; // printf("\nCarattere %2d: %c", i - 1, ch);
		}
	}
	int lastchar = i;
	printf("\nFrase invertita: ");
	for (; i >= 0; i--) {
		if (invFrase[i] == ' ' || i == 0) { // se trovo spazio o inizio vettore = inizio parola
			for (j = i + (i == 0 ? 0 : 1); j < lastchar; putchar(invFrase[j++])); // caso speciale: se inizio vettore devo stampare da zero e non +1 per saltare lo spazio
			if (i != 0)
				printf(" ");
			lastchar = i;
		}
	}
	putchar(terminatore);
salta_programma14: ;

goto salta_programma15;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 8.15
	// Cifrario di Cesare da Testare chiave 3
	// Fliudulr gl Fhvduh gd Whvwduh chiave 23
	char messaggio[80] = {0};
	char risultato[80] = {0};
	int key;
	j = 0;
	printf("Digita la frase da cifrare o decifrare: ");
	while (j < SIZE(messaggio) && ((ch = getchar()) != '\n'))
		messaggio[j++] = ch;
	printf("\nDigita la chiave di cifratura: ");
	scanf("%d", &key);
	for (i = 0; i <= j && messaggio[i] != '\n'; i++) {
		if (messaggio[i] >= 65 && messaggio[i] <= 90)
			risultato[i] = (messaggio[i] -'A' + key) % 26 + 'A';
		else if (messaggio[i] >= 97 && messaggio[i] <= 122)
			risultato[i] = (messaggio[i] -'a' + key) % 26 + 'a';
		else risultato[i] = messaggio[i];
		printf("\nIterazione %2d; lettera %c; numero %3d; lettera %c", i, messaggio[i], messaggio[i], risultato[i]);
	}
	printf("\n\nFrase risultante: ");
	for (i = 0; i < SIZE(risultato); i++)
		printf("%c", risultato[i]);
salta_programma15: ;

goto salta_programma16;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 8.16
	// Parole Anagramma
	char lettere[26] = {0};
	unsigned char myChr; // unsigned, altrimenti warning: array subscript has type ‘char’
	//while (getchar() != '\n');
	printf("\nDigita la prima parola: ");
	while ((myChr = tolower(getchar())) != '\n') {
		if (isalpha(myChr) != 0) {
			myChr -= 'a';
			//~ printf("\nValore di %c = %d", myChr + 'a', myChr);
			lettere[myChr]++;
		}
	}
	//~ for (i = 0; i < SIZE(lettere); i++) {
		//~ printf("\nCarattere %c presente %d volta/e", i + 'a', lettere[i]);
	//~ }
	printf("Digita la seconda parola: ");
	while ((myChr = tolower(getchar())) != '\n') {
		if (isalpha(myChr) != 0) {
			myChr -= 'a';
			//~ printf("\nValore di %c = %d", myChr + 'a', myChr);
			lettere[myChr]--;
		}
	}
	//~ for (i = 0; i < SIZE(lettere); i++) {
		//~ printf("\nCarattere %c presente %d volta/e", i + 'a', lettere[i]);
	//~ }
	for (i = 0, j = 0; i < SIZE(lettere); i++) {
		if (lettere[i] != 0)
			j = 1;
	}
	printf("\nLe due parole ");
	j == 0 ? : printf("non ");
	printf("sono anagrammi.");
salta_programma16: ;

/*
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 8.17
	// Quadrato magico
	// Devo inserire i numeri andando sempre verso in alto a destra; se "sbordo" devo "arrotolare" e se la posizione è già occupata scendo di una riga e mantengo la colonna
	unsigned int side;
	printf("\n*** Quadrato Magico ***");
	printf("\nDigita il lato del quadrato (dispari): ");
	scanf("%d", &side);
	int qm[side][side];
	int nRow = 0, nCol = 0;
	for (cRow = 0; cRow < side; cRow++) { // riempie quadrante con '0'
		for (cCol = 0; cCol < side; cCol++) {
			qm[cRow][cCol] = 0;
		}
	}
	cRow = 0;
	cCol = side / 2;
	qm[cRow][cCol] = 1;
	for (i = 2; i <= side * side; i++) {
		nRow = cRow == 0 ? side -1 : cRow - 1;	// se prima riga, vado all'ultima (side -1)
		nCol = cCol == side -1 ? 0 : cCol + 1;	// se ultima colonna, vado alla prima (0)
		if (qm[nRow][nCol] == 0) {				// se posizione libera, continuo
			qm[nRow][nCol] = i;
		}
		else {
			nRow = cRow == side ? 0 : cRow + 1;	// se posizione occupata, incremento riga
			nCol = cCol;						// e mantengo colonna
			qm[nRow][nCol] = i;
		}
		cRow = nRow;
		cCol = nCol;
	}
		//~ Stampa quadrante
		printf("\n");
		int colValue[side];
		for (i = 0; i < SIZE(colValue); i++)
			colValue[i] = 0;
		for (int tRow = 0; tRow < side; tRow++) {
			int rowValue = 0;
			for (int tCol = 0; tCol < side; tCol++) {
				printf("  %3d", qm[tRow][tCol]);
				rowValue 	   += qm[tRow][tCol];
				colValue[tCol] += qm[tRow][tCol];
			}
			printf(" %3d\n", rowValue);		// stampa totale riga
		}
		for (i = 0; i < side; i++)
			printf(" %4d", colValue[i]);	// stampa totale colonna
*/

//~ 61 5 11 65 8 3 75 7 2 92 7 73 48 23 4 34 5 2 49 5 8 3 97 15 5
//~ 6 5 1 6 8 3 7 7 2 9 7 7 8 3 4 4 5 2 9 5 8 3 9 5 5
//~ +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//~ +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//~ +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//~ +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//~ +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//~ +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//~ +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//~ +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//~ +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++



	return 0;
}
