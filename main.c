#include "minilibx/mlx.h"
#include "fractol.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
 	t_win	tutorial;
	t_img	image;

	tutorial = new_program(300, 300, "tutorial");
	if (!tutorial.win_ptr)
		return (2);
	image = new_img(300, 300, tutorial);

	{
		/* Put white pixel */
		put_pixel_img(image, 150, 150, 0x00FFFFFF);
		mlx_put_image_to_window (image.win.mlx_ptr, image.win.win_ptr, image.img_ptr, 0, 0);
	}

	mlx_loop(tutorial.mlx_ptr);
	return (0);
}
