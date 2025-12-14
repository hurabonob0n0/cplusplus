//------------------------------------------------------------------------------------------
// 2025 2학기 C++ 월56수78                12.10 수요일                          (15주 2일)
//------------------------------------------------------------------------------------------
// 12/15 월 - 기말시험
// 12/18 수 - 점수확인 
//--------------------------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <random>
#include <fstream>
using namespace std;

// 다음 주 시험 코드
//          Shape
//
//     Rec        Cir       Star
//     100        30        금성

default_random_engine dre{ 20251208 };
uniform_int_distribution uidRec{ 100, 10'0000 };
uniform_int_distribution uidCir{ 1, 10'000 };

class Shape {
public:
    Shape() : id{ ++gid } {

    }

    virtual void draw() const = 0;
protected:
    // 중요
    int id;     // 생성될때 부여되는 값
    static int gid;
};

int Shape::gid = 0;

class Rec : public Shape {
public:
    virtual void draw() const override {
        cout << id << " - 사각: " << area << endl;
    }
    double get_Area() const { return area; }
private:
    double area = uidRec(dre);
};

class Cir : public Shape {
public:
    virtual void draw() const override {
        cout << id << " - 원: " << rad << endl;
    }
private:
    double rad = uidCir(dre);
};

void Erase(Shape** A, int n, int& cnt) {
    for (int i = n - 1; i < cnt-1; ++i) {
        if (i == n - 1)
            delete A[i];
        A[i] = A[i + 1];
    }
    --cnt;
}

//-----------------------------------------
int main()
//-----------------------------------------
{
    // 시험환경설명
    // 도형을 관리하는 그림판 프로그램이다
    // 처음 10개까지는 마음대로 도형을 추가할 수 있다.
    
    // 그림판 프로그램은 10개를 넘어 메모리가 허용하는 한 몇 개의 도형이라도 추가할 수 있다.
    // 10개에서 확장 가능하다.

    // [문제 예시]

    // 1. Rec** r = new Rec[3]; 도형이 있는데 메모리 그림그려라.
    // r[0] 그림그려라.

    // 2. 파일을 읽어서 숫자가 홀수이면 Rec, 짝수이면 Cir를 10개까지 프로그램에 추가하라
    // 랜덤값으로 10개까지 Rec나 Cir를 그림판에 추가하라
    Shape** Shapes = new Shape*[10];
    fstream in{ "hello.txt" };
    if (!in)
        return 251215;
    int n{};
    int cnt{};
    while (in >> n) {
        if (cnt > 9)
            break;
        if (n % 2 == 0) {
            Shapes[cnt] = new Cir{};
        }
        else
            Shapes[cnt] = new Rec{};
        ++cnt;
    }

    // 4. 모든 도형을 draw하여 다형성이 구현됨을 확인하라.
    for (int i = 0; i < cnt; ++i) {
        Shapes[i]->draw();
    }

    cout << endl << "3번 지움" << endl;
    // 5. 012345 도형 중에서 3번 도형을 지웠다.
    // 모든 도형이 제대로 관리되도록 코딩하라.
    Erase(Shapes, 3, cnt);

    for (int i = 0; i < cnt; ++i) {
        Shapes[i]->draw();
    }

    // 6. 도형중에서 Cir을 모두 지워라.
    // 모든 도형이 제대로 관리되도록 코딩하라.
    for (int i = 0; i < cnt; ++i) {
        if (dynamic_cast<Cir*>(Shapes[i])) {
            Erase(Shapes, i+1, cnt);
            --i;
        }
    }
    cout <<endl<< "원 다 지움" << endl;
    for (int i = 0; i < cnt; ++i) {
        Shapes[i]->draw();
    }

    
    cout << endl << "사각형 오름차순 정렬" << endl;
    // 7. 사각형을 area기준 오름차순으로 정렬하여 출력하고 싶다.
    // 정렬결과를 화면에 출력하라.
    // 어떻게 했는지 설명하라
    qsort(Shapes, cnt, sizeof(Shape*), [](const void* A, const void* B) {
        return ((Rec*)(A))->get_Area() - ((Rec*)(A))->get_Area() > 0 ? 1 : -1;
        });
    for (int i = 0; i < cnt; ++i) {
        Shapes[i]->draw();
    }

    // 8. 프로그램을 끝내기 전 메모리를 모두 정리하라
    for (int i = 0; i < cnt; ++i) {
        delete Shapes[i];
        Shapes[i] = nullptr;
    }
}

