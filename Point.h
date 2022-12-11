//
// Created by Daniel Lifshitz on 30/11/2022.
//

#ifndef AP_TASK2_POINT_H
#define AP_TASK2_POINT_H

#include <vector>
#include <iostream>
#include "SafetyChecks.h"
//Called PointType so you could change the thing you try to classify/want to add more types.


class Point {
    // We don't want the iris specific stats to be changed.
    private:
        std::vector<double> pointStats;
        std::string type;
    public:
        Point(std::vector<double> = {0}, std::string type = "UNKNOWN");
        Point(const Point& point);
        //We want to be able to add as much information of the point as wanted.
        double getStat(int) const;
        std::string getType() const;
        std::vector<double> getAll() const;
        void setFromVector(std::vector<std::string>);
};

std::ostream& operator<<(std::ostream& os, const Point& point);


#endif //AP_TASK2_POINT_H
