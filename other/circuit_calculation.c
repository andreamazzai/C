#include <stdio.h>
#include <stdlib.h>

int main() {
	char V_str[10];
	char R_str[10];	
	double v;
	double r;
	double i;
	double w;
	
	printf("Enter Voltage\n");
	fgets(V_str, sizeof(V_str), stdin);
	v = atof(V_str);
	
	printf("Enter Resistance\n");
	fgets(R_str, sizeof(R_str), stdin);
	r = atof(R_str);
	
	printf("Voltage entered = %s Volts\n", V_str);
	printf("Resistance entered = %s Ohms\n", R_str);
	
	i = v / r;
	w = v * i;
	printf("Current = %5.3fA\n", i);
	printf("Power   = %5.3fW\n", w);
	}


/*
 * Prompt for voltage
 * Prompt for resistance
 * Calculate current
 * Calculate Power
 * Print voltage, resistance, current and power * 
 * */
