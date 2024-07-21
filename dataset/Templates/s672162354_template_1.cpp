template<class T>
class segtree{
private:
	vector<T> dat;
	vector<T> lazy;
	int _size;  //the number of leaves
	T _init;
	
public:
	segtree(int __size=0 , T init=numeric_limits<T>::max() ):_size(__size), _init(init), dat(4*__size,init), lazy(4*__size,init){
		if(__size==0)return ;
		int x=1;
		while(x<_size)x*=2;
		_size = x;
	}