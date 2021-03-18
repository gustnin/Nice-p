void	make_default_result_array(int *inputs, int *result)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (inputs[i][j] == 4)
	{
		if (j = 0)
		{
			while (result[k][i])
			{
				result[k][i] = k+1;
				k++;
			}
		else if (j = 1)
		{
			result[3][i] = 1;
			result[2][i] = 2;
			result[1][i] = 3;
			result[0][i] = 4;
		}
		i++;
		if (i = 7)
		{
			j++;
			i = 0;
		}
	}
}
