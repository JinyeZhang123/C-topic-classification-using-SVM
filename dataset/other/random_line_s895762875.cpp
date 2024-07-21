SqrtDecomp(const vector<Type>& init,const Type& ide_) : n(init.size()),ide(ide_),arr(init),buc((int)init.size() / Interval + 10,ide_){ for(int i = 0;i < n;i++){
