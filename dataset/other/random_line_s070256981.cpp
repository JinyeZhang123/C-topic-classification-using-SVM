    sort(begin(S), end(S), [](auto i, auto j){return size(i) == size(j) ? i < j : size(i) < size(j);});
