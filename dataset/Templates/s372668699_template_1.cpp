template<typename inp_typ>

inline void re(inp_typ &x)
{
    x = 0;
    char a; bool b = 0;
    while(!isdigit(a = getchar()))
        b = a == '-';
    while(isdigit(a))
        x = x * 10 + a - '0', a = getchar();
    if(b == 1)
        x = - x;
}