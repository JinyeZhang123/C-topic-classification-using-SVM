int main() {
  // ifstream cin("../test.txt");
  int n;
  cin >> n;
  while (n--) {
    double x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double a1 = 2 * (x2 - x1);
    double b1 = 2 * (y2 - y1);
    double c1 = x1 * x1 - x2 * x2 + y1 * y1 - y2 * y2;
    double a2 = 2 * (x3 - x1);
    double b2 = 2 * (y3 - y1);
    double c2 = x1 * x1 - x3 * x3 + y1 * y1 - y3 * y3;

    double px = (b1 * c2 - b2 * c1) / (a1 * b2 - a2 * b1);
    double py = (c1 * a2 - c2 * a1) / (a1 * b2 - a2 * b1);

    double r = sqrt((px - x1) * (px - x1) + (py - y1) * (py - y1));

    printf("%.3f %.3f %.3f\n", px, py, r);
  }