template <class T>
bool same(const vector<T>& a, const vector<T>& b)
{
	if (a.size() != b.size())
		return false;
	for (int i = 0; i < a.size(); ++i)
		if (!(a[i] == b[i]))
			return false;
	return true;
}