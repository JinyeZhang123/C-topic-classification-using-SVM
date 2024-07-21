template <class Container>
  void add(const Container &s)
  {
    int pos = 0;
    for (T c : s)
    {
      int ci = enc(c);

      int npos = nodes[pos].nxt[ci];
      if (npos == -1)
      {
        npos = nodes.size();
        nodes[pos].nxt[ci] = npos;
        nodes.emplace_back(ci);
      }