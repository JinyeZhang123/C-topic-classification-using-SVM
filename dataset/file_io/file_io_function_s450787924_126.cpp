int main() {
#ifdef  DEBUG
  ifstream in("input.txt");
  cin.rdbuf(in.rdbuf());
#endif  // for local.
  int n, k;
  cin >> n >> k;
  int rt_n = (int)floor(sqrt(n));
  int ptnn = n/(rt_n+1) + rt_n;
  uwl p_rng[ptnn];
  uwl ptnbf[ptnn];
  uwl ptnaf[ptnn];
  memset(ptnaf, 0, sizeof(ptnaf));
  memset(p_rng, 0, sizeof(p_rng));

  for (int i = 0; i < rt_n; i++) {
    ptnaf[i] = n / (i+1);
    p_rng[i] = 1;
  }