        while (k >>= 1) node[k] = F(node[2 * k], node[2 * k + 1]);
