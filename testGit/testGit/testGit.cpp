// testGit.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>

int main()
{
    std::cout << "What's your name?\n";
    std::string str;
    std::cin >> str;

    std::cout << "Hello " << str << ". You don't know me, but I know you. I want to play a game." << std::endl << std::endl;

    system("pause");
}

