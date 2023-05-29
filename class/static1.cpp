//
// Created by 박유빈 on 2023/05/30.
//

// static : 정적 <-> 동적
//

#include "iostream"
using namespace std;

// 0~1 float R G B
class Color {
public:
    Color() : r(0), g(0), b(0), id(idCounter++) {}
    Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++) {}

    float GetR() {return r;}
    float GetG() {return g;}
    float GetB() {return b;}

    int GetId() {return id;}

    static Color MixColors(Color a, Color b) {
        return {(a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2};
    }

    // 원래는 전역변수이지만 color와 관련이 있기 때문에 클래스 내부로 넣기
    // 장점 - idCounter라는 얘가 전역변수로 선언되어 있을 경우 Color가 아닌
    // 다른 클래스에 대해 존재할 수도 있음, 이 counter를 서로 구별가능해짐
    static int idCounter;

private:
    float r;
    float g;
    float b;

    int id;
};

int Color::idCounter = 1;


int main() {
    Color blue(0, 0, 1);
    Color red(1, 0, 0);
    Color purple = Color::MixColors(blue, red);

    cout << "r = " << purple.GetR() << " g = " << purple.GetG() << " b = " << purple.GetB() << endl;

    cout << "blue.GetId() = " << blue.GetId() << endl;
    cout << "red.GetId() = " << red.GetId() << endl;
    cout << "purple.GetId() = " << purple.GetId() << endl;

}
