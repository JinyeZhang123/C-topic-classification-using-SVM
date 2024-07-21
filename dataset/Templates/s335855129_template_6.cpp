template<typename T>
class RangeAddQuery:public RangeQuery<T>{
public:
	T CalculateCost(T left,T right){return left+right;}