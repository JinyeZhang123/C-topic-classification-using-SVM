int main()
{

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif

    int n, k, l, counter;
    cin >> n >> k;
    ll s, ans, a[n], a_sum[n+1], m, p;
    vector<ll> number, new_number;
    s = 0;
    a_sum[0] = 0;
    rep(i, n){
        cin >> a[i];
        s += a[i];
        a_sum[i+1] = s;
    }