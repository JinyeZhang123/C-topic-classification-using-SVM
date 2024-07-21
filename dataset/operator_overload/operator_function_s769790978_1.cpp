bool operator==(const Dice& dice)
    {
        for (int i = 0; i < SURFACE_NUM; i++) {
            if (m_surface.at(i) != dice.surface(i)) {
                return false;
            }