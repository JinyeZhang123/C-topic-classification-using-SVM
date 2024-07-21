    return par[x] == x ? x : par[x] = get_par(par[x]);
