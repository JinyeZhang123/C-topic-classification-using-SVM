template<typename T> class Fenwick{
	public:
		int size;vector<T> bit;
		Fenwick():Fenwick(0){}