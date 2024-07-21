template<class T>
void Dump(const T& A) {
    REP(i, A.size() - 1) cout << A[i] << " ";
    cout << A[A.size() - 1] << "\n";
}