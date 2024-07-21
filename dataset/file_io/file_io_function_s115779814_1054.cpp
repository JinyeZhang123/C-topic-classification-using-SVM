int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    string S;
    cin >> S;
    print(S.substr(0, 3));

    return 0;
}