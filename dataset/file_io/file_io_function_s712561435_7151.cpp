int main() {
  // std::ifstream in("01-Handmade-00");
  // std::cin.rdbuf(in.rdbuf());
  ll n;
  cin >> n;
  vector<ll> a(n, 0);
  vector<ll> b(n, 0);
  vector<ll> diff(n, 0);


  REP(i, n) {
    cin >> a[i];
  }