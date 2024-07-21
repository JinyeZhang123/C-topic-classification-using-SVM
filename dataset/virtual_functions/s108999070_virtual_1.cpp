virtual int get(std::vector<int> Xj, int A)
    {
        int P = 0;
        for (int b = 1; b < 2 << (Xj.size() - 1); b++)
        {
            double a = 0.0;
            int i = 0;
            for (auto itr = Xj.begin(); itr != Xj.end(); ++itr)
            {
                if (b & 1 << std::distance(Xj.begin(), itr))
                {
                    a += *itr;
                    i += 1;
                }