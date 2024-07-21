template<class T> ostream &operator<<(ostream &out, const vector<T> &o){for(auto itr=o.begin();itr != o.end();itr++)out << *itr << (itr+1 != o.end() ? " " : "");return out;}
