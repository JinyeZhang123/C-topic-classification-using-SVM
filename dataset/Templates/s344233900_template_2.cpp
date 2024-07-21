template<typename Itr> void build(Itr first, Itr last) {
    hash_1.resize(siz + 1);
    hash_2.resize(siz + 1);
    for (int i = 0; i < siz; ++i, ++first) {
      hash_1[i + 1] = (hash_1[i] * base_1 % mod_1 + *first) % mod_1;
      hash_2[i + 1] = (hash_2[i] * base_2 % mod_2 + *first) % mod_2;
    }