template<typename T, size_t N>
void sort_array(std::array<T, N>& array)
{
	int temp = 0;
	for (unsigned long i = 0; i < array.size(); ++i)
	{
		temp = array[i];
		for (unsigned long j = i; j < array.size(); ++j)
		{
			if (temp < array[j])
			{
				std::swap(array[j], temp);
			}