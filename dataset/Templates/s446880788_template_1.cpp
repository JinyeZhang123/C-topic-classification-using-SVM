template <typename T, typename Operation_t, typename Update_t>
class SegmentTree {
private:

	std::vector<T> container_;
	// モノイドの演算
	Operation_t operate_;
	// 更新する値を返す
	Update_t assign_;
	// モノイドの単位元
	T identity_;

	void build(const unsigned int array_size)
	{
		unsigned int length{1}