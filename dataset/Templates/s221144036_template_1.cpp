template<class T>
class seg_tree{
private:
	vector<T> dat; ll n, max_value;
	void propagate(ll i){
		dat[i] = min(dat[i * 2 + 1], dat[i * 2 + 2]);
	}