#include <stdio.h>
#include <string.h>
#include <math.h>
#define DIVISORE 75

int main(void)
{
goto salta_volume;
	const double fl = 5.4f;
	printf("Costante = %f\n", fl);
	printf("sizeof Costante = %d\n", sizeof(fl));


	int altezza = 0, larghezza = 0, profondita = 0;
	printf("Altezza? ");
	scanf("%i", &altezza);
	printf("Larghezza? ");
	scanf("%i", &larghezza);
	printf("Profondità? ");
	scanf("%i", &profondita);
	printf("\nIl volume del pacco è di %d\n", altezza * larghezza * profondita);
	printf("Il peso volumetrico è %d\n", altezza * larghezza * profondita / DIVISORE);
	printf("Il peso volumetrico è %d\n", (altezza * larghezza * profondita + DIVISORE -1) / DIVISORE);
salta_volume: ;

//~ goto salta_formattazione;
//~ // FORMATTAZIONE PRINTF
	int a = 227;
	float b = 54.137625f;
	printf("%d|%5d|%-5d|%5.4d|%-5.4d|\n", a, a, a, a, a);
	printf("%f|%12f|%-12f|%12.4f|%-12.4f|%12.4e|%-11.7g|\n", b, b, b, b, b, b, b);
	printf("Esempio %%6d: |%6d|\n", 86);
	printf("Esempio %%4d: |%4d|\n", 1040);
	printf("Esempio %%7.4f: |%7.4f|\n", 3.14);
	printf("Esempio %%16.8f: |%16.8f|\n", 3.1457498);
	printf("Esempio %%16.1f: |%16.1f|\n", 3.1457498);
	printf("Esempio %%-6.3g: |%-6.3g|\n", 3.1457498); // - allinea a sinistra
	printf("Esempio %%-6.g: |%-6.g|\n", 3.1457498); // - allinea a sinistra
	printf("Esempio %%16.8g: |%16.8g|\n", M_PI);
	printf("Esempio %%16.8e: |%16.8e|\n", M_PI);
//~ salta_formattazione: ; // dopo una label deve esserci uno statement e non una declaration

goto salta_scanf;
// ANALISI SCANF
	int sc1, sc2, sc5, sc7;
	float sc3, sc4, sc6, sc8;
	printf("\n\nDigita 2 interi e 2 float separati da virgole: ");
	scanf("%d,%d,%f,%f", &sc1, &sc2, &sc3, &sc4);
	printf("\nIntero: %d\nIntero: %d\nFloat: %f\nFloat: %f", sc1, sc2, sc3, sc4);
	printf("\n\nDigita intero, float e intero separati da spazi: ");
	scanf("%d%f%d", &sc5, &sc6, &sc7); // pitfall se per l'intero l'utente digita 10.3 il .3 passa al %f
	printf("\nIntero: %d\nFloat: %f\nIntero: %d", sc5, sc6, sc7);
salta_scanf: ;

goto salta_frazioni;
// ANALISI SCANF
	int nomin1, nomin2, denom1, denom2;
	printf("\n\nDigita 2 frazioni separate da virgole (es. 7/8, 4/9): ");
	scanf("%d / %d , %d / %d", &nomin1, &denom1, &nomin2, &denom2);
	printf("\nRisultato: %d/%d", nomin1 * nomin2, denom1 * denom2);
salta_frazioni: ;

//~ goto salta_data1;
// ANALISI DATA
	int gg1, mm1, aa1;
	printf("\n\nDigita la data nel formato gg/mm/aaaa: ");
	scanf("%d / %d / %d", &gg1, &mm1, &aa1);
	printf("\nData astrale: %d/%.2d/%.2d", aa1, mm1, gg1);
salta_data1: ;

goto salta_banconote;
// CALCOLO BANCONOTE
	printf("\n\n **** Calcolo banconote da 50, 20, 10, 5 €\n");
	printf("Inserisci importo ");
	int importo;
	scanf("%d", &importo);
	int banconote_50 = importo / 50;
	importo = importo - banconote_50 * 50;
	printf("Banconote da 50: %d\n", banconote_50);
	int banconote_20 = importo / 20;
	importo = importo - banconote_20 * 20;
	printf("Banconote da 20: %d\n", banconote_20);
	int banconote_10 = importo / 10;
	importo = importo - banconote_10 * 10;
	printf("Banconote da 10: %d\n", banconote_10);
	int banconote_5 = importo / 5;
	importo = importo - banconote_5 * 5;
	printf("Banconote da 5: %d\n", banconote_5);
	printf("In monete: %d\n", importo);
salta_banconote:

goto test1_end;
	int x = 4096;
	printf("x non inizializzata è %d\n", x);
	printf("sizeof(x) è %d\n", sizeof(x));
	char *ix = &x;
	printf("1° byte di x: %c\n", *ix);
	printf("1° byte di x: %d\n", *ix);
	printf("2° byte di x: %d\n", *ix);
	printf("3° byte di x: %d\n", *ix);
	printf("4° byte di x: %d\n", *ix);
test1_end: ;

	return 0;
}
