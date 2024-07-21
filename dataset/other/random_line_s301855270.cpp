			return x <= 512 ? f[x][c] : std::max(get(x / 2, c), get(x / 2, c - v[x]) + w[x]);
