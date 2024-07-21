int main()
{

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif

    int v, e, a, b, q;
    vector<pair<int, int>> node;
    vector<pair<int, int>> bridge;
    vector<pair<int, int>> query;

    cin >> v >> e;

    connenct_list.resize(v);
    connenct_list_rev.resize(v);
    timestamp_list.resize(v);
    visit_list.resize(v);

    for (int i = 0; i < e; i++)
    {
        cin >> a >> b;
        connenct_list[a].push_back(b);
        connenct_list_rev[b].push_back(a);
        node.push_back(make_pair(a, b));
    }