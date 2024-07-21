[&](string &s)->bool {
        for (string &kw: keywords)
            if (s.find(kw) != string::npos)
                return true;

        return false;
    }