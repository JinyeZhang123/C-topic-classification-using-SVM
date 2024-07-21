int main() {
  // std::ifstream in("01-Handmade-00");
  // std::cin.rdbuf(in.rdbuf());
  ll n,m;
  cin >> n >> m;
  string s, t;
  cin >> s;
  cin >> t;
 
  ll xl = lcm(n, m);
 
  ll j = 0;
  ll k = 0;
  ll enable = true; 

  for(ll i = 0; i<xl; i++) {
    j = i * xl/n;
    k = i * xl/m;

    if(j >= t.length() || k >= s.length())  {
      break;
    }