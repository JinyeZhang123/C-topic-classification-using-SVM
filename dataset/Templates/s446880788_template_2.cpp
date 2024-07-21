template <typename T, typename Operation_t, typename Update_t>
decltype(auto) makeSegmentTree(const unsigned int array_size, Operation_t operate, Update_t assign, T identity)
{
	return SegmentTree<T, Operation_t, Update_t>(array_size, operate, assign, identity);
}