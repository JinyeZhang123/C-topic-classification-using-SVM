int main() {
  // ifstream cin("../test.txt");
  int l[10];
  int v1, v2;
  while (cin >> l[0]) {
    int L = l[0];
    char c;
    for (int i = 1; i < 10; i++) {
      cin >> c >> l[i];
      L += l[i];
    }