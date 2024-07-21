template <class COST>
void warshall_floyd(vector<vector<COST>> &cost) { // cost[n][n]
	int n = cost.size();
	REP(k, n) REP(i, n) REP(j, n) cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
}