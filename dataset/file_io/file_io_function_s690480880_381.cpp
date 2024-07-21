int main() {
#ifdef HOME
    ifstream cin("A.in");
    ofstream cout("A.out");
#endif
    int i, n, m;
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    // daca iei un nr. a[i][j] se ia si a[i][j + 1], daca a[i][j + 1] < a[i][j]
    // impartim nr. in bucket-uri de 1, 2, 3 sortate dupa primul element (b[1] < b[2] < ... < b[k])
    // num[i] = nr. de bucket-uri de i elemente
    // num[1] >= num[2]
    // daca avem l[1], l[2], ..., l[k] lung. => nr. de permutari este: 
    // (3 * N)! / (l[1] * (l[1] + l[2]) * ... * (3 * N))
    
    cin >> n >> m;

    vector<int> inv(3 * n + 1, 1);
    for(i = 1; i <= 3 * n; i++) {
    	inv[i] = lgput(i, m - 2, m);
    }