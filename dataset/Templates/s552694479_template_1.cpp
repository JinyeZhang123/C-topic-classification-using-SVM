template<typename Head, typename... Tail>
void INX(Head&& head, Tail&&... tail)
{
    cin >> head;
    INX(forward<Tail>(tail)...);
}