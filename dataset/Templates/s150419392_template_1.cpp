template <typename T>
struct range_update_point_value{
	int N;
	vector<pair<T, int>> ST;
	int t;
	range_update_point_value(int n){
		N = 1;
		while (N < n){
			N *= 2;
		}