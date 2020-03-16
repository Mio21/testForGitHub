// testGit.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>

int main()
{
    std::cout << "What's your name?\n";
    std::string name;
    std::cin >> name;

    std::cout << "Hello " << name << ". You don't know me, but I know you. I want to play a game. ";

    std::cout << "Here's what happens if you lose. The device you are wearing is hooked into your upper and lower jaw."
                 "When the timer in the back goes off, your mouth will be permanently ripped open."
                 "Think of it like a reverse bear trap. Here, I'll show you. There is only one key to open the device."
                 "It's in the stomach of your dead cellmate. Look around " << name << ". Know that I'm not lying."
                 "Better hurry up. Live or die, make your choice";

    system("pause");
}

