int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, K, Q;
    cin >> N >> K >> Q;
    vector<int> P(N, 0);
    for(int i=0; i<Q; i++){
        int A; cin >> A; A--;
        P[A]++;
    }