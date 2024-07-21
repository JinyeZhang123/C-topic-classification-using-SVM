int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    ll A, V;
    cin >> A >> V;
    ll B, W;
    cin >> B >> W;
    ll T;
    cin >> T;
    if (T * (V - W) >= abs(A - B)){
        print("YES");
    }