int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fastio
	//ifstream cin (".in");
	//ofstream cout (".out");
    ll a,b;
    cin >> a >> b;
    a%=b;
    cout << min(a,b-a) << '\n';
}