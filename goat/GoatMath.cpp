#include <iostream>
#include <cstdlib>

using namespace std;

int random(int min, int max)
{
    return (std::rand() % (max - min + 1) + min);
}

int a, b, c;

void refreshABC() {
    a = random(0, 10);
    b = random(0, 10);
    c = a + b;    
}

void doAddition() {
    int result;

    while (true) {
        refreshABC();

        cout <<a <<" + " <<b <<" = ";
        cin >> result;

        while (result != c) {
            cout <<"Incorrect! Please try again :(" <<endl;
            cout <<a <<" + " <<b <<" = ";        
            cin >> result;
        }

        cout <<"Correct! Congratulations:)" <<endl;
    }
}

void doSubtraction() {
    int result;

    while (true) {
        refreshABC();

        cout <<c <<" - " <<a <<" = ";
        cin >> result;

        while (result != b) {
            cout <<"Incorrect! Please try again :(" <<endl;
            cout <<c <<" - " <<a <<" = ";        
            cin >> result;
        }

        cout <<"Correct! Congratulations:)" <<endl;
    }
}


int main()
{
    std::srand(time(0));

    int option;
    cout << "Select:" <<endl;
    cout << "1. Addition" <<endl;
    cout << "2. subtraction" <<endl;
    
    cin >> option;
    if (option == 1) {
        doAddition();
    } else if (option == 2) {
        doSubtraction();
    } else {

    }

    return 0;
}
