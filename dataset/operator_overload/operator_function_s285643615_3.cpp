void operator++() {
        end_ = true;
        while (!todo.empty()) {
            current = todo.front().first; prev = todo.front().second; todo.pop();
            if (notvisited(current)) {
                mark_visited(current);
                for (const T x : neighbors(current)) {  todo.push(make_pair(x, current));   }