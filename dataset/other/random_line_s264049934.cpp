        sort(p.begin(), p.end(), [](const P& p1, const P& p2) { return p1.first != p2.first ? p1.first > p2.first : p1.second < p2.second; });
