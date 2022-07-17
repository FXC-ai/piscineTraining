void ft_swap(int *a, int *b)
{
	int a_temp = *a;
	int b_temp = *b;
	*a = b_temp;
	*b = a_temp;
}
