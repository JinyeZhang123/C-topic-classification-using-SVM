template <typename Itr> void postorder(Itr ps, Itr pe, Itr is, Itr ie) {
  if (ps == pe) {
    ans.push_back(*ps);
    return;
  }