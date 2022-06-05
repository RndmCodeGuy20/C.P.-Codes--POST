#include <iostream>
using namespace std;

class Servo
{
public:
    string name;
    int age;

    Servo(string name, int age)
    {
        this.name = name;
        this.age = age;
    }

    void disp()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    Servo servo;
    servo.disp();

    return 0;
}