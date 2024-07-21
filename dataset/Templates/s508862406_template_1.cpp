template<typename T>
void remove(std::vector<T>& vector, unsigned int index)
{
	vector.erase(vector.begin() + index);
}