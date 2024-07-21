int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    int N;
    cin >> N;
    vector<int> a(N);
    for(int i = 0; i < N; i++)
        cin >> a[i];

    map<int, int> mp;
    for(int i = 0; i < N; i++)
        mp[a[i]]++;

    int ans = 0;
    for(auto p : mp) {
        int x = p.first;
        int n = p.second;
        if(n < x)
            ans += n;
        else
            ans += n - x;
    }