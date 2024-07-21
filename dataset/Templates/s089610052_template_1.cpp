template<typename T = long long> inline T toInteger(const string& s, int n) {
  T res = 0;
  for (char c : s) {
    if (isdigit(c)) res = res * n + c - '0';
    else if (isalpha(c)) res = res * n + tolower(c) - 'a' + 10;
  }