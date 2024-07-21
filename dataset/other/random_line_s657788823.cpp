        d = std::min(d, (lookup_tsp((S | (1 << v)), v, W, D) + W[u][v]));  // dの更新
