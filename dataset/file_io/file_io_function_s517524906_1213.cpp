int main(int argc, char* argv[])
{
#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    // std::ifstream in(argv[1]);
    //std::cin.rdbuf(in.rdbuf());
    //std::ifstream in(string(argv[0]) + ".txt");
    std::ifstream in("in.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    string s1, s2;
    cin >> s1 >> s2;

    reverse(s1.begin(), s1.end());
    if (s1 == s2) cout << "YES";
    else cout << "NO";

    return 0;
}