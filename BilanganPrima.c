#include <stdio.h>
#include <conio.h>
#include <math.h>


int ApakahPrima(int N) 
{
	int LI;

	if (N == 2)
	{
		return 1;
	} 

	if (N % 2 == 0 || N == 1)
	{
		return 0;
	}

	for (LI = 3; LI <= sqrt(N); LI += 2)
	{
		if (N % LI == 0)
		{
			return 0;
		}
	}

	return 1;
}

void main() 
{
	int Z;
	printf("Bilangan Prima dari 1 sd 100 : \n");

	for (Z = 1; Z <= 100; Z++)
	{
		if (ApakahPrima(Z))
		{
			printf("%3d\n", Z);
		}
	}

	_getch();
}