#ifndef nemt_h
#define nemt_h
#include <nemt.h>
#include <SPI.h>  
#include <Pixy.h>

class Nemt {
public:
    Nemt(int cl = 50);
    int give_x(int block_color);
    int give_left(int block_color);
    int give_right(int block_color);
private:
    Pixy pixy;
    void give_v(int block_color);
    int goal_number;
    int blocks;
    int left_point_goal, right_point_goal , x_point_goal;
    int goal_color;
    int counter;
    int counter_limit;
};

#endif