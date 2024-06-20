/*
	Cole L - 5th January 2022 - https://github.com/cole8888/Nearest-Neighbour-Upscale
*/

#ifndef NEARESTNEIGHBOURUPSCALE_H
#define NEARESTNEIGHBOURUPSCALE_H

#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
typedef unsigned char u_char;
typedef unsigned int u_int;
#endif

// Don't change these, lets the program know how many colour channels there are for RGB and RGBA.
#define CHANNELS_PER_PIXEL_RGB 3
#define CHANNELS_PER_PIXEL_RGBA 4

// Performs nearest neighbour upscaling of the original image where each pixel in the original image is expanded into an expanded pixel of size scale^2 in the upscaled image.
// Used for 32bit RGBA or 24bit RGB images that have been read in as RGBA.
void upscaleNN_RGBA(u_char *originalImg, u_char *scaledImg, int dimX, int dimY, int scale);

// Performs nearest neighbour upscaling of the original image where each pixel in the original image is expanded into an expanded pixel of size scale^2 in the upscaled image.
// Used for 24bit RBG images.
void upscaleNN_RGB(u_char *originalImg, u_char *scaledImg, int dimX, int dimY, int scale);

#endif
