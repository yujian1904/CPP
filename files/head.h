//
// Created by dcfhospitalcgb on 2023/9/6.
//

#ifndef CPP_HEAD_H
#define CPP_HEAD_H
struct polar {
    double distance;
    double angle;
};
struct rect {
    double x;
    double y;
};

polar rect_to_polar(rect xypos);

void show_polar(polar dapos);

#endif //CPP_HEAD_H
