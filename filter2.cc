//Student 2 Name:
#include <vector>
#include <iostream>
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
			
			int r = vec.at(i).at(j).at(RED);
			int g = vec.at(i).at(j).at(GREEN);
			int b = vec.at(i).at(j).at(BLUE);
			
			if (i < 800 and j < 800) {
			  vec.at(i).at(j).at(RED) += 55;
			  vec.at(i).at(j).at(GREEN) += 0;
			  vec.at(i).at(j).at(BLUE) += 55;
			}
									
				
			if ((i < 800) and (j < 1600 and j > 800)) {
			  vec.at(i).at(j).at(RED) += 0;
			  vec.at(i).at(j).at(GREEN) += 55;
			  vec.at(i).at(j).at(BLUE) += 100;
			}
			
			
			if (i < 800 and (j < 2400 and j > 1600)) {
			  vec.at(i).at(j).at(RED) += 55;
			  vec.at(i).at(j).at(GREEN) += 0;
			  vec.at(i).at(j).at(BLUE) += 55;
			}
			
			
			if ((i < 1600 and i > 800) and j < 800) {
			  vec.at(i).at(j).at(RED) += 0;
			  vec.at(i).at(j).at(GREEN) += 55;
			  vec.at(i).at(j).at(BLUE) += 100;
			}

			if ((i < 1600 and i > 800) and j > 1600) {
			  vec.at(i).at(j).at(RED) += 0;
			  vec.at(i).at(j).at(GREEN) += 55;
			  vec.at(i).at(j).at(BLUE) += 100;
			}
		

			if ((i < 2400 and i > 1600) and j < 800) {
			  vec.at(i).at(j).at(RED) += 55;
			  vec.at(i).at(j).at(GREEN) += 0;
			  vec.at(i).at(j).at(BLUE) += 55;
			}

			if ((i < 2400 and i > 1600) and (j < 1600 and j > 800)) {
			  vec.at(i).at(j).at(RED) += 0;
			  vec.at(i).at(j).at(GREEN) += 55;
			  vec.at(i).at(j).at(BLUE) += 100;
			}


			if ((i < 2400 and i > 1600) and (j < 2400 and j > 1600)) {
			  vec.at(i).at(j).at(RED) += 55;
			  vec.at(i).at(j).at(GREEN) += 0;
			  vec.at(i).at(j).at(BLUE) += 85;
			}

			if ((i < 825 and i > 775) or (i < 1625 and i > 1575) or (i < 50) or (i > 2350)) {
			  vec.at(i).at(j).at(RED) = 0;
			  vec.at(i).at(j).at(GREEN) = 0;
			  vec.at(i).at(j).at(BLUE) = 0;
			}

			if ((j < 825 and j > 775) or (j < 1625 and j > 1575) or (j < 50) or (j > 2350)) {
			  vec.at(i).at(j).at(RED) = 0;
			  vec.at(i).at(j).at(GREEN) = 0;
			  vec.at(i).at(j).at(BLUE) = 0;
			}
		}
	}
}

