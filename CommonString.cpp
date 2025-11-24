#include "CommonString.h"
#include <string>
#include <unordered_set> // 해시셋을 사용하여 O(1) 평균 시간 복잡도로 조회가 가능합니다.
using namespace std;

string CommonString::RemoveDuplicates(string s) {
    string result = "";
    unordered_set<char> seen_characters; // 이미 등장한 문자들을 저장하는 set

    for (char c : s) {
        // seen_characters set에 c가 없다면(처음 보는 문자라면)
        if (seen_characters.find(c) == seen_characters.end()) {
            result += c; // 결과 문자열에 추가
            seen_characters.insert(c); // "봤음" 처리
        }
    }
    return result;
}

string CommonString::FindCommonCharacters(string s1, string s2) {
    string result = "";
    
    // s2의 문자들을 set에 저장하여 O(1)에 검색할 수 있도록 함
    unordered_set<char> s2_chars(s2.begin(), s2.end());
    
    // s1을 순회하면서 s2에 존재하는지 확인
    // 공통 문자 결과 자체의 중복도 방지하기 위해 'result_seen' set을 사용
    unordered_set<char> result_seen; 

    for (char c : s1) {
        // c가 s2에 존재하고, 아직 결과(result)에 추가되지 않았다면
        if (s2_chars.count(c) && result_seen.find(c) == result_seen.end()) {
            result += c;
            result_seen.insert(c);
        }
    }
    return result;
}