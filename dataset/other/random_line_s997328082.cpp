    if (std::any_of(a.begin(), a.end(), [=](auto x) { return x >= intmax_t(n); })) {
