template<typename T,typename... V>
void _masterdebug(T t,V... v){_print(t);if(sizeof...(v))cerr<<", ";_masterdebug(v...);}