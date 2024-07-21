template<typename T>
void printv(vector<T> vt){
    if(vt.size() == 0) return;
    rep(i, vt.size() - 1)
        cout << vt[i] << " ";
    cout << vt[vt.size() - 1] << endl;
}