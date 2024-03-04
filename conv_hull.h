#ifndef LAB3_CONV_HULL_H
#define LAB3_CONV_HULL_H

#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

const int width = 1000;
const int height = 1000;
struct point{
    double x, y;
    point(double x_ = 0, double y_ = 0):x(x_), y(y_){};
    bool operator>(const point &other) const {
        if (y == other.y)
            return x > other.x;
        return y > other.y;
    }
    bool operator<(const point &other) const {
        if (y == other.y)
            return x < other.x;
        return y < other.y;
    }
    bool operator==(const point &other) const {
        return x == other.x && y == other.y;
    }
    point operator-(const point &other) const {
        return point(x - other.x, y - other.y);
    }
};

vector<point> bucket_sort(vector<point> arr);

vector<point> kirp(vector<point> input);

vector<point> graham(vector<point> input);

double S(point a, point b, point c);

vector<point> an_j(vector<point> input);

vector<point> quick_hull(vector<point> input);

void find_hull(vector<point> &input, point a, point b, vector<point> &res);

void insert(vector<point> &res, point a, point b, point c);

#endif //LAB3_CONV_HULL_H
