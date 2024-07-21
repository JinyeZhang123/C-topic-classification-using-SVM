int main() {
  // ifstream cin("../test.txt");
  int a, b, d;
  char x, y;
  int t = 0;
  int h = 0;
  while (cin >> a >> x >> b >> y >> d) {
    if (a * a + b * b == d * d) t++;
    if (a == b) h++;
  }