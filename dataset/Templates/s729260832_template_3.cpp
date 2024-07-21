template <class T>ostream &operator<<(ostream &o, const vector<T>&v)
{
	o << "{"; for (int i = 0; i<(int)v.size(); i++)o << (i>0 ? ", " : "") << v[i]; o << "}