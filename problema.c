#include <stdio.h>
#include <math.h>

void colocarNoVetor(int n, int vet[50])
{
	int i;
	for (i = 0; i < 50; i++)
	{
		if (vet[i] == 0)
		{
			vet[i] = n;
			break;
		}
	}
}

void emQualCartela(int n, int c1[50],int c2[50],int c3[50],int c4[50],int c5[50],int c6[50],int c7[50])
{
	int i;
	int temp = n;	
	for (i = 6; i >= 0; i--)
	{
		if (temp >= pow(2, i))
		{
			switch (i)
			{
				case 6:
					colocarNoVetor(n, c7);
					break;
				case 5:
					colocarNoVetor(n, c6);
					break;
				case 4:
					colocarNoVetor(n, c5);
					break;
				case 3:
					colocarNoVetor(n, c4);
					break;
				case 2:
					colocarNoVetor(n, c3);
					break;
				case 1:
					colocarNoVetor(n, c2);
					break;
				case 0:
					colocarNoVetor(n, c1);
					break;
			}
			temp -= pow(2, i);
		}
		
	}
}

void zero(int vet[50])
{
	int i;
	for (i = 0; i < 50; i++)
	{
		vet[i] = 0;
	}
}

void ler(int vet[50])
{
	int i;
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf(" %2d %2d %2d %2d %2d\n", vet[i], vet[i + 10], vet[i + 20], vet[i + 30], vet[i + 40]);
	}
	printf("\n");
}



int main(void)
{
	int j;
	
	int c1[50];
	zero(c1);
	int c2[50];
	zero(c2);
	int c3[50];
	zero(c3);
	int c4[50];
	zero(c4);
	int c5[50];
	zero(c5);
	int c6[50];
	zero(c6);
	int c7[50];
	zero(c7);	
	
	for (j = 1; j <= 99; j++)
	{
		emQualCartela(j, c1,c2,c3,c4,c5,c6,c7);
	}	
	
	printf("CARTELA 01: \n");
	ler(c1);
	printf("CARTELA 02: \n");
	ler(c2);
	printf("CARTELA 04: \n");
	ler(c3);
	printf("CARTELA 08: \n");
	ler(c4);
	printf("CARTELA 16: \n");
	ler(c5);
	printf("CARTELA 32: \n");
	ler(c6);
	printf("CARTELA 64: \n");
	ler(c7);
	
	return 0;
}
