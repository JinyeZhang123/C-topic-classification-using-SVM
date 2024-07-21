int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(10);
//    std::ifstream in("input.txt");
//    std::cin.rdbuf(in.rdbuf());

//    solve();
    vector<bool> is_prime(1299710, true);
    for(int i = 2; i < is_prime.size(); ++i){
        if(is_prime[i]){
            for(int j = i * 2; j < is_prime.size(); j += i){
                is_prime[j] = false;
            }