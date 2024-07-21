int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
#ifdef LOCAL
	std::ifstream in("in");
	std::cin.rdbuf(in.rdbuf());
#endif

	int N;
	cin >> N;
	for(int i = 0; i < N; i++){
		cin >> d[i];
	}