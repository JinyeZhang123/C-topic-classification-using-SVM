int main(){
#ifdef MYLOCAL
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
#endif
    int N, Q; string s; cin >> N >> Q >> s;
    vector<P> td(Q);
    for (int i = 0; i < Q; ++i){
        cin >> td[i].first >> td[i].second;
    }