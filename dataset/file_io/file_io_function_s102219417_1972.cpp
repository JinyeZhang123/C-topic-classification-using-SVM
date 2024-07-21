int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    string s;
    cin >> s;
    sort(s.begin(), s.end());
    if(s == "abc")
        cout << "Yes";
    else
        cout << "No";

    return 0;
}