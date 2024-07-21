template<class T, class U>
void convert(T &t, U &u)
{
	stringstream ss;
	ss << t;
	ss >> u;
}