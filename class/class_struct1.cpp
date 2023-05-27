//
// Created by 박유빈 on 2023/05/28.
//

// struct
// class = 자료 저장 + 자료 처리
// 클래스(타입) : 특정한 용도를 수행하기 위한 변수와 함수를 모아둔 틀 (자료형)
// 객체(object) : 그 틀을 이용하여 찍어낸 개체 (변수, 메모리 상의 공간)

// private, protected, public

#include "iostream"
using namespace std;


// struct는 접근제어 지시자가 public이 기본
// class는 기본적으로 private이 기본
class TV {
    bool powerOn;
    int channel;
    int volume;

public:
    void on() {
        powerOn = true;
        cout << "TV를 켰습니다" << endl;
    }
    void off() {
        powerOn = false;
        cout << "TV를 껐습니다" << endl;
    }
    void setChannel(int cnl) {
        if (cnl >= 1 && cnl <= 999) {
            channel = cnl;
            cout << "채널을 " << cnl << "으로 바꿨습니다" << endl;
        }
    }
    void setVolume(int vol) {
        if (vol >= 0 && vol <= 100) {
            volume = vol;
            cout << "볼륨을 " << vol << "으로 바꿨습니다" << endl;
        }
    }

};

int main() {
    TV lg;
//    lg.powerOn = true;
    lg.on();
//    lg.channel = 10;
    lg.setChannel(10);
    lg.setVolume(50);
    // lg.volume = 400; // 여전히 사용가능

}

