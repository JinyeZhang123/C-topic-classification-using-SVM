		return res + sub(l, r, node * 2, lb, (lb + ub) / 2) + sub(l, r, node * 2 + 1, (lb + ub) / 2, ub);
