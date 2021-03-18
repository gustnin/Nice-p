#include <unistd.h>

void	result_init(int *result)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (result[i][j])
	{
		result[i][j] = '0';
		j++;
		if (j = 3)
		{
			i++;
			j = 0;
		}
	}
}

void	result_4(int *inputs, int *result)
{
	if (inputs[0][0] == 1 || inputs[4][0] == 1)
		result[0][0] = 4;
	else if (inputs[3][1] == 1 || inputs[7][1] == 1)
		result[3][3] = 4;
	else if (inputs[0][1] == 1 || inputs[7][0] == 1)
		result[3][0] = 4;
	else if (inputs[3][0] == 1 || inputs[4][1] == 1)
		result[0][3] = 4;
	else if (inputs[1][0] == 1)
		result[0][1] = 4;
	else if (inputs[1][1] == 1)
		result[3][1] = 4;
	else if (inputs[2][0] == 1)
		result[0][2] = 4;
	else if (inputs[2][1] == 1)
		result[3][2] = 4;
	else if (inputs[5][0] == 1)
		result[1][0] = 4;
	else if (inputs[5][1] == 1)
		result[1][3] = 4;
	else if (inputs[6][0] == 1)
		result[2][0] = 4;
	else if (inputs[6][1] == 1)
		result[2][3] = 4;
}

void result _1234(int *inputs, int *result)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (inputs[I][j] == 4)
		if (j == 0)
		{
			result[0][i] = 1;
			result[1][i] = 2;
			result[2][i] = 3;
			result[3][i] = 4;
		}
		else if (j == 1)
		{
			result[3][i] = 1;
			result[2][i] = 2;
			result[1][i] = 3;
			result[0][i] = 4;
		}
}

void	make_default_result_array(int *inputs, int *result)
{
	int I;
	int j;

	I = 0;
	j = 0;
	while (inputs[I][j])
	{
		result_1234(inputs, result);

		result_4(inputs, result);
		I++;
			if (i = 7)
			{
				j++;
				i = 0;
			}
	}
}


void print_result(int *result)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (result[i][j])
	{
		while (j <= 3)
		{
			write(1, &result[i][j], 1);
			write(1, " ", 1);
			j++;
		}
		j = 0;
		i++;
		write("1,"\n", 1);
	}
}
