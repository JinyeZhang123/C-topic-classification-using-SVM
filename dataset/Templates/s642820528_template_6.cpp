template <class T>
void mpq<T>::push(T a)
{
	if(stb >= si)
	{
		si += 10000;
		st = (int*)realloc(st,si * sizeof(int));
		d = (T*)realloc(d,si * sizeof(T));
	}