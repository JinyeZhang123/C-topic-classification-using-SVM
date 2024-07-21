int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int A, B, C;
    cin >> A >> B >> C;

    if (C >= A && C <= B){
        print("Yes");
    }