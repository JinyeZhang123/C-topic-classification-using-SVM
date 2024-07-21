class Z
{
private:
  int size;
  char d[MAX_SIZE];
public:
  Z(char *s)
  {
    size = strlen(s);
    for(int i=0;i<MAX_SIZE - size;i++)
      d[i] = 0;
    for(int i=0,j=MAX_SIZE - size;j < MAX_SIZE;