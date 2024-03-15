#include <LDL/LDL_Image.hpp>
#include <stdio.h>

int main()
{
	LDL_ImageLoader imageLoader;

	int width  = 0;
	int heigth = 0;
	int bpp    = 0;
	unsigned char* pixels = NULL;

	if (imageLoader.Load("test.png"))
	{
		width  = imageLoader.Width();
		heigth = imageLoader.Heigth();
		bpp    = imageLoader.Bpp();
		pixels = imageLoader.Pixels();
	}

	printf("width : %d", width);
    printf("heigth: %d", heigth);
    printf("bpp   : %d", bpp);
    printf("pixels: %p", pixels);
	
	return 0;
}