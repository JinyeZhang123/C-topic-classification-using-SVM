Vec operator*(const double& scale, const Vec& v) {
  Vec ret(v);
  for (size_t i = 0; i < ret.dim(); i++) ret[i] *= scale;
  return ret;
}