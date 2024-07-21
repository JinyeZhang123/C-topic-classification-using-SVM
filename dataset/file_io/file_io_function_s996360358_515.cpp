int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
#ifdef _WIN32
	istream &cin = ifstream("input.txt");
#endif

	queue<task> Q;
	int n, quantum, sum = 0;

	cin >> n >> quantum;
	string tmp1, tmp2;
	rep(i, n){
		cin >> tmp1 >> tmp2;
		Q.push({ tmp1, stoi(tmp2) }