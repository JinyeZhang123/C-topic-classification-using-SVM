template <typename T>
class RingBuffer {
	int size;
	int idx;
	T* arr;
	T& at(int i) {
		return arr[i % size];
	}