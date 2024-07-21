int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fastio
	//ifstream cin (".in");
	//ofstream cout (".out");
	ll A, V;
    cin >> A >> V;
    ll B,W;
    cin >> B >> W;
    ll T;
    cin >> T;
    ll D=abs(A-B);
    ll D2=(V-W)*T;
    puts(D<=D2?"YES":"NO");

}