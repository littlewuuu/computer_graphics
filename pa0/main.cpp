#include <cmath>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <iostream>

int main()
{
    //定义初始点
    Eigen::Vector3f point(2.0f, 1.0f, 1.0f); // use homogenous coordinates, so the third element is 1.0f
    //定义旋转矩阵和平移矩阵
    Eigen::Matrix3f rota;
    Eigen::Matrix3f tran;
    double theta = 45.0 / 180.0 * M_PI;
    //旋转矩阵
    rota << cos(theta), -1.0 * sin(theta), 0,
            sin(theta), cos(theta), 0,
            0, 0, 1;
    //平移矩阵
    tran << 1, 0, 1,
            0, 1, 2,
            0, 0, 1;
    //进行旋转和平移
    point = tran * rota * point;

    std::cout << point << std::endl;
    std::cout << point[0] << "," << point[1] << std::endl;

    return 0;
}