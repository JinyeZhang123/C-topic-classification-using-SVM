int main(){
#ifdef MYLOCAL
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
#endif
    cin >> N;
    for (int i = 0; i < 3; ++i) cin >> a[i];
    for (int i = 0; i < 3; ++i) cin >> b[i];

    N = calc(a, b, N);
    N = calc(b, a, N);
    cout << N << endl;
}