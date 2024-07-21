int main()
{
    //ifstream fin("frac1.in");
	//ofstream fout("frac1.out");
	int t;
	cin >> t;
	while (t--){
        int n;
        cin >> n;
        ll ans = 0;

        vector<pair<ll, int>> lc;
        vector<pair<ll, int>> rc;

        for (int i = 0; i < n; i++){
            int k;
            ll l, r;
            cin >> k >> l >> r;

            // more valuable to be on left side
            if (l > r){
                // increment ans by the lowest value it could take on
                ans += r;
                // save it to the left values vector
                lc.push_back({l-r, k}