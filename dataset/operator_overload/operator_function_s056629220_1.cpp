bool operator<(pair<bool, ll> p1, pair<bool, ll> p2) {
  return (p1.second == p2.second ? p1.first < p2.first : p1.second < p2.second);
}