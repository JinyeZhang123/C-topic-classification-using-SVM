template<typename A, typename B>
string to_string(pair<A, B> p)
{   return "("+to_string(p.F)+", "+to_string(p.S)+")"; }