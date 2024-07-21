		while(it != visy[now.first.second].end() && *it <= now.first.first + k && !(prefy[*it + 1][now.first.second] - prefy[now.first.first][now.first.second])) {
