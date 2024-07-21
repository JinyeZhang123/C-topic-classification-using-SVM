virtual int get(std::vector<int> Xj, int A)
    {
        this->Xj = Xj;
        this->A = A;
        memset(this->dp, -1, sizeof(this->dp));
        return this->dp_search(0, 0, 0);
    }