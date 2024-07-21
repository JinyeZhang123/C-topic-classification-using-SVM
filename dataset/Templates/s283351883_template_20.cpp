template <class T, class TUpdator = const T&(*)(const T&, const T&)>
RangeSegTreeT<T, TUpdator> RangeSegTree(int n, TUpdator updator = min<T>, int initialValue = INF)
{
	return RangeSegTreeT<T, TUpdator>(n, updator, initialValue);
}