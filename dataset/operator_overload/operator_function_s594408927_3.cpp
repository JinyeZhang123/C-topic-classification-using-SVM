bool operator==(pair_table &&v){
    return std::equal(pairs.begin(),pairs.end(),v.pairs.begin());
  }