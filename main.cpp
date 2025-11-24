#include <iostream>
#include <string>
#include "CommonString.h" // 우리가 만든 헤더 파일 포함

int main() {
    // CommonString 클래스의 인스턴스 생성
    CommonString cs;

    string s1;
    cout << "Enter first string: " << s1 << endl;
    getline(cin,s1);
    
    string s2;
    cout << "Enter second string: " << s2 << endl;
    getline(cin,s2);

    // c-1. 각 문자열에서 중복 제거
    string s1_unique = cs.RemoveDuplicates(s1);
    string s2_unique = cs.RemoveDuplicates(s2);

    // cout << "After removing duplicates from string 1: " << s1_unique << endl;
    // cout << "After removing duplicates from string 2: " << s2_unique << endl;

    // c-2. 중복 제거된 문자열들 사이의 공통 문자 찾기
    string common = cs.FindCommonCharacters(s1_unique, s2_unique);
    cout << "String with common characters: " << common << endl;

    return 0;
    // --- 요구사항 (e) : 추가적인 어려운 테스트 케이스 ---
    //std::cout << "\n--- Additional Difficult Test Cases ---" << std::endl;

    // 테스트 케이스 1: 대소문자 구분, 공백, 특수문자 포함
    // std::string t1_s1 = "Hello World! 123";
    // std::string t1_s2 = "world, HELLO? 1_3";
    
    // std::cout << "\nTest Case 1: Case-sensitivity, whitespace, and special chars" << std::endl;
    // std::cout << "string 1: " << t1_s1 << std::endl;
    // std::cout << "string 2: " << t1_s2 << std::endl;

    // std::string t1_s1_unique = cs.RemoveDuplicates(t1_s1);
    // std::string t1_s2_unique = cs.RemoveDuplicates(t1_s2);
    // std::cout << "Unique 1: " << t1_s1_unique << std::endl;
    // std::cout << "Unique 2: " << t1_s2_unique << std::endl;

    // std::string t1_common = cs.FindCommonCharacters(t1_s1_unique, t1_s2_unique);
    // std::cout << "Common: " << t1_common << std::endl;

    // 테스트 케이스 2: 공통 문자가 전혀 없는 경우 (Edge Case)
    // std::string t2_s1 = "abcdefg";
    // std::string t2_s2 = "1234567";

    // std::cout << "\nTest Case 2: No common characters" << std::endl;
    // std::cout << "string 1: " << t2_s1 << std::endl;
    // std::cout << "string 2: " << t2_s2 << std::endl;

    // std::string t2_s1_unique = cs.RemoveDuplicates(t2_s1);
    // std::string t2_s2_unique = cs.RemoveDuplicates(t2_s2);
    // std::cout << "Unique 1: " << t2_s1_unique << std::endl;
    // std::cout << "Unique 2: " << t2_s2_unique << std::endl;

    // std::string t2_common = cs.FindCommonCharacters(t2_s1_unique, t2_s2_unique);
    // std::cout << "Common: " << t2_common << " (Should be empty)" << std::endl;

}