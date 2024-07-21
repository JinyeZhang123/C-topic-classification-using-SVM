int main(){
#ifdef MYLOCAL
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
#endif
    cin >> N;
    x.resize(N), y.resize(N), d.resize(N);
    for (int i = 0; i < N; ++i){
        cin >> x[i] >> y[i] >> d[i];
    }