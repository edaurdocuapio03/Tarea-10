#include <stdio.h> 

void main(void)
{
	int A, H, esqX, esqY, esqiX, esqiY;
	float coordX, coordY, AE, HE;

	scanf_s("%i %i %f %f %f %f", &A, &H, &coordX, &coordY, &AE, &HE);
	
	esqX = A * coordX;
	esqY = H * coordY;
	esqiX = esqX + A * AE;
	esqiY = esqY + H * HE;

	printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", A, H, coordX, coordY, AE, HE, esqX, esqY, esqiX, esqiY);

}