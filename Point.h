//
// Created by Daniel Lifshitz on 30/11/2022.
//

#ifndef AP_Task2_POINT_H
#define AP_Task2_POINT_H

#include <vector>
#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <fstream>

//Called PointType so you could change the thing you try to classify/want to add more types.


class Point {
    // We don't want the iris specific coordinates to be changed.
private:
    std::vector<double> pointCords;
    std::string type;
public:
    Point(std::vector<double> = {0}, std::string type = "");
    Point(const Point& point);
    //We want to be able to add as much information of the point as wanted.
    double getCord(int) const;
    std::string getType() const;
    std::vector<double> getAll() const;
    void setFromVector(std::vector<std::string>);
    void setFromString(std::string,char);
};
bool IsDouble(std::string);
std::ostream& operator<<(std::ostream& os, const Point& point);


#endif //AP_Task2_POINT_H
