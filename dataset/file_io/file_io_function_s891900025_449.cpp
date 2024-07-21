int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
#ifdef _WIN32
	istream &cin = ifstream("input.txt");
#endif

	stack<int> S;
	string tmp;
	int pop1, pop2;
	while (cin >> tmp){
		if (tmp == "+"){
			pop1 = S.top();
			S.pop();
			pop2 = S.top();
			S.pop();
			S.push(pop1 + pop2);
		}