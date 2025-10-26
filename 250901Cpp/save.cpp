#include "save.h"
//----------------------------------------------------------------
// 한학기 강의를 저장하기 위한 함수 save
//----------------------------------------------------------------
#include <fstream>
#include <chrono>
#include <iostream>

// coding convention을 알아보자
//----------------------------------------------------------------
void save(std::string_view fileName)
//----------------------------------------------------------------
{
    // Main.cpp의 내용을 읽어 파일에 기록할것
    std::ifstream in{ fileName.data() };
    in >> std::noskipws;

    // 저장할 파일을 미리 열어 둔다
    std::ofstream out{ "2025 2학기 C++ 강의저장.txt", std::ios::app };

    // 파일에 저장한 시간을 기록한다
    using namespace std::chrono_literals;
    out << std::endl << std::endl;
    out << "====================================================================" << std::endl;
    out << "저장시간 - " << std::chrono::system_clock::now() + 9h << std::endl;
    out << "====================================================================" << std::endl << std::endl;

    char c;                  // 한 글자를 저장할 수 있는 메모리를 만든다
    while (in >> c) {         // 읽을 글자가 있는 동안 읽어서 c에 저장한다
        out << c;            // out과 연결된 파일에 c로 읽어 온 글자를 저장한다
    }
}