int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    string s;
    cin >> s;

    int n = s.size();

    // 最終状態で残る文字列の数の遇奇は、先頭と末尾が同じかどうかのみで決まる
    int end_num = (s[0] == s.back()) ? 1 : 2;

    // 消せる文字の数が奇数だったら、先手の勝ち
    if ((n - end_num) % 2 == 1){
        print("First");
    }