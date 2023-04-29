#pragma once

#include <iostream>

class Vector3
{
private:
	double m_coordinates[3];

public:
	Vector3() : m_coordinates{ 0, 0, 0 } {}
	Vector3(double c1, double c2, double c3) : m_coordinates{ c1, c2, c3 } {}

	double x() const { return m_coordinates[0]; }
	double y() const { return m_coordinates[1]; }
	double z() const { return m_coordinates[2]; }

	Vector3 operator-() const { return Vector3(-m_coordinates[0], -m_coordinates[1], -m_coordinates[2]); }
	double operator[](int i) const { return m_coordinates[i]; }
	double& operator[](int i) { return m_coordinates[i]; }

	Vector3 operator+=(Vector3 vec)
	{
		m_coordinates[0] += vec[0];
		m_coordinates[1] += vec[1];
		m_coordinates[2] += vec[2];

		return *this;
	}
};

inline std::ostream& operator<<(std::ostream& out, const Vector3& vec)
{
	return out << vec.x() << ", " << vec.y() << ", " << vec.z();
}
