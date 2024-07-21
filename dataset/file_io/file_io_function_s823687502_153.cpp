int main() {
  // ifstream cin("../test.txt");
  int w[10];
  int k[10];
  for (int i = 0; i < 10; i++)
    cin >> w[i];
  for (int i = 0; i < 10; i++)
    cin >> k[i];

  sort(w, w + 10);
  sort(k, k + 10);

  int sum_w = w[7] + w[8] + w[9];
  int sum_k = k[7] + k[8] + k[9];

  cout << sum_w << " " << sum_k << endl;;
}