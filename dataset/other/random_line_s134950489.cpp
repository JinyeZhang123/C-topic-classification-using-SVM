void rec(int l, int r) { if (l >= r) { return; }int root = pre[pos++]; int m = 0; for (int i = 0; i < n; i++) { if (in[i] == root) { m = i; } }rec(l, m); rec(m + 1, r); post[cnt] = root; cnt++; }
