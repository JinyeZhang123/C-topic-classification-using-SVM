virtual ~Heap()
	{
		if (m_pArray)
			delete[] m_pArray;

		m_pArray = 0;
	}