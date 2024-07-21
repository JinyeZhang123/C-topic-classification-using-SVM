int main()
{
#ifdef LOCAL
  // 以降 cin の入力元が 'xxx.txt' になる
  std::ifstream in("code.txt");
  std::cin.rdbuf(in.rdbuf());
#endif

  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  double density = 0;
  int ans_ttl = 0; int ans_sugar = 0;
  
  rep(i, 31)
  {
    rep(j, 31)
    {
      if (100 * a * i + 100 * b * j > f)
        continue;
      rep(k, f)
      {
        rep(l, f)
        {
          int tmp_water = 100 * a * i + 100 * b * j;
          int tmp_sugar = c * k + d * l;
          int tmp_ttl   = tmp_water + tmp_sugar;
          if (tmp_ttl > f)
            continue;
          if (tmp_sugar * 100 > tmp_water * e)
            continue;
          if (tmp_ttl == 0) continue;
          if (density <= (double)tmp_sugar/tmp_ttl)
          {
            density   = double(tmp_sugar) / double(tmp_ttl);
            ans_ttl   = tmp_ttl;
            ans_sugar = tmp_sugar;
          }