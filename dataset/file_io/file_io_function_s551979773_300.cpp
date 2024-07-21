signed main()
{
    //  以降 cin の入力元が 'input.txt' になる
    //std::ifstream in("input.txt");
    //std::cin.rdbuf(in.rdbuf());
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 2; i < min((int)1e7, n); i++)
    {
        int t = n;
        while (t % i == 0)
        {
            t /= i;
        }