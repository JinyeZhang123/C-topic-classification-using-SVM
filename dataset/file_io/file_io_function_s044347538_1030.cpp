int main() {
    #ifdef DEBUG
    std::ifstream in("/home/share/inputf.in");
    std::cin.rdbuf(in.rdbuf());
    #endif
    int N, S = 0;
    cin >> N;
    a = vector<int>(N);
    for(int i = 0; i < N; i++) {
        cin >> a[i];
        S += a[i];
    }