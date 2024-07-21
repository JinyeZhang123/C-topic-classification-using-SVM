template <class T> ostream & operator << (ostream &out, const iter_pair_t<T> &v)
{
	std::copy(v.beg, v.end, ostream_iterator<typename decltype(v.beg)::reference>(out, " "));
	return out;
}