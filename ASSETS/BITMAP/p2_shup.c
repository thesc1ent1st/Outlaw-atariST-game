/*	BitRip Copyleft !(c) 2019, Michael S. Walker <mwalk762@mtroyal.ca>
 *	All Rights Unreserved in all Federations, including Alpha Centauris.
 *
 *	.--. https://github.com/heapsmash/Monochrome-Bitmap-Converter ---------.
 *	|  |    Header Name    | Value |              Description              |
 *	:--+-------------------+-------+---------------------------------------:
 *	|  | type:             | 4d42  | (Magic identifier: 0x4d42)            |
 *	:--+-------------------+-------+---------------------------------------:
 *	|  | size:             | 258   | (File size in bytes)                  |
 *	:--+-------------------+-------+---------------------------------------:
 *	|  | reserved1:        | 0     | (NOT USED)                            |
 *	:--+-------------------+-------+---------------------------------------:
 *	|  | reserved2:        | 0     | (NOT USED)                            |
 *	:--+-------------------+-------+---------------------------------------:
 *	|  | offset:           | 130   | (Offset to image data [54 bytes])     |
 *	:--+-------------------+-------+---------------------------------------:
 *	|  | dib_header_size:  | 108   | (DIB Header size in bytes [40 bytes]) |
 *	:--+-------------------+-------+---------------------------------------:
 *	|  | width_px:         | 32    | (Width of the image)                  |
 *	:--+-------------------+-------+---------------------------------------:
 *	|  | height_px:        | 32    | (Height of the image)                 |
 *	:--+-------------------+-------+---------------------------------------:
 *	|  | num_planes:       | 1     | (Number of color planes)              |
 *	:--+-------------------+-------+---------------------------------------:
 *	|  | bits_per_pixel:   | 1     | (Bits per pixel)                      |
 *	:--+-------------------+-------+---------------------------------------:
 *	|  | compression:      | 0     | (Compression type)                    |
 *	:--+-------------------+-------+---------------------------------------:
 *	|  | image_size_bytes: | 128   | (Image size in bytes)                 |
 *	:--+-------------------+-------+---------------------------------------:
 *	|  | x_resolution_ppm: | 11811 | (Pixels per meter)                    |
 *	:--+-------------------+-------+---------------------------------------:
 *	|  | y_resolution_ppm: | 11811 | (Pixels per meter)                    |
 *	:--+-------------------+-------+---------------------------------------:
 *	|  | num_colors:       | 2     | (Number of colors)                    |
 *	:--+-------------------+-------+---------------------------------------:
 *	|  | important_colors: | 2     | (Important colors)                    |
 *	:--+-------------------+-------+---------------------------------------:
 */

int g_p2_shoot_up_height = 32; /* height in bits */ 
int g_p2_shoot_up_width = 32; /* width in bits */
int g_p2_shoot_up_size = 128; /* total bytes */

const uint32_t p2_shoot_up[] = {
	0x0003f000,
	0x0003f000,
	0x3ffffffe,
	0x00ffff80,
	0x00111e00,
	0x001ffe00,
	0x000ffc00,
	0x0044f800,
	0x0027f800,
	0x0011f800,
	0x00187800,
	0x00307800,
	0x007c7800,
	0x001f7800,
	0x0007f800,
	0x0001f800,
	0x0000f800,
	0x0001f800,
	0x0001f800,
	0x0003f800,
	0x0007f800,
	0x0007f800,
	0x0007f800,
	0x0007f800,
	0x0007f800,
	0x0007f800,
	0x0007fc00,
	0x0007bc00,
	0x00071c00,
	0x00071c00,
	0x001f3c00,
	0x007f3c00,
}; /* Generated with BitRip <mwalk762@mtroyal.ca> */ 

