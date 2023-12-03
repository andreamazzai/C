#include <stdio.h>
#include <stdlib.h>

#define R2min 25.0
#define R2max 75.0
#define Npts 20

int main() {
	double R2array[Npts];
	double Ic[Npts];
	double Vout[Npts];
	double Pwr[Npts];
	double Rstep = (R2max - R2min) / (Npts -1);
	double Vcc = 9.0;
	double R1 = 50;

	printf("\n +=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+ \n\n");
	
	for (int i = 0; i < Npts; i = i + 1) {
		R2array[i] = (R2min + Rstep * i);
		//~ printf("Contatore = %2.0d - valore = %1.2f\n", i + 1, R2array[i]);
		Ic[i] = Vcc / (R1 + R2array[i]);
		Vout[i] = Vcc * R2array[i] / (R1 + R2array[i]);
		Pwr[i] = Vout[i] * Ic[i];
		printf("#%2d - R2 = %.2f Ohms; Ic = %.2f Amps; Vout = %.2f Volts; Pwr = %.3f Watts\n",i + 1, R2array[i], Ic[i], Vout[i], Pwr[i]);
		}
	
	//~ printf("Enter Voltage\n");
	//~ fgets(V_str, sizeof(V_str), stdin);
	//~ v = atof(V_str);
	
	//~ printf("Enter Resistance\n");
	//~ fgets(R_str, sizeof(R_str), stdin);
	//~ r = atof(R_str);
	
	//~ printf("Voltage entered = %s Volts\n", V_str);
	//~ printf("Resistance entered = %s Ohms\n", R_str);
	
	//~ i = v / r;
	//~ w = v * i;
	//~ printf("Current = %5.3fA\n", i);
	//~ printf("Power   = %5.3fW\n", w);
	
	printf("\n +=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+ \n\n");

	//~ for (double i = R2min; i = R2max; i = i + ((R2max - R2min) / (Npts -1))) {
		//~ printf("Valore = %.2f\n", i);
		//~ }
	}

	//~ printf("\n +=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+ \n\n");

/*
 * Prompt for voltage
 * Prompt for resistance
 * Calculate current
 * Calculate Power
 * Print voltage, resistance, current and power * 
 * */
