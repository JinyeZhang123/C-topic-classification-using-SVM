template<typename T>
class RangeQuery{
public:
	virtual T CalculateCost(T left,T right)=0;
	virtual void EvaluateElement(T& left,T right)=0;
	virtual void EvaluateLazy(T& left,T right)=0;
	virtual void UpdateLazy(T& left,T right,T vleft,T vright)=0;
}