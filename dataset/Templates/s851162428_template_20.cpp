template <class TUpdater, class TResolver, class TAccumulator>
	static auto RangeSegTree(int n, TUpdater upd, TResolver res, TAccumulator acm, T initial)
	{
		return Tree<TUpdater, TResolver, TAccumulator>(n, upd, res, acm, initial);
	}