int main(){
#ifdef MYLOCAL
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
#endif
    int T; cin >> T;
    for (int CASE = 0; CASE < T; ++CASE) {
        cin >> a >> b >> c >> d;
        if (solve()) cout << "Yes" << endl;
        else cout << "No" << endl;
    }