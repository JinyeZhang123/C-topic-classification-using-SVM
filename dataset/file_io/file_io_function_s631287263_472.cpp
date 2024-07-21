int main() {
#if LOCAL&01
  std::ifstream in("./test/sample-1.in");
  //std::ifstream in("./input.txt");
  std::cin.rdbuf(in.rdbuf());
#else
  cin.tie(0);
  ios::sync_with_stdio(false);
#endif
  ll M; cin>>M;
  ll keta=0;
  ll sum=0;
  REP(i,M){
    ll d,c; cin>>d>>c;
    keta += c;
    sum += (d*c);
  }