template <class S> int LevenshteinDistance(const S &A, const S &B) {
   vector< vector<int> > dist(A.size()+1,vector<int>(B.size()+1));
   for (int i = 0; i <= A.size(); i++) dist[i][0] = i;
   for (int i = 0; i <= B.size(); i++) dist[0][i] = i;
   for (int i = 0; i < A.size(); i++) {
      for (int j = 0; j < B.size(); j++) {
         dist[i+1][j+1] = min(dist[i][j+1], dist[i+1][j]) + 1;
         dist[i+1][j+1] = min(dist[i+1][j+1], dist[i][j] + (A[i]!=B[j]));
      }