template <typename T>
class UF{
public:
	vector<T> par,rank;

	UF(long long n){
		par.resize(n);
		rank.resize(n);
		for(T i=0;i<n;i++){
			par[i]=i;
			rank[i]=0;
		}