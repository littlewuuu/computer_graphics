#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

int main(){
    Eigen::Vector3f point(2.0f,1.0f,1.0f); //use homogenous coordinates, so the third element is 1.0f
    
    Eigen::Matrix3f rota;
    Eigen::Matrix3f tran;
    double theta = 45.0/180.0*M_PI; 
    
    rota <<cos(theta),-1.0*sin(theta),0,
            sin(theta),cos(theta),0,
            0,0,1;

    tran <<1,0,1,
    0,1,2,
    0,0,1;

    point = tran*rota*point;
    std::cout<<point<<std::endl;
    std::cout<<point[0]<<","<<point[1]<<std::endl;


   
    return 0;
}