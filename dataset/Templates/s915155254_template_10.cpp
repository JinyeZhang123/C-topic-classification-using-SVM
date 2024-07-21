template <class Container>
  int find(const Container &s) const
  {
    int pos = 0;
    for (char c : s)
    {
      int ci = enc(c);
      pos = nodes[pos].nxt[ci];
      if (pos == -1)
        return -1;
    }