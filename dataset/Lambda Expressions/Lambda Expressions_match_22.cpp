[](int i) {
    if (i >= int(val.size())) val.resize(i + 1, 0);
    return val[i];
  }