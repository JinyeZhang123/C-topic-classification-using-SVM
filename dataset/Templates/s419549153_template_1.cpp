template<class V> class BIT {
private:
	int n;
	vector<V> bit;

public:
	void add(int i,V x)
	{
		while(i <= n){
			bit[i] += x;
			i += i & -i;
		}