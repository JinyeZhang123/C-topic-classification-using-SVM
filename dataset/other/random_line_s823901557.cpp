template<class T> ostream &operator<<(ostream &out, queue<T> o){while(!o.empty())out << o.front() << (o.size() > 0 ? " " : ""),o.pop();return out;}
