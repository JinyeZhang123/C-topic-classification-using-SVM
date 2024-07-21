int main()
{
  ifstream in("text.txt");
  cin.rdbuf(in.rdbuf());
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << fixed << setprecision(20); //高精度少数表示
  Main();
  return 0;
}