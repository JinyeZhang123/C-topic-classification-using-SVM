template<typename T> class Calculation
{
public:
  static void consume(State& begin, char expected) {
    if (*begin == expected) {
      begin++;
    }