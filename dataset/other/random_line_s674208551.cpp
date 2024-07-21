    while(k >>= 1) data[k] = monoid.merge(reflect(2 * k + 0), reflect(2 * k + 1));
