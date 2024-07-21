int main() {
	ifstream fin("in.txt");

	string in;
	stack<int> s;

	int ans = 0;

	while (cin >> in){
		if(in == "+") {
			ans = getTop(s) + getTop(s);
			s.push(ans);
		}