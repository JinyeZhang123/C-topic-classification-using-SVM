template<typename It>
bool is_palindrome( It const& b, It const& e )
{
    if ( *b != *e )
        return false;
    if ( distance( b, e ) <= 1 )
        return true;
    return is_palindrome( b+1, e-1 );
}