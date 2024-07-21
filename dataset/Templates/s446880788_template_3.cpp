template <typename T, typename Operation_t, typename Update_t>
decltype(auto) makeSegmentTree(const std::vector<T> &array, Operation_t operate, Update_t assign, T identity)
{
	return SegmentTree<T, Operation_t, Update_t>(array, operate, assign, identity);
}