    if((1ll<<j)&i) for(Edge e:G[j]) dist[i][j]=min(dist[i][j],dist[(1ll<<j)^i][e.s]+e.d);
