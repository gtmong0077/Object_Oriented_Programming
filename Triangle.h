#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h" // Point 클래스를 매개변수로 사용하기 위해 포함

/**
 * @class Triangle
 * @brief 세 개의 Point로 정의되는 삼각형 클래스
 */
class Triangle {
public:
    /**
     * @brief (c) 세 개의 Point 객체를 받아 삼각형을 생성합니다.
     * 내부적으로 세 변의 거리를 계산하고 유효성을 검사합니다.
     * @param p1 첫 번째 꼭짓점
     * @param p2 두 번째 꼭짓점
     * @param p3 세 번째 꼭짓점
     */
    Triangle(Point p1, Point p2, Point p3);

    /**
     * @brief (e) 삼각형의 둘레를 반환합니다.
     * @return 둘레 (a + b + c)
     */
    double getPerimeter() const;

    /**
     * @brief (e) 삼각형의 넓이를 반환합니다. (헤론의 공식 사용)
     * @return 넓이
     */
    double getArea() const;

    // 유효성 검사 결과를 확인하기 위한 간단한 접근자 (선택 사항)
    double getFirstSide() const;
    double getSecondSide() const;
    double getThirdSide() const;

private:
    // (b) 세 변의 길이
    double firstSide;
    double secondSide;
    double thirdSide;

    /**
     * @brief (c) 두 점 사이의 거리를 계산하는 헬퍼 함수
     * @param p1 첫 번째 점
     * @param p2 두 번째 점
     * @return 두 점 사이의 거리
     */
    double calculateDistance(Point p1, Point p2);

    /**
     * @brief (d) 세 변이 유효한 삼각형을 이루는지 검사하는 헬퍼 함수
     * @param a 변 1
     * @param b 변 2
     * @param c 변 3
     * @return 유효하면 true, 아니면 false
     */
    bool isValid(double a, double b, double c);
};

#endif // TRIANGLE_H