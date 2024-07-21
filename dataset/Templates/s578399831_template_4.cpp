template <typename T>
void drop(T res) {
  cout << res << endl;
  throw exit_exception();
}