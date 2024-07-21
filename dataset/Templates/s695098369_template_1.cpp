template< class T >
void exchange( T &a, T &b )
{
    T c  = a;
    a = b;
    b = c;
}