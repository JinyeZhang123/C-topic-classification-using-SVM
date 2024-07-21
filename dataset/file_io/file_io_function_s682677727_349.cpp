int main() 
{
#if 0
    ifstream cin("A.in");
    ofstream cout("A.out");
#endif
   	int i, j, n;
    //ios::sync_with_stdio(false);
    //cin.tie(0), cout.tie(0);

	cin >> n;

	vector <int> pos(n), sol(2 * n + 1, -1);
	iota(pos.begin(), pos.end(), 1);
	bool a = ask(pos);
	bool b = (a ^ 1);

	int l = 1, r = n + 1;
	while(l + 1 < r) 
	{
		int mid = (l + r) / 2;
		iota(pos.begin(), pos.end(), mid);
		if(ask(pos) == a)
			l = mid;
		else
			r = mid;
	}