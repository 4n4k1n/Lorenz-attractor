#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

int main(void) {

	double x = 1, y = 0, z = 0;

	double sigma = 10.0;
	double roh = 28.0;
	double beta = 8.0 / 3.0;

	double dt = 0.01;

	while (true) {

		double dx = sigma * (y - x);
		double dy = x * (roh - z) - y;
		double dz = x * y - beta * z;

		x += dx * dt;
		y += dy * dt;
		z += dz * dt;

		int term_x = (int)(x * 2 + 40);
		int term_y = (int)(z * 1 + 12);

		printf("\033[2J");
		printf("\033[%d;%dH*", term_y, term_x);
		fflush(stdout);

		usleep(70000);
	}
}
