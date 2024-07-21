Mod operator^(Mod a, int n) {
  if (n == 0) return Mod(1);
  Mod res = (a * a) ^ (n / 2);
  if (n % 2) res = res * a;
  return res;
}