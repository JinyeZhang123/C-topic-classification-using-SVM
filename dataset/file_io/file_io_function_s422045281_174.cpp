int main() {
  // ifstream cin("../test.txt");
  double x,y,ca,a,l;
  x = 0; y = 0; ca = PI / 2;
  char c;
  while (true) {
    cin >> l >> c >> a; // 進む距離と回転角度
    if (l == 0 && a == 0) break;

    x += l * cos(ca);
    y += l * sin(ca);

    ca -= a * PI / 180.0;
  }