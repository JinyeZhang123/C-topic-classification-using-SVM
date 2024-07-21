      for(let x : G[u]) if( --indeg[x] == 0 && !vis[x]++ ) que.emplace(x);
