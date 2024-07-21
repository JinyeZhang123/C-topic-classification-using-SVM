signed main() { //{{{
#ifdef INPUT_FROM_FILE
  std::ifstream in(infile);
  std::cin.rdbuf(in.rdbuf());
#endif
#ifdef PCM
  test();
#endif
  solve();
  return 0;
}