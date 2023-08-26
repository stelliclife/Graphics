#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::string;

void simple_render(string file_name, int image_width, int image_height)
{
  std::ofstream ofs;

  ofs.open(file_name);

  ofs << "P3\n" << image_width << ' ' << image_height << "\n" << "255\n";

  for(int j = 0; j < image_height; ++j)
  {
    for(int i = 0; i < image_width; ++i)
    {
      auto r = static_cast<double>((j*255) / (image_height-1));
      auto g = static_cast<double>((i*255) / (image_width-1));

      ofs << r << ' ';
      ofs << g << ' ';
      ofs << 0 << '\n';
    }

    double percent = static_cast<double>((j*100) / (image_height+1));
    cout << "scaline: " << percent << "%\n";
  }
  ofs.close();  
}

int main()
{
  const int image_width = 720;
  const int image_height = 480;
  const string file_name = "colorful_render.ppm";

  simple_render(file_name, image_width, image_height);

  return 0;
}