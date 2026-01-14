/*
 * Lorenz Attractor Visualization
 * Simulates a chaotic system and draws it in the terminal
 */

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

int main(void) {

	// Starting position in 3D space
	double x = 1, y = 0, z = 0;

	// Lorenz system parameters (control the shape and behavior)
	double sigma = 10.0;
	double roh = 28.0;
	double beta = 8.0 / 3.0;

	// Time step size for simulation
	double dt = 0.01;

	// Infinite loop to continuously update and draw
	while (true) {

		// Calculate how much x, y, z should change (Lorenz equations)
		double dx = sigma * (y - x);
		double dy = x * (roh - z) - y;
		double dz = x * y - beta * z;

		// Update the position
		x += dx * dt;
		y += dy * dt;
		z += dz * dt;

		// Convert 3D coordinates to terminal screen position
		int term_x = (int)(x * 2 + 40);
		int term_y = (int)(z * 1 + 12);

		// Clear screen and draw a star at the current position
		printf("\033[2J");
		printf("\033[%d;%dH*", term_y, term_x);
		fflush(stdout);

		// Wait 70ms before next frame
		usleep(70000);
	}
}
