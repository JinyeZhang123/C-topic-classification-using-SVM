  sort(blocks.begin(), blocks.end(), [](T& t1, T& t2) {return get<0>(t1) + get<1>(t1) < get<0>(t2) + get<1>(t2);});
