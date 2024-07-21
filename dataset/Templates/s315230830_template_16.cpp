template <class T>
void CVEC(T v) {
  int c = v.size() - 1;
  for (int i = 0; i < c; i++) cout << v[i] << ' ';
  if (c > -1) cout << v[c];
  cout << endl;
}