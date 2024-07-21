int main()
{
//    ifstream fin("in.txt");

    while(fin >> n >> m, n | m)
    {

        h.clear();
        w.clear();

        h.shrink_to_fit();
        w.shrink_to_fit();

        

        int tmp = 0;
        for(int i = 0; i < n; i++)
        {
            fin >> tmp;
            h.push_back(tmp);
        }