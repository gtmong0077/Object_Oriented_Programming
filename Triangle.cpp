#include "Triangle.h"
#include <cmath>   // sqrt, pow 함수 사용
#include <iostream> // 에러 메시지 출력용

// (c) 두 점 사이의 거리 계산 (d = sqrt((x2 - x1)^2 + (y2 - y1)^2))
double Triangle::calculateDistance(Point p1, Point p2) {
    double dx = p2.getX() - p1.getX();
    double dy = p2.getY() - p1.getY();
    return std::sqrt(dx * dx + dy * dy);
    // 또는 return std::sqrt(std::pow(dx, 2) + std::pow(dy, 2));
}

// (d) 세 변의 유효성 검사
bool Triangle::isValid(double a, double b, double c) {
    // 1. 모든 변은 양수여야 함
    if (a <= 0 || b <= 0 || c <= 0) {
        return false;
    }
    // 2. 임의의 두 변의 합은 나머지 한 변보다 커야 함
    if (a + b <= c || a + c <= b || b + c <= a) {
        return false;
    }
    return true;
}

// (c, d) 생성자 구현
Triangle::Triangle(Point p1, Point p2, Point p3) {
    // c. 세 점을 바탕으로 각 변의 길이 계산
    double a = calculateDistance(p1, p2);
    double b = calculateDistance(p2, p3);
    double c = calculateDistance(p3, p1);

    // d. 유효성 검사
    if (isValid(a, b, c)) {
        // 유효하면 변의 길이 할당
        firstSide = a;
        secondSide = b;
        thirdSide = c;
    } else {
        // (d) 유효하지 않으면 에러 메시지 출력 및 0으로 초기화
        firstSide = 0;
        secondSide = 0;
        thirdSide = 0;
    }
}

// (e) 둘레 계산
double Triangle::getPerimeter() const {
    return firstSide + secondSide + thirdSide;
}

// (e) 넓이 계산 (헤론의 공식)
double Triangle::getArea() const {
    if (getPerimeter() == 0) {
        // 유효하지 않은 삼각형(변이 0)의 경우 넓이는 0
        return 0.0;
    }
    // p = perimeter / 2
    double p = getPerimeter() / 2.0;
    // area = sqrt(p * (p - a) * (p - b) * (p - c))
    return std::sqrt(p * (p - firstSide) * (p - secondSide) * (p - thirdSide));
}

// 접근자 (Getter) 구현
double Triangle::getFirstSide() const {
    return firstSide;
}
double Triangle::getSecondSide() const {
    return secondSide;
}
double Triangle::getThirdSide() const {
    return thirdSide;
}