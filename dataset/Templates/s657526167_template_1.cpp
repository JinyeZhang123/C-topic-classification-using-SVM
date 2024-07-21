template <class Data, class Operator>
class LazySegmentTree
{
	int size_, height_;

	// (Data, F) is a monoid.
	std::vector<Data> data_;
	using F = std::function<Data(Data, Data)>;
	const F f_;
	const Data data_id_;

	// This is operation.
	using G = std::function<Data(Data, Operator)>;
	const G g_;

	// (Operator, H) is a monoid.
	std::vector<Operator> lazy_;
	using H = std::function<Operator(Operator, Operator)>;
	const H h_;
	const Operator operator_id_;

	void init(int num)
	{
		size_ = 1;
		height_ = 0;
		while (size_ < num)
		{
			size_ <<= 1;
			++height_;
		}