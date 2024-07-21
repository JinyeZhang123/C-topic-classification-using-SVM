int main()
{

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif
    int n, x;
    cin >> n;
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ans = my_lcm(ans, x);
    }