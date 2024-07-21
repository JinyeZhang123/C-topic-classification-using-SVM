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

    int a, b, c;
    cin >> a >> b >> c;

    if (a==b) cout << c;
    if (a==c) cout << b;
    if (b==c) cout << a;


    return 0;
}