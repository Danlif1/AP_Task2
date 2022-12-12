//
// Created by Daniel Lifshitz on 30/11/2022.
//


#ifndef AP_Task2_POINTREADER_H
#define AP_Task2_POINTREADER_H
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Point.h"
#include "SafetyChecks.h"
class PointReader {
private:
    std::string fileName;
    std::ifstream fin;
    std::vector<std::string> row;


public:
    PointReader(const std::string&);
    bool getNextPoint(Point&);

};
#endif //AP_Task2_POINTREADER_H
