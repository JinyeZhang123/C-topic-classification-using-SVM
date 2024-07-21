double operator*(Vec& vec)
    {
        return (m_x * vec.y() - m_y * vec.x());
    }