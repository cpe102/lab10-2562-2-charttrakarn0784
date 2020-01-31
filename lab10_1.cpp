#include<iostream>
#include<ctime>
#include<string>
#include<cstdlib>
using namespace std;

int main()
{
    srand(time(0));
	string grade[9] = {"A","B+","B","C+","C","D+","D","F","W"};
    int output = rand() % 9;
    cout << "Please Enter 3 times to reveal your future." << endl;
    cin.get();
    cin.get();
    cin.get();
    cout << "You will get " << grade[output] << " in this 261102";
    return 0;
}
