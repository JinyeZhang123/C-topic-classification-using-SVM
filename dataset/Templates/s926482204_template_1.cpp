template <class Callback>
bool findLeapYears(int from, int to, Callback callback)
{
    bool leap_year_found = false;
    for (int y = from; y <= to; ++y) {
        if (isLeapYear(y)) {
            leap_year_found = true;
            callback(y);
        }