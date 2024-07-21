int main() {
  ll n;
  // std::ifstream in("in08.txt");
  // std::cin.rdbuf(in.rdbuf());
  cin >> n;
 
  map<ll, ll> m;
  map<ll, ll> mi;
  ll d;
  ll able = true;
  REP(i, n) {
    cin >> d;
    mi[i] = d;
    m[d]++;
  }