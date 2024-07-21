bool operator==(const Dice d2) {
        for (size_t i=0; i<6; ++i)
            if (face[i] != d2.face[i])
                return false;

        return true;
    }