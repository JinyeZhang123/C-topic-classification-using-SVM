int main() {
    //ifstream cin("A.in");
    //ofstream cout("A.out");
    int i, j, n;
    ios::sync_with_stdio(false);
    cin >> n;
    int k = 0;
    while(k * (k + 1) / 2 < n) {
        k++;
    }