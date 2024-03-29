﻿#include <iostream>

// <summary> The main driver for our raytracer image generation
int main() {

    // dimensions
    int image_width = 256;
    int image_height = 256;


    // render loop
    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = 0; j < image_height; ++j) {
        std::clog << "\rScanlines Remaining" << image_height - j << " \n" << std::flush;
        for (int i = 0; i < image_width; ++i) {
            auto r = double(i) / (image_width - 1);
            auto g = 0;
            auto b = double(j) / (image_height - 1);

            int ir = static_cast<int>(255.999 * r);
            int ig = static_cast<int>(255.999 * g);
            int ib = static_cast<int>(255.999 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }
    std::clog << "\rDone.         \n";

}