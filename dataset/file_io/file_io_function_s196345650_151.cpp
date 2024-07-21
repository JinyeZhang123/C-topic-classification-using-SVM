int main() {
  // ifstream cin("../test.txt");
  int h, m, s;
  int n = 3;
  while (n--) {
    cin >> h >> m >> s;
    int second1 = 60 * 60 * h + 60 * m + s;
    cin >> h >> m >> s;
    int second2 = 60 * 60 * h + 60 * m + s;

    int t = second2 - second1;

    h = t / (60 * 60);
    t %= 60 * 60;
    m = t / 60;
    t %= 60;
    s = t;

    cout << h << " " << m << " " << s << endl;
  }