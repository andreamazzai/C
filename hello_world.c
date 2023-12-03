/*
 * hello_world.c
 * 
 * 
 * 
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	printf("Hello World!\n");
	printf("My name is Andrea... part 1\n");

	printf("\n +=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+ \n\n");
	
	int a;
	int b = 65536;
	float c = 126.9;
	float d = 3.1415;
	float e = 100000.5;
	double f = -22.12345678901234567890;

	printf("a = %d, b = %d, c = %d\n", a, b, c);
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	printf("a in decimale = %d\n", a);
	printf("b in decimale = %d\n", b);
	printf("c in decimale = %d\n", c);
	printf("c in float = %f\n", c);
	printf("c in float 7.3  = %7.3f\n", c);
	printf("c in float 7.4  = %7.4f\n", c);
	printf("c in float 8.3  = %8.3f\n", c);
	printf("c in float 8.4  = %8.4f\n", c);
	printf("c in float 15.2 = %15.2f\n", c);
	printf("c in float 11.2 = %11.2f\n", c);
	printf("c in float 10.2 = %10.2f\n", c);
	printf("c in float 7.2  = %7.2f\n", c);
	printf("c in float 6.2  = %6.2f\n", c);
	printf("c in float 5.2  = %5.2f\n", c);
	printf("c in float 4.2  = %4.2f\n", c);
	printf("c in float 3.2  = %3.2f\n", c);
	printf("c in float 3.1  = %3.1f\n", c);
	printf("c in float 2.1  = %2.1f\n", c);
	printf("c in float 5.0  = %5.0f\n", c);
	printf("c in float 4.1  = %4.1f\n", c);
	
	printf("\n +=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+ \n\n");

	printf("E se voglio stampare il simbolo della percentuale... devo fare escape col simbolo stesso, dunque ad esempio:\n\n  \'printf(\"mio testo con %%%\", espressione)\'\n");
	printf("\n  ... se applico il 15%% viene fuori... %d\n", a);

	printf("\n +=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+ \n\n");

	printf("My name is Andrea... part 2\n");

	printf("d = %2.3f", d);
	printf("\n");

	printf("e \"float  \" = %2.3f \n", e);
	printf("f in testo  	 = -22.12345678901234567890\n");
	printf("f in double 	 = %f\n", f);
	printf("f in double 2.8	 = %2.8f\n", f);
	printf("f in double 2.16 = %2.16f\n", f);

	printf("\n +=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+ \n\n");
	int n = -26;
	printf("intero n definito = -26\n");
	printf("n come int        = %d\n", n);
	printf("n come unsigned   = %u\n", n);

	printf("\n +=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+ \n\n");

	char g = 'c';
	char h = 'a';
	char j = 'z';
	char k = 'z';
	char l = 'o';
	
	printf("- g = %c -\n- h = %c -\n- j = %c -\n- k = %c -\n- l = %c -\n", g, h, j, k, l);

	printf("\n");
	
	char string1[12] = "Hello World";
	char string2[100];
	char string3[50];
	char string4[50];
	char string5[50];
	char string6[10];
	
	printf("string1 = %s\n", string1);
	
	strcpy(string2,string1); // copia string1 in string2
	printf("string2 = %s\n", string2);
	
	strcpy(string3,string2);
	strcat(string3, ", mi chiamo Andrea :-D"); // concatena string3 e ", mi chiamo Andrea :-D"
	printf("string3 = %s\n", string3);
	
	printf("\n\nE ora... qual è il tuo nome?\n");
	fgets(string4,100,stdin); // input di una stringa
	printf("Credo che il tuo nome sia %s \n", string4);

	printf("Dove sei nato?\n");
	fgets(string5,sizeof(string5),stdin);
	int luncity = sizeof(string5);	
	printf("Credo che tu sia nato a %s che è lunga %d\n", string5, luncity);
	
	printf("Digita il cAP\n");
	fgets(string6,sizeof(string6),stdin);
	int cap;
	cap = atoi(string6); // converte stringa in intero
	printf("Il tuo CAP (\"integer\") è %d\n", cap);

	printf("Digita un numero double (\"real number\")\n");
	fgets(string4,sizeof(string4),stdin);
	f = atof(string4); // posso riutilizzare una variabile float già usata in passato
	printf("Il tuo numero reale \"double\" è %f\n", f);

	printf("Recap: nato a %s, CAP %d, real# %f", string5, cap, f);

	printf("\n");
	
	return 0;
}
