	for(int i = 1 ; i < N ; ++i){int p , q; cin >> p >> q; nxt[p].push_back(q); nxt[q].push_back(p);}
