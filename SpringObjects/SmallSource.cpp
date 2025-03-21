#include <windows.h>
//#include <conio.h>
//#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <iostream>

//wchar_t

void setcolor(WORD color);

//https://www.fileformat.info/info/charset/UTF-16/list.htm
// use win+. to access some more characters

int main()
{
    _setmode(_fileno(stdout), _O_U16TEXT);

    /*
    for (int i = 0; i < 255; i++) {
        setcolor(i);
        wprintf(L"Color option: %i. Hello, world.\n", i);
    }
    //*/


    const wchar_t* test = L"the ♔. Testing unicode -- English -- Ελληνικά -- Español.";

    wprintf(L"%s\n", test);


    const auto* row1 = L"♜ ♞ ♝ ♛ ♚ ♝ ♞ ♜";
    const auto* row2 = L"♟ ♟";
    const auto* row3 = L"♙ ♙ ♙ ♙ ♙ ♙ ♙ ♙";
    const auto* row4 = L"♖ ♘ ♗ ♕ ♔ ♗ ♘ ♖";
    const auto* row5 = L"🧔‍♂️👨‍🦰👨‍🦱🙅‍♂️🙍‍♂️👴✡️☪️😀😃";

    setcolor(240);
    wprintf(L"%s\n", row1);
    wprintf(L"%s\n", row2);
    setcolor(7);
    wprintf(L"%s\n", row3);
    wprintf(L"%s\n", row4);
    setcolor(15);
    wprintf(L"%s\n", row5);



}

void setcolor(WORD color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    return;
}