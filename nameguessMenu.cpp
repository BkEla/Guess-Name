//Menu for nameguess
#include<string>
#include<iostream>

int main()
{
    std::cout<<"0.quit" << std::endl<<"1. Play Game\n";
    int choice;
    std::cin>>choice;

    switch(choice)
    {
        case 0:
        std::cout<< "Thanks for nothing\n";
        return 0;
        case 1:
        std::cout<<"Yo, lets play!\n";
        break;
    }
}
