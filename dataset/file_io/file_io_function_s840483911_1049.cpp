int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int X, A, B;
    cin >> X >> A >> B;

    if (B <= A){
        print("delicious");
    }