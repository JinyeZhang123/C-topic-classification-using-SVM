		data[node] = merge(change(data[node * 2], lazy[node * 2]), change(data[node * 2 + 1], lazy[node * 2 + 1]));
