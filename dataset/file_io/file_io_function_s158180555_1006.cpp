int main() {

//    ifstream infile("C:\\Users\\riku\\Downloads\\in1.txt");

    ll n;
    cin >> n;
    vector<ll> numbers(n);
    rep(i, n) cin >> numbers[i];
    ll sum = accumulate(numbers.begin(), numbers.end(), 0ll);
    vector<ll> cs(n, 0), rt(n, 0);
    ll one = n * (n + 1) / 2;
    if (sum % one != 0) {
        cout << "NO" << endl;
        ret();
    }