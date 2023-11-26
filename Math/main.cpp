#include <iostream>
#include <conio.h>
#include <windows.h>

#include "Navigation.h"

int main(int argc, char* argv[])//ToDo: schützen vor Text eingabe
{
	Navigation nav;
    SetConsoleOutputCP(1251);
	while (true)
	{
        switch (_getch())
        {
        case 72:
            if (nav.is_at_topic())
                nav.upTopic();
            else
                nav.upDetail();
            break;
        case 80:
            if (nav.is_at_topic())
                nav.downTopic();
            else
                nav.downDetail();
            break;
        case 75:
            nav.back();
            break;
        case 77:
             nav.forward();
            break;
        case 'p':
            system("cls");
            std::cout << "Made by Paul Walter";
            break;
        }
	}

	return 0;
}