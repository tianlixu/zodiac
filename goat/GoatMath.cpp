#include <iostream>
#include <cstdlib>

using namespace std;

int random(int min, int max)
{
    return (std::rand() % (max - min + 1) + min);
}


int main()
{

    int a, b, c;

    std::srand(time(0));
    
    while (true) {
        a = random(0, 10);
        b = random(0, 10);

        cout <<a <<" + " <<b <<" = ";
        cin >> c;

        while ((a+b) != c) {
            cout <<"Incorrect! Please try again :(" <<endl;
            cout <<a <<" + " <<b <<" = ";        
            cin >> c;
        }

        cout <<"Correct! Congratulations:)" <<endl;
    }

    return 0;
}
