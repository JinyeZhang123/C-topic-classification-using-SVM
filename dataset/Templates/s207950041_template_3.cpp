template<typename S,typename T,typename U>
auto&operator<<(ostream&o,priority_queue<S,T,U>q){while(!q.empty())o<<q.top()<<" ",q.pop();return o;}