template<typename V,typename Weight>
class Dijekstra { // 普通のダイクストラ(重みが小数も可)
private:
	typedef pair<Weight,V> P;
	vector<vector<pair<V,Weight>>> E;
	V const sz;
public:
	Weight const inf = numeric_limits<Weight>::max();
	vector<Weight> D;
	Dijekstra(V v) :
		E(v),sz(v),D(v,inf) {}