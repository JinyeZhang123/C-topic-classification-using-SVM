template <typename T>
class queue{
public :
	const static int LEN = 1000000;
	queue<T>(){
		head = tail = 0;
	}