class Triangle2D
{
    Vec2D<T> a,b,c;
public:
    explicit Triangle2D(T ax=T(), T ay=T(), T bx=T(), T by=T(), T cx=T(), T cy=T()):a(ax,ay),b(bx,by),c(cx,cy){}