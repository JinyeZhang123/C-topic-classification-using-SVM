int main()
{

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif

    int n, s, t, d, maxindex;
    cin >> n;
    connective.resize(n);
    for (int i = 0; i < n; i++)
    {
        shortest.push_back(maxint);
    }