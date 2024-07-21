template <class T>
void mpq<T>::reset()
{
	del();
	si = 10000;
	stb = 0;
	st = (int*)malloc(si * sizeof(int));
	d = (T*)malloc(si * sizeof(T));
}