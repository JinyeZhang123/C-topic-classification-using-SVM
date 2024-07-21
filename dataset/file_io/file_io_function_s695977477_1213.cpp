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

    int x,y,z;
    cin >> x >> y >> z;

    cout << (x-z) / (y+z);

    return 0;
}