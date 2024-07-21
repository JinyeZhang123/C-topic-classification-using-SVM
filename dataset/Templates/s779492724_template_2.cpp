template<typename T, bool Check=false>
struct LexParser {
  typedef T expr_t;
  typedef string::const_iterator state_t;
  LexParser(){}