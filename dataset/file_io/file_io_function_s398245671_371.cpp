int main() {
  // ifstream cin("../test.txt");
  double x1, y1, x2, y2, x3, y3, xp, yp;
  while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
    if (same_side(x1,y1,x2,y2,xp,yp,x3,y3) && same_side(x2,y2,x3,y3,xp,yp,x1,y1) && same_side(x3,y3,x1,y1,xp,yp,x2,y2)) {
      cout << "YES" << endl;
    }