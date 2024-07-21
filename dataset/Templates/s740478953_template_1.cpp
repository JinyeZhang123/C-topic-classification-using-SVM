template <class T> class Queue
{
private:
	vector<T> q;
	int head;
	int tail;
	bool is_full;
	bool is_empty;
public:
	Queue(int n)
	{
		q.resize(n);
		head = 0;
		tail = 0;
		is_full = false;
		is_empty = true;
	}