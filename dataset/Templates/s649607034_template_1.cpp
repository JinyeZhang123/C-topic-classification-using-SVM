template<typename T = int64_t>
class Matrix {
private:
	class RowVector {
	private:
		std::vector<T> container_;
	
	public:
		RowVector(const int column_size)
			: container_(column_size){}