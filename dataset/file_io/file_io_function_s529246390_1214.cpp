int main()
{

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif

    string s;
    cin >> s;
    int ok, ng, mid;

    if (k_flip(s, s.length()))
        cout << s.length() << endl;
    else
    {
        ok = 0, ng = s.length();
        while (ng - ok> 1)
        {
            mid = (ok + ng) / 2;
            if (k_flip(s, mid))
                ok = mid;
            else
                ng = mid;
            
        }