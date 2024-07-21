bool operator<(const Edge& e1, const Edge& e2)
{
    if (e1.y != e2.y) return e1.y < e2.y;
    if (e1.a != e2.a) return e1.a < e2.a;
    if (e1.b != e2.b) return e1.b < e2.b;
    return false;
}