int main()
{

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif

    int v, e, a, b;
    cin >> v >> e;
    connenct_list.resize(v);
    visit_list.resize(v);
    lowlink_list.resize(v);
    parent_list.resize(v);
    children_list.resize(v);
    for (int i = 0; i < e; i++)
    {
        cin >> a >> b;
        connenct_list[a].push_back(b);
        connenct_list[b].push_back(a);
    }