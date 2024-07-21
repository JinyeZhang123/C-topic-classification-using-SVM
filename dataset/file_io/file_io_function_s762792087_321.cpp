int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ofstream w_file("abc134_f.txt", ios::out);
    // for (ll n = 2; n <= 5; n++) {
    //     w_file << "n=" << n << "\n";
    //     vector<ll> perm(n);
    //     Rep (i, n) perm[i] = i;
    //     do {
    //         ll oddness = 0;
    //         Rep (i, n) {
    //             oddness += abs(i-perm[i]);
    //         }