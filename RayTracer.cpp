#include <iostream>

#include "Vector3.h"

int main()
{
	constexpr int image_width = 512;
	constexpr int image_height = 512;

	std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

	for (int height = image_height - 1; height >= 0; --height)
	{
		//we use std::cout to save the output to a file, so we use the error output stream for anything we want to print to console and shouldn't be in the image
		std::cerr << "\rScan lines remaining: " << height << ' ' << std::flush;

		for (int width = 0; width < image_width; ++width)
		{
			auto r = (double)width / (image_width - 1);
			auto g = (double)height / (image_height - 1);
			auto b = 0.25;

			int ir = static_cast<int>(255.999 * r);
			int ig = static_cast<int>(255.999 * g);
			int ib = static_cast<int>(255.999 * b);

			std::cout << ir << ' ' << ig << ' ' << ib << '\n';
		}
	}

	std::cerr << "\nDone\n";
}
