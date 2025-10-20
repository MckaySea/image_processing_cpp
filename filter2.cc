//Student 2 Name:
#include <vector>
#include <iostream> //IWYU: pragma keep
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

const int RED = 0, GREEN = 1, BLUE = 2;
//YOU: Write your own filter here - delete the demo code or modify it to suit your purposes
void filter2(vector<vector<vector<int>>> &vec) {
	size_t rows = vec.size();
	if (!rows) exit(1);
	size_t cols = vec.at(0).size();
	if (!cols) exit(1);
	size_t colors = vec.at(0).at(0).size();
	if (!colors) exit(1);

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			//DEMO CODE BEGIN
			//How far are we from the center?
			const double diag_length = hypot(rows/2.0,cols/2.0); //How many pixels is the diagonal from the center of the image to a corner?
			double distance = hypot(i-(rows/2.0),j-(cols/2.0));
			double brightness = 1 - 2*(distance/diag_length); //0 brightness at corners, 200% brightness in middle
			//cout << "i: " << i << " j: " << j << " bright: " << brightness << endl;
			//cout << "diag_length: " << diag_length << " distance: " << distance << endl;
			for (int k = 0; k < colors; k++) {
				vec.at(i).at(j).at(k) *= brightness; //Lighten or darken each color by its distance from the center
			}
			//DEMO CODE END
		}
	}
}

