		if(a[i] < 0) adj[source].push_back(i), adj[i].push_back(source), cap[source][i] = -a[i];
