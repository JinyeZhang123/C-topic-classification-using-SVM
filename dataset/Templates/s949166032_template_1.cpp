template <typename T>
struct range_add_point_value{
	int N;
	vector<T> ST;
	range_add_point_value(int n){
		N = 1;
		while (N < n){
			N *= 2;
		}