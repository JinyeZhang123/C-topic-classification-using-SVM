[](const std::string& buff, const int offset)->int
			{
				if (buff.length() <= offset)
				{
					return 0;
				}