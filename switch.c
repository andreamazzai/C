/*
 * 
 * 
 */

#include <stdio.h>
//~ #include <string.h>
//~ #include <stdlib.h>

int main() {
	int option;
	char option_str[10];
	
	printf("Enter 1 for EN, 2 for SP, 3 for FR: \n");
	fgets(option_str, sizeof(option_str), stdin);
	option = atoi(option_str);
	
	switch(option) {
		case 1 :
			printf("Hello!\n");
			break;
		case 2 :
			printf("Hola!\n");
			break;
		case 3 :
			printf("Bonjour!\n");
			break;
		default :
			printf("None of these!\n");
			break;
		}
	}
