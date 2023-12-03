#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h> // permette 'bool variabile;' e poi 'variabile = false;' e 'variabile = true;' esattamente come se usassi _Bool che è stato inserito nel C99

#define DIVISORE 75
#define TRUE 1
#define FALSE 0 // e a questo punto posso fare 'flag = TRUE'
#define BOOL int // è una macro dunque sostituisce 'BOOL' con int ogni volta ed è un trucco per creare tipi "BOOL"

int main(void)
{

// dichiarazioni
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;
	int firstTotal, secondTotal, thirdTotal;
	int qa, qb = 3, qc = 7, qd = 5, qe = 13, qf = 4, qi = 5;
	int flag, numero, ora, minuto, minuti, importo, azioni, departure_hour, departure_minute, hour, minute;
	int data, arrival, arrival_hour, arrival_minute, voto, decine, unita;
	int xa = 1;
	int xb, i, j, n, min, min1, min2, max, max1, max2;
	int k, teenager = FALSE, age;
	float xc, investimento, commissione, valoreAzione, imponibile, imposta;

goto salta_case_switch;
	// +++++++++++++++++++++++++++++++++++++++++++
	// Pagina 92, Conversione data a formato legale
	// +++++++++++++++++++++++++++++++++++++++++++
	printf("\nDigita la data nel formato US mm/dd/yyyy: ");
	scanf("%d/%d/%d", &n1, &n2, &n3);
	printf("On this %d", n2);
	switch (n2) {
		case 1: case 21: case 31:
			printf("st");
			break;
		case 2: case 22:
			printf("nd");
			break;
		case 3: case 23:
			printf("rd");
			break;
		default:
			printf("th");
			break;
		}
	printf(" day of ");
	switch (n1) {
		case 1: printf("Jan"); break;
		case 2: printf("Feb"); break;
		case 3: printf("Mar"); break;
		case 4: printf("Apr"); break;
		case 5: printf("May"); break;
		case 6: printf("Jun"); break;
		case 7: printf("Jul"); break;
		case 8: printf("Aug"); break;
		case 9: printf("Sep"); break;
		case 10: printf("Oct"); break;
		case 11: printf("Nov"); break;
		case 12: printf("Dec"); break;
		break;
		}
	printf(" %.2d", n3);
salta_case_switch: ;

goto salta_espressioni;
	xa = +2;
	printf("xa = %d\n", xa);
	printf("modulo di 473 / 54 = %d\n", 473 % 54);
	printf("modulo di -9 / 7 = %d\n", -9 % 7);

	xc = xb = 33.3f; // = è associativo a destra dunque si "legge" da destra a sinistra e xc diventa f 33.0000
	printf("xc = %f", xc);

	//~ int xd = 1;
	//~ int xe, xf, xg;
	//~ xf = 1 + (xe = 1);
	//~ printf("\n\nxd = %d; xe = %d; xf = %d", xd, xe ,xf);
	//~ -xf = xe; // 3-learn.c:24:6: error: lvalue required as left operand of assignment

	//~ xe = 1;
	//~ xg = 3;
	//~ xe = xe * xf + xg; // perchè pagina 62 dice che non è uguale? risposta pagina 69...
	//~ printf("\nxe = xe * xf + xg ==> %d", xe);
	//~ xe = 1;
	//~ xe *= xf + xg;
	//~ printf("\nxe *= xf + xd ==> %d", xe);

	printf("\n\nqb vale: %d", qb);
	qa = qb += qc++ - qd + --qe / -qf;
//  2  =  3 +    7    -5       -3
	//~ qa = - qd + --qe / -qf;
	printf("\nqb vale: %d", qb);
	printf("\n\nqa vale: %d", qa);
	printf("\nqc vale: %d", qc);
	printf("\nqc++ vale: %d", qc++);
	printf("\nqd vale: %d", qd);
	printf("\nqe vale: %d", qe);
	printf("\nqf vale: %d", qf);

	printf("\n\nqi = %d", qi);
	printf("\nqi++ = %d", qi++);
	printf("\nqi = %d", qi);
	printf("\n++qi = %d", ++qi);
	printf("\nqi = %d", qi);

	int ei = 44, ej = 3, ek = 11;
	printf("\n\n'(ei + 10) %% ek / ej' = %d", (ei + 10) % ek / ej);
	ei = 1, ej = 2, ek = 3;
	printf("\n(ei + 5) %% (ej +2) / ek = %d", (ei + 5) % (ej +2) / ek);
	printf("\n8/5 = %d", 8/5);
	printf("\n-8/5 = %d", -8/5);
	printf("\n8/-5 = %d", 8/-5);
	printf("\n-8/-5 = %d", -8/-5);
	printf("\n8%%5 = %d", 8%5);
	printf("\n-8%%5 = %d", -8%5);
	printf("\n8%%-5 = %d", 8%-5);
	printf("\n-8%%-5 = %d", -8%-5);

	int fi, fj, fk;
	fi = fj = fk = 1;
	fi += fj += fk;
	printf("\nfi = %d; fj = %d; fk = %d", fi, fj, fk);

	fi = 6;
	fj = fi += fi;
	printf("\n'fj = fi += 1' ==> fj = %d; fi = %d", fj, fi);
	
	fi = 5;
	fj = (fi -= 2) + 1;
	printf("\n'fj = (fi -= 2) +1' ==> fj = %d; fi = %d", fj, fi);
	
	fi = 7;
	fj = 6 + (fi - 2.5);
	printf("\n'fj = 6 + (fi - 2.5)' ==> fj = %d; fi = %d", fj, fi);
	
	//~ fi = 2, fj = 8;
	//~ fj = (fi = 6) + (fj = 3); // UNDEFINED
	//~ printf("\n'fj = (fi = 6) + (fj =3)' ==> fj = %d; fi = %d", fj, fi);
	
	fi = 1;
	printf("\n'fi = 1; fi++ -1' ==> %d; ", fi++ -1);
	printf("fi = %d", fi);

	fi = 10, fj = 5;
	printf("\nfi = 10; fj = 5; fi++ - fj++ ==> %d", fi++ - fj++);
	printf("\nfi = %d; fj = %d", fi, fj);

	fi = 5;
	printf("\nfi = 5; ++fi * 3 - 2 ==> %d", ++fi * 3 - 2);

	int fa = 5, fb = 6, fc = 7, fd = 8;
	printf("\n'fa * -fb / fc - fd' ==> %d", fa * -fb / fc - fd);

	//~ fi = 1, fj = 2;
	//~ fi += fj; fi--; fi * fj / fi; fi % ++fj;
	//~ printf("\n'fi += fj; fi--; fi * fj / fi; fi %% ++fj' ==> fi = %d; fj = %d", fi, fj);
	
	printf("\\nnDigita un numero a due cifre che io invertirò: ");
	scanf("%d", &n1);
	printf("Il numero invertito è... %d%d", n1 % 10, n1 / 10);

	printf("\nDigita un numero a tre cifre che io invertirò: ");
	scanf("%d", &n1);
	printf("Il numero invertito è... %d%d%d", n1 % 10, n1 / 10 % 10, n1 /100);

	printf("\nDigita un numero a tre cifre che io invertirò senza calcoli: ");
	scanf("%1d%1d%1d", &n1, &n2, &n3);
	printf("Il numero invertito è... %d%d%d", n3, n2, n1);

	printf("\nDigita un numero che convertirò in base ottale: ");
	scanf("%d", &n1);
	printf("Il numero in base ottale è... %5.5o", n1);
	printf("\nIl numero in base ottale è... %d%d%d%d%d", n1 / 4096 % 8, n1 / 512 % 8, n1 / 64 % 8, n1 / 8 % 8, n1 % 8);
salta_espressioni: ;

goto salta_selezione;
	qa = 9;
	qb = qa > 7 ? qa * 2 : qa * 3;
	printf("\nqb = qa > 7; qa * 2; qa * 3 ==> qb vale: %d", qb);

	flag = 1;
	if(flag == TRUE) printf("\nflag = %d dunque Vero!", flag);
	if(flag) printf("\nflag = %d dunque Vero... short form!", flag);
	flag = 0;
	if(flag == FALSE) printf("\nflag = %d dunque Falso!", flag);
	if(!flag) printf("\nflag = %d dunque Falso... short form!", flag);
	
	BOOL flagship;
	flagship = TRUE;
	if(flagship == TRUE) printf("\nflagship = %d dunque Vero!", flagship);
	_Bool booleana;
	booleana = 7;
	if(booleana) printf("\nbooleana = %d dunque Vero!", booleana); // controlla solo se > 0

// OPERATORI RELAZIONALI
	i = 2, j = 3;
	k = i * j == 6;
	printf("\n'i = 2, j = 3;	k = i * j == 6'; k ==> %d", k);

	i = 5, j = 10, k = 3;
	printf("\n'i = 5, j = 10, k = 3; k > 3 < j' ==> %d", k > 3 < j); // k > 3 = 1 e poi 1 < j = 1
	
	i = 3, j = 4, k = 5;
	printf("\n'i = 3, j = 4, k = 5; i < j == j < k' ==> %d", i < j == j < k);

// OPERATORI LOGICI
	i = 10, j = 5;
	printf("\n'!i < j' ==> %d", !i < j);
	printf("\n'i = %d", i);
	printf("\n'!i = %d", !i);
	
	i = 3, j = 2;
	printf("\n'i = 3, j = 2; !!i + !j' ==> %d", !!i + !j);
	
	i = 5, j = 0, k = -5;
	printf("\n'i = 5, j = 0, k = -5; i && j || k' ==> %d", i && j || k); // || k negativo restituisce comunque 1

	i = 1, j = 2, k = 3;
	printf("\n\n'i = 1, j = 2, k = 3; i < j || k' ==> %d", i < j || k);
	printf("\n'i = 1, j = 2, k = 3; j < i && k' ==> %d", j < i && k);

// CORTOCIRCUITAZIONE ESPRESSIONI LOGICHE
	i = 1, j = 2, k = 3;
	printf("\n\nCortocircuitazione espressioni logiche");
	printf("\nset i = 1, j = 2, k = 3");
	printf("\n\ni < j || ++j < k ==> %d", i < j || ++j < k);
	printf("\n i = %d; j = %d; k = %d", i, j, k);

	i = 1, j = 2, k = 3;
	printf("\n\nset i = 1, j = 2, k = 3");
	printf("\ni - 1 && j++ < k ==> %d", i - 1 && j++ < k);
	printf("\n i = %d; j = %d; k = %d", i, j, k);

	i = 1, j = 2, k = 3;
	printf("\n\nset i = 1, j = 2, k = 3");
	printf("\n(i - j) || (j - k) ==> %d", (i - j + 1) || (j - k));
	printf("\n i = %d; j = %d; k = %d", i, j, k);
	printf("\n(i - j) || (j++ - k) ==> %d", (i - j) || (j++ - k));
	printf("\n i = %d; j = %d; k = %d", i, j, k);
	printf("\n(i - j) || (++j - k) ==> %d", (i - j) || (++j - k));
	printf("\n i = %d; j = %d; k = %d", i, j, k);
	printf("\n(i - j + 1) || (++j - k) ==> %d", (i - j + 1) || (++j - k));
	printf("\n i = %d; j = %d; k = %d", i, j, k);

	i = j = k = 1;
	printf("\n\nset i = 1, j = 1, k = 1");
	printf("\n++i || ++j && ++k ==> %d", ++i || ++j && ++k);
	printf("\n i = %d; j = %d; k = %d", i, j, k);
	
	i = 2, j = 3;
	printf("\n\nset i = %d, j = %d", i, j);
	//~ se i < j = -1, se i = j =  0, se i > j =  1
	printf("\n(i > j) - (i < j) ==> %d", (i > j) - (i < j));
	printf("\ni < j ? -1 : i > j ==>: %d", i < j ? -1 : i > j);
	printf("\n i = %d; j = %d", i, j);

	n = 11;
	printf("\n\nn = %d", n);
	xa = (n >= 1 <= 10);
	if (n >= 1 <= 10) printf("\nif(n >= 1 <= 10) ==> xa = %d; n = compreso tra 1 e 10 ma non è corretto, il risultato è sempre 1", xa);
	// warning: comparison of constant ‘10’ with boolean expression is always true [-Wbool-compare]
	// Corrisponde a ((n >= 1) <= 10)

	n = -17;
	printf("\n\nn = %d", n);
	printf("\nn >=0 ? n : -n ==> %d", n >=0 ? n : -n);

	age = 16;
	printf("\n\nAge = %d", age);
	//~ if (age >= 13 && age <= 19) {
		//~ teenager = true;
		//~ }
	teenager = age >= 13 && age <= 19 ? TRUE : FALSE;
	printf("\nTeenager = %d", teenager);

	i = 1;
	printf("\n\ni = 1; i %% 3 = %d", i % 3);
	switch (i) {
		case 0: printf("\nZero");
		case 1: printf("\nOne");
		case 2: printf("\nTwo");
		// aggiungere il break altrimenti dopo la prima istanza vera vengono eseguite anche le altre!
		}

	int	areaCode  = 771;
	printf("\n\nPrefisso = %d", areaCode);
	switch (areaCode) {
		case 229: printf("\nAlbany"); break;
		case 404: printf("\nAtlanta"); break;
		case 470: printf("\nAtlanta"); break;
		case 706: printf("\ncolumbus"); break;
		case 762: printf("\ncolumbus"); break;
		case 770: printf("\nAtlanta"); break;
		case 912: printf("\nSavannah"); break;
		default: printf("\nPrefisso non riconosciuto"); break;
		}

	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 5.1
	// Conteggio di cifre in un numero
	numero = 547;
	printf("\n\nNumero = %d", numero);
	if (numero >= 0 && numero < 10) {
		printf("\nNumero ad una cifra");
		}
	else if (numero >= 10 && numero < 100) {
		printf("\nNumero a due cifre");
		}
	else if (numero >= 100 && numero < 1000) {
		printf("\nNumero a tre cifre");
		}
	else
		printf("\nAltro tipo di numero");
salta_selezione: ;
		
goto salta_orario;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 5.2
	// Conversione orario da 24 ore a 12 ore
	printf("\n\nDigita l'orario attuale nel formato hh:mm a 24 ore: ");
	scanf("%d:%d", &ora, &minuto);
	if (ora == 00) {
		printf("L'orario attuale nel formato hh:mm a 12 ore è: 12:%.2d AM", minuto);
		}
	else if (ora < 12) {
		printf("L'orario attuale nel formato hh:mm a 12 ore è: %d:%.2d AM", ora, minuto);
		}
	else if (ora == 12) {
		printf("L'orario attuale nel formato hh:mm a 12 ore è: 12:%.2d PM", minuto);
		}
	else
		printf("L'orario attuale nel formato hh:mm a 12 ore è: %d:%.2d PM", ora -12, minuto);
salta_orario: ;
			
goto salta_broker;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 5.3
	// Calcolo commissioni broker con due broker
	printf("\n\nDigita il valore dell'azione: ");
	scanf("%f", &valoreAzione);
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
	commissione = commissione < 39.00f ? 39.00f : commissione;
	printf(" Broker A: Investimento = $ %.2f; commissione = $ %10.2f", investimento, commissione);
	if (azioni < 2000) {
		commissione = 33.0f + investimento * 3.00f /100;
		}
	else {
		commissione = 33.0f + investimento * 2.00f /100;
		}
	printf("\n Broker B: Investimento = $ %.2f; commissione = $ %10.2f", investimento, commissione);
salta_broker: ;

goto paga_tasse;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 5.5
	// Calcolo imposte sul reddito
	printf("\n\nDigita l'orario di partenza preferito nel formato hh:mm a 24 ore: ");
	printf("\n\nDigita l'imponibile: ");
	scanf("%f", &imponibile);
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
	printf(" Importo imposta = $ %.2f", imposta);
	printf("\n Imposta percentuale media = %.2f%%", imposta / imponibile * 100);
paga_tasse: ;

goto salta_voli;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 5.8
	// Calcolo dell'ora del volo più prossimo
	printf("\n\nDigita l'orario di partenza preferito nel formato hh:mm a 24 ore: ");
	scanf("%d:%d", &hour, &minute);
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

	printf("L'orario di partenza più vicino è: ");
	if (departure_hour == 00) {
		printf("12:%.2d AM", departure_minute);
		}
	else if (departure_hour < 12) {
		printf("%d:%.2d AM", departure_hour, departure_minute);
		}
	else if (departure_hour == 12) {
		printf("12:%.2d PM", departure_minute);
		}
	else
		printf("%d:%.2d PM", departure_hour -12, departure_minute);
	printf(" con arrivo previsto alle: ");
	if (arrival_hour == 00) {
		printf("12:%.2d AM", arrival_minute);
		}
	else if (arrival_hour < 12) {
		printf("%d:%.2d AM", arrival_hour, arrival_minute);
		}
	else if (arrival_hour == 12) {
		printf("12:%.2d PM", arrival_minute);
		}
	else
		printf("%d:%.2d PM", arrival_hour -12, arrival_minute);
salta_voli: ;

goto salta_confronta_date;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 5.9
	// Calcolo della data che si trova prima nel calendario
	int giorno1, mese1, anno1, giorno2, mese2, anno2;
	printf("Digita la prima data nel formato gg/mm/yy: ");
	scanf("%d/%d/%d", &giorno1, &mese1, &anno1);
	printf("Digita la seconda data nel formato gg/mm/yy: ");
	scanf("%d/%d/%d", &giorno2, &mese2, &anno2);
	if (anno1 == anno2) {
		if (mese1 == mese2) {
			if (giorno1 == giorno2) {
				data = 0;
			}
			else if (giorno1 < giorno2) {
				data = -1;
			}
			else {
				data = 1;
			}
		}
		else if (mese1 < mese2) {
				data = -1;
			}
			else {
				data = 1;
			}
		}
	else if (anno1 < anno2) {
			data = -1;
		}
		else {
			data = 1;
		}
		switch(data) {
			case -1 : printf("%.2d/%.2d/%.2d è precedente a %.2d/%.2d/%.2d", giorno1, mese1, anno1, giorno2, mese2, anno2); break;
			case  0 : printf("%.2d/%.2d/%.2d è uguale a %.2d/%.2d/%.2d", giorno1, mese1, anno1, giorno2, mese2, anno2); break;
			case  1 : printf("%.2d/%.2d/%.2d è successiva a %.2d/%.2d/%.2d", giorno1, mese1, anno1, giorno2, mese2, anno2); break;
		}
salta_confronta_date: ;

goto salta_votazioni;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 5.10
	// Conversione da voto numerico a lettera
	printf("Digita il voto ricevuto all'esame (da 0 a 100): ");
	scanf("%d", &voto);
	if (voto > 100 || voto < 0) {
		printf("\nNon classificato");
		return 0;
	}
	voto = voto / 10;
	switch(voto) {
		case 10 : printf("\nValutazione: A"); break;
		case  9 : printf("\nValutazione: A"); break;
		case  8 : printf("\nValutazione: B"); break;
		case  7 : printf("\nValutazione: C"); break;
		case  6 : printf("\nValutazione: D"); break;
		default : printf("\nValutazione: F"); break;
	}	
salta_votazioni: ;

goto salta_cifre_parole;
	// +++++++++++++++++++++++++++++++++++++++++++
	// PROGETTO 5.11
	// Conversione da numero in cifre a dicitura inglese
	printf("Inserisci un numero (0-99): ");
	scanf("%d", &numero);
	printf("Il numero inserito è ");

	if (numero > 19) {
		decine = numero / 10;
		switch(decine) {
			case 9 : printf("ninety"); break;
			case 8 : printf("eighty"); break;
			case 7 : printf("seventy"); break;
			case 6 : printf("sixty"); break;
			case 5 : printf("fifty"); break;
			case 4 : printf("fourty"); break;
			case 3 : printf("thirty"); break;
			case 2 : printf("twenty"); break;
		}
	}
	if (numero < 10 || numero > 19) {
		if (numero > 20) {
			printf("-");
		}
		unita = numero % 10;
		switch(unita) {
			case 9 : printf("nine"); break;
			case 8 : printf("eight"); break;
			case 7 : printf("seven"); break;
			case 6 : printf("six"); break;
			case 5 : printf("five"); break;
			case 4 : printf("four"); break;
			case 3 : printf("three"); break;
			case 2 : printf("two"); break;
			case 1 : printf("one"); break;
			default : ; break;
		}
	}
	else {
		unita = (numero - 10) % 10;
		switch(unita) {
			case 9 : printf("nineteen"); break;
			case 8 : printf("eighteen"); break;
			case 7 : printf("seventeen"); break;
			case 6 : printf("sixteen"); break;
			case 5 : printf("fifteen"); break;
			case 4 : printf("fourteen"); break;
			case 3 : printf("thirteen"); break;
			case 2 : printf("twelve"); break;
			case 1 : printf("eleven"); break;
			default : printf("ten"); break;
		}
	}
salta_cifre_parole: ;

			

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

goto salta_upc;
//~ // CALCOLO BARCODE
	printf("\nDigita il codice UPC nel formato x-xxxxx-xxxxx-x: ");
	scanf("%1d - %1d%1d%1d%1d%1d - %1d%1d%1d%1d%1d - %1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);
	firstTotal = n1 + n3 + n5 + n7 + n9 + n11;
	secondTotal = n2 + n4 + n6 + n8 + n10;
	thirdTotal = 9 - (firstTotal * 3 + secondTotal -1) % 10;
	printf("Il codice di controllo corretto è: %d", thirdTotal);
salta_upc: ;
goto salta_ean;
	printf("\nDigita le 13 cifre del codice EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13);
	firstTotal = n2 + n4 + n6 + n8 + n10 + n12;
	secondTotal = n1 + n3 + n5 + n7 + n9 + n11;
	thirdTotal = 9 - (firstTotal * 3 + secondTotal -1) % 10;
	printf("Il codice di controllo corretto è: %d", thirdTotal);
	if (thirdTotal == n13) {
		printf("\nIl codice di controllo è corretto!");
	}
	else {
		printf("\nIl codice di controllo non è corretto!");
	}
salta_ean: ;

goto salta_4numeri;
	printf("\nDigita 4 numeri interi separati da uno spazio: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	max1 = n2;
	min1 = n1;
	if (n1 > n2) {
		max1 = n1;
		min1 = n2;
	}
	max2 = n4;
	min2 = n3;
	if (n3 > n4) {
		max2 = n3;
		min2 = n4;
	}
	max = max2;
	if (max1 > max2) {
		max = max1;
	}
	min = min1;
	if (min1 > min2) {
		min = min2;
	}
	printf("Numero minimo = %d; numero massimo = %d", min, max);
salta_4numeri: ;


goto salta_inventario;
//~ // INVENTARIO TABULAZIONE
	int articolo = 0;
	float prezzo = 0;
	int giorno = 0;
	int mese = 0;
	int anno = 0;
	
	printf("Inserisci il codice dell'articolo: ");
	scanf("%d", &articolo);
	printf("Digita il prezzo unitario: ");
	scanf("%f", &prezzo);
	printf("Digita la data di acquisto nel formato gg/mm/aaaa: ");
	scanf("%d/%d/%d", &giorno, &mese, &anno);
	printf("Art.\tPrezzo\tData di\n\tcad.\tacquisto\n");
	printf("%d\t%.2f\t%d/%d/%d", articolo, prezzo, giorno, mese, anno);
salta_inventario: ;

goto salta_isbn;
//~ // ISBN
	int gs1 = 0;
	int groupIdentifier = 0;
	int publisherCode = 0;
	int itemNumber = 0;
	int checkDigit = 0;
	
	printf("Digita l'ISBN nel formato xxx-x-xxx-xxxxx-x: ");
	scanf("%d-%d-%d-%d-%d", &gs1, &groupIdentifier, &publisherCode, &itemNumber, &checkDigit);
	printf("GS1: %d\n", gs1);
	printf("Group Identifier: %d\n", groupIdentifier);
	printf("Publisher Code: %d\n", publisherCode);
	printf("Item Number: %d\n", itemNumber);
	printf("Check Digit: %d\n", checkDigit);
salta_isbn: ;

goto salta_converti_telefono;
//~ // CONVERTI NUMERO TELEFONICO
	int prefisso = 0;
	int codiceArea = 0;
	int numeroTelefono = 0;
	
	printf("Digita il numero telefonico nel formato '(xxx) xxx-xxxx': ");
	scanf("( %d ) %d - %d", &prefisso, &codiceArea, &numeroTelefono);
	printf("Il numero inserito è: %d.%d.%d", prefisso, codiceArea, numeroTelefono);
salta_converti_telefono: ;

goto salta_quadrato_magico;
//~ // STAMPA QUADRATO MAGICO
	printf("Digita i numeri da 1 a 16 separati da spazi in qualsiasi ordine: ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);
	printf("\n%2d  %2d  %2d  %2d\n", n1, n2, n3, n4);
	printf("%2d  %2d  %2d  %2d\n", n5, n6, n7, n8);
	printf("%2d  %2d  %2d  %2d\n", n9, n10, n11, n12);
	printf("%2d  %2d  %2d  %2d\n", n13, n14, n15, n16);
	printf("Somma delle righe:\t %2d %2d %2d %2d\n", n1 + n2 + n3 + n4, n5 + n6 + n7 + n8, n9 + n10 + n11 + n12, n13 + n14 + n15 + n16);
	printf("Somma delle colonne:\t %2d %2d %2d %2d\n", n1 + n5 + n9 + n13, n2 + n6 + n10 + n14, n3 + n7 + n11 + n15, n4 + n8 + n12 + n16);
	printf("Somma delle diagonali:\t %2d %2d\n", n1 + n6 + n11 + n16, n4 + n7 + n10 + n13);
salta_quadrato_magico: ;


goto salta_formattazione;
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
salta_formattazione: ; // dopo una label deve esserci uno statement e non una declaration

goto salta_scanf;
// ANALISI SCANF
	int sc1, sc2, sc5, sc7;
	float sc3, sc4, sc6;
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

goto salta_frazioni_2;
// ANALISI SCANF
	int nomin1a, nomin2a, denom1a, denom2a;
	printf("\n\nDigita 2 frazioni separate da virgole (es. 7/8+4/9): ");
	scanf("%d / %d + %d / %d", &nomin1a, &denom1a, &nomin2a, &denom2a);
	printf("\nRisultato: %d/%d", nomin1a * nomin2a, denom1a * denom2a);
salta_frazioni_2: ;

goto salta_data1;
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
salta_banconote: ; 

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
