//
// Created by Daniel Lifshitz on 30/11/2022.
//

#ifndef AP_TASK2_POINT_H
#define AP_TASK2_POINT_H

//Called PointType so you could change the thing you try to classfiy/want to add more types.
enum pointType
{
    setosa,
    virginica,
    versicolor,
    UNKNOWN
};

class Point {
    // We don't want the iris specific stats to be changed.
    private:
        double width;
        double sepalLength;
        double sepalWidth;
        double petalLength;
        pointType type;
    public:
        //TODO: Add Constractor/s for point.
        //We do want to access the information of the iris so we will create getters.
        double getWidth() const;
        double getSepalLength() const;
        double getSepalWidth() const;
        double getPetalLength() const;
        pointType getType() const;

};


#endif //AP_TASK2_POINT_H
