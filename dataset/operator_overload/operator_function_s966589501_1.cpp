pii operator-(const pii &obj1, const pii &obj2)
{
  pii tmp;
  tmp.first = obj1.first - obj2.first;
  tmp.second = obj1.second - obj2.second;
  return tmp;
}