template<typename T> class Parsing
{
public:
  static void consume(State& begin, char expected) {
    if (*begin == expected) {
      begin++;
    }