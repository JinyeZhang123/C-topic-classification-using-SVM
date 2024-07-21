#define pls(...) {bool space = false; for(auto i : __VA_ARGS__) (cout << (space?" ":"") << i), space = true; cout << "\n";}
