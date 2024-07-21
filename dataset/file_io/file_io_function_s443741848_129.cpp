int main() {
    //fstream cin("A.in");
    //ofstream cout("A.out");
    ll N;
    ios::sync_with_stdio(false);
    cin >> N;
    for(ll n = 1; n <= 3500; n++)
      for(ll h = 1; h <= 3500; h++) {
          if(4 * h * n > N * (n + h) && (N * h * n) % (4 * h * n - N * (n + h)) == 0) {
              cout << h << " " << n << " " << (N * h * n) / (4 * h * n - N * (n + h));
              return 0;
          }