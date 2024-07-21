class prime
{
    set<long> plist;
    bool isprime(long n);
    void extend();
public:
    prime() { plist.insert(2); extend(); }                                                                      