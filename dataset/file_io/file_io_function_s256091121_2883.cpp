int main() {
    //std::ifstream in("sub1_02.txt");
    //std::cin.rdbuf(in.rdbuf());
    cin >> N >> K;
    //cout << "N:" << N << "K:" << K << endl;
    A = vector<long long>(N);

    for (int i = 0; i < N; i++) {
        long long temp;
        cin >> temp;
        A[i] = temp;
    }