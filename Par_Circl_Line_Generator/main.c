#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {


	printf("Which shepe would you like draw?\n1. Line\n2.Parabole\n3.Circle\n4.EXIT\n");
	int choose;
	scanf_s("%d", &choose);
	if (choose == 1) {
		printf("Line formula is y=ax + b\nPlease enter cofficients a and b :\n");
		int a, b;
		scanf_s("%d%d", &a, &b);
		printf("            y\n");

		for (int ycomp = 12; ycomp >= -13; ycomp--) {




			for (int xcomp = -12; xcomp <= 13; xcomp++) {


				int y;
				y = xcomp * a + b;


				if (xcomp == 0 && y != ycomp) {
					printf("|");
				}
				else if (ycomp == 0 && xcomp <= 12 && y != ycomp) {
					printf("-");

				}
				else if (xcomp == 13) {
					printf("\n");
				}
				else if (y == ycomp) {
					printf("*");
				}

				else if (ycomp == 0 && xcomp == 13) {
					printf("x");
				}

				else {
					printf(" ");
				}



			}



		}
	}


	else if (choose == 2) {
		float a, b, c;
		printf("Parabole formula is y=ax^2 + bx + c\nPlease enter cofficients a , b and c:\n");
		scanf_s("%f%f%f", &a, &b, &c);
		for (int ycomp = 12; ycomp >= -13; ycomp--) {




			for (int xcomp = -12; xcomp <= 13; xcomp++) {


				int y;
				y = xcomp * xcomp * a + b * xcomp + c;


				if (xcomp == 0 && y != ycomp) {
					printf("|");
				}
				else if (ycomp == 0 && xcomp <= 12 && y != ycomp) {
					printf("-");

				}
				else if (xcomp == 13) {
					printf("\n");
				}
				else if (y == ycomp) {
					printf("*");
				}

				else if (ycomp == 0 && xcomp == 13) {
					printf("x");
				}

				else {
					printf(" ");
				}



			}



		}

	}


	else if (choose == 3) {
		int a, b, r;
		printf("Circle formula is (x-a)^2 + (y-b)^2 = r^2\nPlease enter cofficients center[a,b] and r(radius) :\n");
		scanf_s("%d%d%d", &a, &b, &r);
		for (int ycomp = 12; ycomp >= -13; ycomp--) {




			for (int xcomp = -12; xcomp <= 13; xcomp++) {


				float y1;
				float y2 = 1;
				float tmp = (r * r) - ((xcomp - a) * (xcomp - a));
				if (tmp < 0) {
					tmp = -1 * tmp;
					y1 = (sqrt(tmp) - b);
					y2 = -(sqrt(tmp) + b);
				}
				if (tmp >= 0) {
					y1 = (sqrt(tmp) + b);
				}
				if (tmp >= 0) {
					y2 = -(sqrt(tmp) - b);
				}



				if (xcomp == 0 && y1 != ycomp) {
					printf("|");
				}
				else if (ycomp == 0 && xcomp <= 12 && y1 != ycomp) {
					printf("-");

				}
				else if (xcomp == 13) {
					printf("\n");
				}

				else if (y1 == ycomp) {
					printf("*");
				}

				else if (y2 == ycomp) {
					printf("*");
				}


				else if (ycomp == 0 && xcomp == 13) {
					printf("x");
				}

				else {
					printf(" ");
				}



			}



		}

	}
	else if (choose == 4) {
		printf("Exit!!");

	}
	else { printf("Wrong index ... "); }
	return 0;
}


