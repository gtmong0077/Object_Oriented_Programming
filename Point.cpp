#include "Point.h"

Point::Point(double x_val, double y_val) 
    : x(x_val), y(y_val) {
    // 생성자 본문 (초기화 리스트에서 모든 작업 완료)
}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}