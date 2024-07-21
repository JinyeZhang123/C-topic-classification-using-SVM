template <typename T>
ostream& operator<<(ostream& os,const vector<vector<T>> &V){
int N=V.size();rep(i,0,N-1)os<<V[i]<<endl;os<<V[N-1];return os;}