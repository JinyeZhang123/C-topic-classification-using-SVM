template <typename T>
ostream& operator<<(ostream& os,const vector<T> &V){int N=V.size();
if(N==0){os<<'.';return os;}