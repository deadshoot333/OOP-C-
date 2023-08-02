#include <iostream>
#include <cmath>
using namespace std;

class Line {
private:
    int num_points;
    double* x_coordinates;
    double* y_coordinates;

public:
    Line(int num_points_in) {
        num_points = num_points_in;
        x_coordinates = new double[num_points];
        y_coordinates = new double[num_points];
        cout << "Enter coordinates:" << endl;
        for (int i = 0; i < num_points; i++) {
            cin >> x_coordinates[i] >> y_coordinates[i];
        }
    }

    ~Line() {
        delete[] x_coordinates;
        delete[] y_coordinates;
    }

    double calculate_length() {
        double length = 0;
        for (int i = 1; i < num_points; i++) {
            double dx = x_coordinates[i] - x_coordinates[i-1];
            double dy = y_coordinates[i] - y_coordinates[i-1];
            length += sqrt(dx*dx + dy*dy);
        }
        return length;
    }
};

int main() {
    int num_points1, num_points2;
    cout << "Number of points in Line 1: ";
    cin >> num_points1;
    Line line1(num_points1);
    cout << "Number of points in Line 2: ";
    cin >> num_points2;
    Line line2(num_points2);
    double length1 = line1.calculate_length();
    double length2 = line2.calculate_length();
    cout << "Length of Line 1: " << length1 << endl;
    cout << "Length of Line 2: " << length2 << endl;
    if (length1 > length2) {
        cout << "Line 1 > Line 2" << endl;
    } else if (length1 < length2) {
        cout << "Line 2 > Line 1" << endl;
    } else {
        cout << "Line 1 = Line 2" << endl;
    }
    return 0;
}
