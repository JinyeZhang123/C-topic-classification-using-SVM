template <typename T>
class SegmentTree {
private:
	using Ft = std::function<T(T, T)>;

	std::vector<T> container_;
	Ft operate_, assign_;
	T identity_;
	void build(const unsigned int array_size)
	{
		unsigned int length{1}