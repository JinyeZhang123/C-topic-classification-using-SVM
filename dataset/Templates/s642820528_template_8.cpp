template <class T>
void mpq<T>::del()
{
	if(si != 0)
	{
		free(st);
		free(d);
		si = 0;
		stb = 0;
	}