int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    // ifstream cin(".in");

    cin >> X >> Y >> Z;
    N = X + Y + Z;
    ll Csum = 0;
    fori (i, N) {
        cin >> A[i] >> B[i] >> C[i];
        A[i] -= C[i], B[i] -= C[i];
        Csum += C[i];
    }