

bool  size_check (int size)
{
	if (size > 50 || size < 4) //проверка размера
	{
		return false;
	}
	else
	{
		return true;
	}
}