int main()
{

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif
    int n, x;
    cin >> n;
    cout << euler_phi_function(n) << endl;
    return 0;
}