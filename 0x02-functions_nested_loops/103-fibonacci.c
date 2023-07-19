# include <stdio.h>
/**
  *main - main function
  *
  * Return: always 0
  */
int main(void)
{
	unsigned long fibo1 = 0, fibo2 = 1, sum;
	float total_sum;

	while (1)
	{
		sum = fibo1 + fibo2;
		if (sum > 4000000)
		break;

		if ((sum % 2) == 0)
			total_sum += sum;

		fibo1 = fibo2;
		fibo2 = sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
