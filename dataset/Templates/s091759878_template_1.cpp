template <typename OutputIt>
OutputIt eratosthenes(OutputIt it, std::size_t n) {
  for (std::size_t i = 0; i < n; ++i) it[i] = true;
  if (n > 0) it[0] = false;
  if (n > 1) it[1] = false;

  for (std::size_t i = 2; i * i < n; ++i) {
    if (!it[i]) continue;
    for (std::size_t j = i * i; j < n; j += i) it[j] = false;
  }