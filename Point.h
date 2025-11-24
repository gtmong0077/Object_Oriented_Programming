#ifndef POINT_H
#define POINT_H

/**
 * @class Point
 * @brief 2D 평면의 한 점(x, y)을 나타내는 클래스
 */
class Point {
public:
    /**
     * @brief 기본 생성자. (0, 0)으로 초기화합니다.
     */
    Point(double x_val = 0.0, double y_val = 0.0);

    /**
     * @brief x 좌표를 반환합니다.
     * @return x 좌표
     */
    double getX() const;

    /**
     * @brief y 좌표를 반환합니다.
     * @return y 좌표
     */
    double getY() const;

private:
    double x; // (a) x 좌표
    double y; // (a) y 좌표
};

#endif // POINT_H