#include <iostream>
#include <cmath>
using namespace std;

class calculator
{
public:
    double long a, b;
    char op;

    calculator()
    {
        a = 0;
        b = 0;
        op = '0';
    };

    [[nodiscard]] double long add() const
    {
        return a + b;
    }

    [[nodiscard]] double long sub() const
    {
        return a - b;
    }

    [[nodiscard]] double long mul() const
    {
        return a * b;
    }

    [[nodiscard]] double long div() const
    {
        return a / b;
    }

    [[nodiscard]] double long power() const
    {
        return pow( a, b );
    }

    [[nodiscard]] double long root() const
    {
        return sqrt(a);
    }

    void calculate() const
    {

        switch (op)
            {
            case '+':
                cout << add();
            break;
            case '-':
                cout << sub();
            break;
            case '*':
                cout << mul();
            break;
            case '/':
                cout << div();
            break;
            case '^':
                cout << power();
            break;
            default:
            cout << "Invalid Operation!" << endl;
        }
    }

};

int main()

{
        cout << "----------Simple Calculator: Made by Abdullah Hesham----------" << endl;

    calculator cal;
    cin >> cal.a >> cal.op >> cal.b;
    cal.calculate();

    return 0;
}