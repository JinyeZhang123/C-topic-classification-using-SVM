            cost[i].push_back(abs(b[i + k * D].first - b[i + (k - 1) * D].first) + abs(b[i + k * D].second - b[i + (k - 1) * D].second) + cost[i][k - 1]);
