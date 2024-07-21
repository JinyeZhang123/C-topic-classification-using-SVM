int main(int argc, char *argv[]) {
  int a,b,c,d;

#ifdef FILENAME
  ifstream file(FILENAME);
  cin.rdbuf(file.rdbuf());
#endif

  // input tree
  cin >> n >> q;
  g.resize(n);
  e.emplace_back(0,0,n,0);
  rep(i,n-1) {
    cin >> a >> b >> c >> d;
    a--;
    b--;
    c--;
    e.emplace_back(a,b,c,d); //cout << "e.size() = " << e.size() << endl;
    g[a].push_back(e.size()-1);
    e.emplace_back(b,a,c,d); //cout << "e.size() = " << e.size() << endl;
    g[b].push_back(e.size()-1);
  }