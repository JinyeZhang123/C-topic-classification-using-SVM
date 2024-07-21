template <typename T>
auto move (T & a, int & x , int & y) -> bool
{
    while (true)
    {
        switch (a [y] [x])
        {
        case '>' :
            a [y] [x] = 'x';
            ++ x;
            break;
        case '<' :
            a [y] [x] = 'x';
            -- x;
            break;
        case '^' :
            a [y] [x] = 'x';
            -- y;
            break;
        case 'v' :
            a [y] [x] = 'x';
            ++ y;
            break;
        case '.' :
            return true;
        case 'x' :
            return false;
        }