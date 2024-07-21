Vec operator/(Vec Partner)
	{
		return Vec(Direction.X / Partner.Direction.X , Direction.Y / Partner.Direction.Y , Direction.Z / Partner.Direction.Z , SP);
	}