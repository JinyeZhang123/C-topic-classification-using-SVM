template<typename M>
void warshallFloyd(M &m, const int &n) {
  rep(k, n) rep(i, n) rep(j, n) cmin(m[i][j], m[i][k] + m[k][j]);
}