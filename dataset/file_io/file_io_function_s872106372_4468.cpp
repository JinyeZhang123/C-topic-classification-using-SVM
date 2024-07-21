int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    int A[3];
    rep(i, 3) cin >> A[i];
    sort(A, A+3);
    
    int res = 0;
    res += (A[2]-A[0])/2; A[0] += ((A[2]-A[0])/2)*2;
    res += (A[2]-A[1])/2; A[1] += ((A[2]-A[1])/2)*2;
    if(A[2] != A[0] && A[2] == A[1]) res += 2;
    if(A[2] == A[0] && A[2] != A[1]) res += 2;
    if(A[2] != A[0] && A[2] != A[1]) res += 1;
    cout << res << endl;
}