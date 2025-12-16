#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;
template <typename T>
void printVector(const vector<T>& vec) {
    for_each(vec.begin(), vec.end(), [](const T& str) {
        cout << str << " ";
    });
    cout << endl;
}

struct Point {
    double x;
    double y;

    // A. Comparison Overloading (for std::sort)
    // std::sort가 Point 객체를 비교할 수 있도록 operator<를 정의해야 함.
    // 여기서는 x 좌표를 기준으로 정렬하고, x가 같으면 y 좌표로 정렬하도록 정의함.
    bool operator<(const Point& other) const {
        if (x != other.x) {
            return x < other.x;
        }
        return y < other.y;
    }
};

int main(){
    vector<string> months;
    months.push_back("January");
    months.push_back("February");
    months.push_back("March");
    months.push_back("April");
    months.push_back("May");
    months.push_back("June");
    cout<< "Input Names: "<<endl;
    printVector(months);
    sort(months.begin(), months.end());
    cout<<"Sorted Names: "<<endl;
    printVector(months);

    vector<int> numbers;
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(22);
    numbers.push_back(16);
    numbers.push_back(26);
    numbers.push_back(12);
    cout<< "Input Integers: "<<endl;
    printVector(numbers);
    sort(numbers.begin(), numbers.end());
    cout<<"Sorted Integers: "<<endl;
    printVector(numbers);

    // === [Test Case 1] 사용자 정의 객체 (Point) 테스트 ===
    // ------------------------------------------------------------------------
    cout << "\n===== 1. Test Case: Point (Custom Struct) =====" << endl;
    cout << "Challenging Reason: Requires 'operator<' overloading for std::sort." << endl;
    
    vector<Point> points;
    points.push_back({3.0, 1.0});
    points.push_back({1.0, 5.0});
    points.push_back({3.0, 0.5});
    points.push_back({2.0, 10.0});

    cout << "Input Points (Unsorted):" << endl;
    printVector(points);
    
    // std::sort 호출 (Point::operator<가 필요함)
    sort(points.begin(), points.end());
    
    cout << "Sorted Points (by X then Y):" << endl;
    printVector(points);
    
    // ------------------------------------------------------------------------
    // === [Test Case 2] 포인터 타입 (const char*) 테스트 ===
    // ------------------------------------------------------------------------
    cout << "\n===== 2. Test Case: const char* (C-Style Pointer) =====" << endl;
    cout << "Challenging Reason: std::sort compares memory addresses, not string content." << endl;

    vector<const char*> words;
    // 일부러 정렬된 것처럼 보이지 않게 무작위 순서로 넣음
    words.push_back("banana");
    words.push_back("apple");
    words.push_back("zebra");
    words.push_back("cat");

    cout << "Input C-Strings (Unsorted):" << endl;
    printVector(words);
    
    // std::sort 호출 (포인터 주소 비교)
    sort(words.begin(), words.end());
    
    cout << "Sorted C-Strings (BY MEMORY ADDRESS):" << endl;
    // 출력 결과는 사전 순이 아님을 확인해야 함. (메모리 할당 순서에 따라 다름)
    printVector(words);
    return 0;
}