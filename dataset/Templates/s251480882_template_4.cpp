template <class T>ostream& operator<<(ostream& o, const vector<T>& v)
{
	for (int i = 0; i < (int)v.size(); i++)o << (i > 0 ? " " : "") << v[i]; return o;
}