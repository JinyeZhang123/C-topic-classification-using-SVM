void solve()
{
    // remove the bottom 3 lines when you submit this code.
    std::ifstream in("./sample.txt");
    std::cin.rdbuf(in.rdbuf());

    cin.tie(0);
    ios::sync_with_stdio(false);

    int x, y, z, k;
    cin >> x >> y >> z >> k;
    vector<int> A(x), B(y), C(z);
    rep(i, x) cin >> A[i];
    rep(i, y) cin >> B[i];
    rep(i, z) cin >> C[i];

    sort(rALL(A));
    sort(rALL(B));
    sort(rALL(C));

    map<string, bool> mp;

    priority_queue<pair<int, vector<int>>> pq;
    vector<int> a(3, 0);
    mp["0+0+0"] = true;
    pq.push(make_pair(A[0] + B[0] + C[0], a));

    int cnt = 0;
    while (cnt < k)
    {
        auto now = pq.top();
        pq.pop();
        int score = now.first;
        vector<int> index = now.second;
        if (index[0] < x - 1)
        {
            vector<int> vec(3);
            vec[0] = index[0] + 1;
            vec[1] = index[1];
            vec[2] = index[2];
            string key = "";
            key += to_string(vec[0]);
            key += '+';
            key += to_string(vec[1]);
            key += '+';
            key += to_string(vec[2]);
            if (mp[key] == false)
            {
                pq.push(make_pair(A[vec[0]] + B[vec[1]] + C[vec[2]], vec));
                mp[key] = true;
            }