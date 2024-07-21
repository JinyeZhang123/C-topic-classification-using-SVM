template <class T>
void mpq<T>::pop()
{
	if(stb > 1)
	{
		if(st[0] != stb - 1)
		{
			d[st[0]] = d[stb - 1];
			int w = st[0];
			st[w] = -1;
			stb--;
			kou(w);
			kou((stb - 1) / 2);
		}