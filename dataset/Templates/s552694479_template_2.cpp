template<typename Head, typename... Tail>
void OUTX(Head&& head, Tail&&... tail)
{
    cout << head << endl;
    OUTX(forward<Tail>(tail)...);
}