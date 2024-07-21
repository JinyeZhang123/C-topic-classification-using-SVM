template<class Monoid>
struct LazyOperator
{
    using Func = function<Monoid(Monoid,Monoid)>;

    Func node_update;
    function<Monoid(int,int,Monoid,Monoid)> lazy_make;
    Func lazy_effect;
    Func lazy_throw;

}