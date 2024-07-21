template<typename T>
class MaxHeap{
private:
	vector<T> d;
public:
	void push(T t){
		d.push_back(t);
	}