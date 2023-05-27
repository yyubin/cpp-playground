//
// Created by 박유빈 on 2023/05/28.
//

#include "cstdio"

enum EGameState {
    GAMESTATE_MAINMENU,
    GAMESTATE_PLAYING,
    GAMESTATE_PAUSED,
    GAMESTATE_GAMEOVER
};

int main() {
    int currState = GAMESTATE_MAINMENU;

    while (true) {
        switch (currState) {
            case GAMESTATE_MAINMENU:
                break;
            case GAMESTATE_PLAYING:
                currState = 1;
                break;
            case GAMESTATE_PAUSED:
                break;
            case GAMESTATE_GAMEOVER:
                break;
        }
    }
}