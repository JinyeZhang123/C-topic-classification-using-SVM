template<typename V,typename Weight>
class Dijekstra { // 普通のダイクストラ(重みが小数も可)
private:
	typedef pair<Weight,V> P;
	struct edge {
		Weight dist;V node;V prev;
		bool operator<(edge const& a) const {
			return dist < a.dist;
		}