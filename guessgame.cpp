#include <iostream>
#include <string>
int main()

{
    std::string name_answer = "Biruk";
    int age_answer = 63;

    std:: string guess;
    std:: string name_guess;
    std:: cout << "Guess my name!";
    std:: cin>> name_guess;

    int age_guess;
    std::cout << "Guess my age!:";
    std::cin >> age_guess;

    if (name_guess == name_answer)
    {
        std::cout<< "Yout got the name right!\n";
    }
    else if(age_guess=age_answer)
    {
         std::cout << "You got the age right!\n";
    }
    else if (name_guess == name_answer && age_guess == age_answer)
    {
        std::cout<< "Yout got both right\n";
    }
    return 0;
}

// to flip the truth value use: !(true value)

/*
logical: && || !

comparison:  == != < > <= >=*/
