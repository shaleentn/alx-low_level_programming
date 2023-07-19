#include <stdio.h>

/**
  *main - main function
  *Return: always 0
  */
int main(void)
{
	int count;
	unsigned long n1 = 0, n2 = 1, sum;
	unsigned long n1_half1, n1_half2, n2_half1, n2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = n1 + n2;
		printf("%lu, ", sum);

		n1 = n2;
		n2 = sum;
	}
	n1_half1 = n1 / 10000000000;
	n2_half1 = n2 / 10000000000;
	n1_half2 = n1 % 10000000000;
	n2_half2 = n2 % 10000000000;
	for (count = 93; count < 99; count++)
	{
		half1 = n1_half1 + n2_half1;
		half2 = n1_half2 + n2_half2;
		if (n1_half2 + n2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");
		n1_half1 = n2_half1;
		n1_half2 = n2_half2;
		n2_half1 = half1;
		n2_half2 = half2;
	}
	printf("\n");
	return (0);
}
