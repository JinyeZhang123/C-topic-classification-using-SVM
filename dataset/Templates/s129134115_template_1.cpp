template<class T, class S>
class LazySegmentTree {
    // Lazy propagation segment tree, containing elts of type T; S is type ("paramter space type") for all possible function we'll be
    // applying to elts (thee funcs should commute with f; f should be associative)
    public:
      typedef function<T(T)> application_type;
     
      // f is combining function, should be associative; zero_value is identity for f as a grupoid operation;
      // com is composition of application functions, specifically com(a1, a2) is a1 \circ a2 ie com(a1,a2)(t)=a1(a2(t))
      // param is parametrization of application functions
      // id_ is parameter for identity application function
      // typical example if you have min segtree, and you want to assign values in a lazy way to interval:
      // T=int,S=int, f(x,y) = min(x,y), zero_value = +infty"=modd"; com(a,b)=a; 
      // param(a) = [](int a){ return function<int(int)>([](int x){return a;}