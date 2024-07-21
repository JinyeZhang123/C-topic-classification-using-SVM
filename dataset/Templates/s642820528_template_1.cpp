template <class T>
class mpq
{
private:
	int* st;
	int si;
	int stb;
	T* d;
	void kou(int a);
public:
	mpq();
	int size();
	T top();
	void push(T a);
	void pop();
	void del();
	void reset();
	~mpq();
}