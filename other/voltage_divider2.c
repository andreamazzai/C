#include <stdio.h>
#include <stdlib.h>

#define	R2min 25.0
#define	R2max 75.0
#define	Npts 20

double	Pmax = 0;
int imax;

double power(double R, double I) {
	double P;
	P = I * I * R;
	return(P);
	}
	
int max(double Pwr, int i) {
	//~ double Pmax;
	if (Pmax < Pwr) {
			Pmax = Pwr;
			imax = i;
			}		
	//~ Return(imax);	
	}

int main() {
	double	R2array[Npts];
	double	Ic[Npts];
	double	Vout[Npts];
	double	Pwr[Npts];
	double	Rstep = (R2max - R2min) / (Npts -1);
	double	Vcc;
	double	R1 = 50;
	char	Vcc_str[10];
	char	R1_str[10];

	printf("\n +=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+ \n\n");
	
	printf("Enter a value for Vcc\n");
	fgets(Vcc_str, sizeof(Vcc_str), stdin);
	Vcc = atof(Vcc_str);
	printf("You entered %f\n", Vcc);

	printf("\nEnter a value for R1\n");
	fgets(R1_str, sizeof(R1_str), stdin);
	R1 = atof(R1_str);
	printf("You entered %f\n", R1);
	
	printf("\n +=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+ \n\n");
		
	for (int i = 0; i < Npts; i = i + 1) {
		R2array[i] = (R2min + Rstep * i);
		Ic[i] = Vcc / (R1 + R2array[i]);
		Vout[i] = Vcc * R2array[i] / (R1 + R2array[i]);
		Pwr[i] = power(R2array[i], Ic[i]); // calcolo P passando R e I alla funzione "power"
		max(Pwr[i], i);

		printf("#%2d - R2 = %.2f Ohms; Ic = %.2f Amps; Vout = %.2f Volts; Pwr = %.3f Watts\n",i + 1, R2array[i], Ic[i], Vout[i], Pwr[i]);
		}

	printf("\n +=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+ \n\n");
	printf("Indice massimo = %d\n", imax);
	printf("Pmax = %f\n\n", Pmax);

	}
