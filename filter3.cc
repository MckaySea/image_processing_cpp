//Student 3 Name:
#include <vector>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

const int RED = 0, GREEN = 1, BLUE = 2;

//YOU: Write your own filter here - delete the demo code or modify it to your purposes
//void filter3(vector<vector<vector<int>>> &vec) {
void filter3(vector<vector<vector<int>>> &vec, vector<vector<vector<int>>> &vec2) {
    size_t rows = vec.size() < vec2.size() ? vec.size() : vec2.size();
    if (!rows) exit(1);
    size_t cols = vec.at(0).size() < vec2.at(0).size() ? vec.at(0).size() : vec2.at(0).size();
    if (!cols) exit(1);
    size_t colors = vec.at(0).at(0).size();
    if (!colors) exit(1);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            //DEMO CODE BEGIN
			//This code composites vec2 on top of vec by averaging the pixel data together
			vec.at(i).at(j).at(RED) = (vec.at(i).at(j).at(RED) + vec2.at(i).at(j).at(RED)) / 2;
			vec.at(i).at(j).at(GREEN) = (vec.at(i).at(j).at(GREEN) + vec2.at(i).at(j).at(GREEN)) / 2;
			vec.at(i).at(j).at(BLUE) = (vec.at(i).at(j).at(BLUE) + vec2.at(i).at(j).at(BLUE)) / 2;
            //DEMO CODE END
        }
    }
}
