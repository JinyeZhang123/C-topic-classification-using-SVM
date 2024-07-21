template<typename T, typename ...Args> void DBG(T first, Args... args)
{cerr << first; if(sizeof...(args))cerr<<", "; DBG(args...); }