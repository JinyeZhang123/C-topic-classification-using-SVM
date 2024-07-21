bool operator==(const Dice& one)
    {
        bool is_equal = true;
        for (int i = 0; i < SURFACE_NUM; i++) {
            if (m_surface.at(i) != one.surface(i)) {
                is_equal = false;
                break;
            }