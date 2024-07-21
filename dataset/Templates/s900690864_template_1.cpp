template <typename T>
struct range_update_range_min{
	int N;
	vector<T> ST;
	vector<T> lazy;
	range_update_range_min(int n){
		N = 1;
		while (N < n){
			N *= 2;
		}