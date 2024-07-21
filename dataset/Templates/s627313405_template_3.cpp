template<class T>
class my_stack{
private:
	size_t cAlloc = 0;
	int sp = 0;
	T* arr;
public:
	my_stack(size_t size) {
		cAlloc = size;
		arr = new T[cAlloc];
	}