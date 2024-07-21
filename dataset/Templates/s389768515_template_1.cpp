template <typename T>
class UF{
public:
	T par[10000],rank[10000];
 
    inline UF(T n){
        for(T i=0;i<n;i++){
            par[i]=i;
            rank[i]=0;
        }