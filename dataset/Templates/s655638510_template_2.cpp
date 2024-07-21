template<class T, class U>
struct RMQ_RUQ {
	struct RMQ {
		const static T UNITY = numeric_limits<T>::max();
		T val;
		explicit RMQ(T v) : val(v) {}