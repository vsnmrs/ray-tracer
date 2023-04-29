#include <iostream>

#include "Vector3.h"

int main()
{
	constexpr int image_width = 256;
	constexpr int image_height = 256;

	std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

	for (int height = image_height - 1; height >= 0; --height)
	{
		//std::cout is used to save the output to a file, so the error output stream must be used for anything that have to be printed to console and shouldn't be in the image
		std::cerr << "\rScan lines remaining: " << height << ' ' << std::flush;

		for (int width = 0; width < image_width; ++width)
		{
			Vector3 vec{};
			vec[0] = (double)width / (image_width - 1);
			vec[1] = (double)height / (image_height - 1);
			vec[2] = 0.25;

			int ir = static_cast<int>(255.999 * vec[0]);
			int ig = static_cast<int>(255.999 * vec[1]);
			int ib = static_cast<int>(255.999 * vec[2]);

			std::cout << ir << ' ' << ig << ' ' << ib << '\n';
		}
	}

	std::cerr << "\nDone\n";
}
