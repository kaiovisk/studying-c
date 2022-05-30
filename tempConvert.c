#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main (int argc, char *argv) 
{
	float fahr, celsius;
	
	for (fahr = LOWER; fahr <= UPPER; fahr += STEP) 
	{
		celsius = (5.0/9.0)*(fahr-32);
			printf("%.2f\t%.2f\n", celsius, fahr);
	}

	return 0;
}
