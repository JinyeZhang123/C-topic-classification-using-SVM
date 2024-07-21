template <class T> inline ostream & operator << (ostream &out, vector<T> &v)
{
	ostringstream ss;
	for (auto x : v) ss << x << ' ';
	auto s = ss.str();
	out << s.substr(0, s.length() - 1) << endl;
	return out;
}