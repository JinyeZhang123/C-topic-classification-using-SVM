int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);

    int A[5];
    for(int i=0; i<5; i++) cin >> A[i];
    
    int array[] = {1, 2, 3, 4, 5}