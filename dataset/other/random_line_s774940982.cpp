#define debug(...) do {cerr << __LINE__ << ":	" << #__VA_ARGS__ << " = "; dump(__VA_ARGS__); } while (false)
