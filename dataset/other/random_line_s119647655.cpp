                if(dist[i][k] != -1 && dist[k][j] != -1 && (dist[i][j] == -1 || dist[i][k]+dist[k][j] < dist[i][j])) {
