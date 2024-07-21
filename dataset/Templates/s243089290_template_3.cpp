template<typename V,typename Weight>
class DijekstraTrace {
private:
	struct edge {
		Weight dist;V node;V prev;
		bool operator<(edge const& a) const {
			return dist < a.dist;
		}