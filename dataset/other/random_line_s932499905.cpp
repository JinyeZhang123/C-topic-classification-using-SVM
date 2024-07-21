	sort(all(v), [&](string &s1, string &s2){if(s1.size() == s2.size()) return s1 < s2; return s1.size() > s2.size();});
