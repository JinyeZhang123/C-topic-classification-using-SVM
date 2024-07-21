ll mst(ll s){taken.assign(N, 0);prim(s);ll cost = 0;while(!pq.empty()){ii front = pq.top();pq.pop();ll w = front.first;ll u = front.second;if(taken[u]==0)cost += w;prim(u);}return cost;}
