template <typename T>
struct range_add_range_sum{
	int N;
	vector<T> ST;
	vector<T> lazy;
	range_add_range_sum(int n){
		N = 1;
		while (N < n){
			N *= 2;
		}