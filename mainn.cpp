#include <iostream>
#include <string>
#include <iomanip> // 소수점 출력을 위해 포함
#include "Triangle.h" // Point.h는 Triangle.h에 이미 포함됨
using namespace std;

// 테스트 결과를 출력하는 헬퍼 함수
// void printTriangleInfo(const string& title, Triangle& t) {
//     cout << "--- " << title << " ---" << endl;
//     cout << "Sides: " 
//             << t.getFirstSide() << ", " 
//             << t.getSecondSide() << ", " 
//             << t.getThirdSide() << endl;
//     cout << "Perimeter: " << t.getPerimeter() << endl;
//     cout << "Area: " << t.getArea() << endl;
//     cout << "---------------------------------" << endl;
// }

int main() {
    // C++ 스트림의 소수점 정밀도 설정
    cout << fixed << setprecision(2);
    std::cout << "Triangle1 ( Point(1, 1), Point(-1, -1), Point(0, 0) )" << std::endl;
    Point p1_1(1, 1);
    Point p1_2(-1, -1);
    Point p1_3(0, 0);
    Triangle t1(p1_1, p1_2, p1_3);
    if (t1.getPerimeter() == 0.0) {
        std::cout << "Invalid triangle information!" << std::endl;
    }
    std::cout << "Perimeter: " << t1.getPerimeter() << std::endl;
    std::cout << "Area: " << t1.getArea() << std::endl << std::endl; // 케이스 구분을 위한 줄바꿈

    // --- Test Case 2 (From Image) ---
    // (5, 5), (10, 5), (10, -5)는 5-10-sqrt(125) 직각삼각형
    std::cout << "Triangle2 ( Point(5, 5), Point(10, 5), Point(10, -5) )" << std::endl;
    Point p2_1(5, 5);
    Point p2_2(10, 5);
    Point p2_3(10, -5);
    Triangle t2(p2_1, p2_2, p2_3);

    if (t2.getPerimeter() == 0.0) {
        std::cout << "Invalid triangle information!" << std::endl;
    }
    std::cout << "Perimeter: " << t2.getPerimeter() << std::endl;
    std::cout << "Area: " << t2.getArea() << std::endl << std::endl;

    // --- Test Case 3 (From Image) ---
    std::cout << "Triangle3 ( Point(3.5, 2.2), Point(44.1, -4.3), Point(-2.6, 7.2) )" << std::endl;
    Point p3_1(3.5, 2.2);
    Point p3_2(44.1, -4.3);
    Point p3_3(-2.6, 7.2);
    Triangle t3(p3_1, p3_2, p3_3);

    if (t3.getPerimeter() == 0.0) {
        std::cout << "Invalid triangle information!" << std::endl;
    }
    std::cout << "Perimeter: " << t3.getPerimeter() << std::endl;
    std::cout << "Area: " << t3.getArea() << std::endl << std::endl;

    // --- Test Case 4 (From Image) ---
    std::cout << "Triangle4 ( Point(11.2, -11.1), Point(0.4, 0.2), Point(-7, -1) )" << std::endl;
    Point p4_1(11.2, -11.1);
    Point p4_2(0.4, 0.2);
    Point p4_3(-7, -1);
    Triangle t4(p4_1, p4_2, p4_3);

    if (t4.getPerimeter() == 0.0) {
        std::cout << "Invalid triangle information!" << std::endl;
    }
    std::cout << "Perimeter: " << t4.getPerimeter() << std::endl;
    std::cout << "Area: " << t4.getArea() << std::endl << std::endl;


    // --- (g) 추가적인 어려운 테스트 케이스 ---
    std::cout << "--- (g) Additional Difficult Test Cases ---" << std::endl << std::endl;

    // 🎯 테스트 케이스 1 (g): 중복된 점 (Duplicate Points)
    // (5, 0), (5, 0), (1, 1) -> 한 변의 길이가 0이 됨
    std::cout << "Test Case 5 (Duplicate) ( Point(5, 0), Point(5, 0), Point(1, 1) )" << std::endl;
    Point d1(5, 0);
    Point d2(5, 0);
    Point d3(1, 1);
    Triangle t5(d1, d2, d3);
    
    if (t5.getPerimeter() == 0.0) {
        std::cout << "Invalid triangle information!" << std::endl;
    }
    std::cout << "Perimeter: " << t5.getPerimeter() << std::endl;
    std::cout << "Area: " << t5.getArea() << std::endl << std::endl;

    // 🎯 테스트 케이스 2 (g): 부동 소수점 정밀도 문제
    // (0, 0), (1, 1.0000001), (2, 2) -> 거의 일직선
    // 이 케이스는 유효한 삼각형으로 처리되어야 함 (매우 작은 넓이)
    // 만약 유효하지 않다고 나온다면 isValid의 비교 로직에 문제가 있을 수 있음 (e.g., a+b > c)
    std::cout << "Test Case 6 (Near Collinear) ( Point(0, 0), Point(1, 1.0000001), Point(2, 2) )" << std::endl;
    Point n1(0, 0);
    Point n2(1, 1.0000001);
    Point n3(2, 2);
    Triangle t6(n1, n2, n3);
    
    if (t6.getPerimeter() == 0.0) {
        std::cout << "Invalid triangle information!" << std::endl;
    }
    std::cout << "Perimeter: " << t6.getPerimeter() << std::endl;
    std::cout << "Area: " << t6.getArea() << std::endl;

    return 0;
}
    // --- (f) 기본 테스트 케이스 (3-4-5 직각 삼각형) ---
    // Point p1(0.0, 0.0);
    // Point p2(3.0, 0.0);
    // Point p3(0.0, 4.0);
    // Triangle t1(p1, p2, p3);
    // printTriangleInfo("Test 1: Valid (3-4-5) Triangle", t1);

    // --- (g) 추가적인 어려운 테스트 케이스 ---

    // 🎯 테스트 케이스 1: 일직선 상의 점 (Collinear Points)
    // (0,0), (1,1), (2,2) -> 변: sqrt(2), sqrt(2), 2*sqrt(2)
    // a + b = c 이므로, a + b > c 조건을 만족하지 못함.
    /* This part of the code is setting up and testing a difficult test case for a Triangle object.
    Here's what each step does: */
    // std::cout << "\n(g) Difficult Test Case 1: Collinear Points" << std::endl;
    // Point c1(0.0, 0.0);
    // Point c2(1.0, 1.0);
    // Point c3(2.0, 2.0);
    // Triangle t2_collinear(c1, c2, c3); // 에러 메시지 출력 예상
    // printTriangleInfo("Test 2: Collinear (0,0), (1,1), (2,2)", t2_collinear);

    // 🎯 테스트 케이스 2: 중복된 점 (Duplicate Points)
    // (0,0), (0,0), (5,5) -> 변: 0, sqrt(50), sqrt(50)
    // 한 변의 길이가 0이므로, a > 0 조건을 만족하지 못함.
    // std::cout << "\n(g) Difficult Test Case 2: Duplicate Points" << std::endl;
    // Point d1(0.0, 0.0);
    // Point d2(0.0, 0.0); // p1과 동일
    // Point d3(5.0, 5.0);
    // Triangle t3_duplicate(d1, d2, d3); // 에러 메시지 출력 예상
    // printTriangleInfo("Test 3: Duplicate (0,0), (0,0), (5,5)", t3_duplicate);