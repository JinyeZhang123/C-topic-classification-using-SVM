template <typename Type>
long long Maximum_Sum_Sequence(Type N[], int size)
{
	long long max = LLONG_MIN;

	for (int i = 0; i < size; i++)
	{
		long long sum = 0;

		for (int j = i; j < size; j++)
		{
			sum += N[j];

			if (sum > max) { max = sum; }