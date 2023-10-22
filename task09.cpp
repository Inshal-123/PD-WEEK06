#include <iostream>
using namespace std;

string checkPointPosition(int height, int a, int b);

main()
{
    int height, a, b;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter a coordrinate: ";
    cin >> a;
    cout << "Enter b coordrinate: ";
    cin >> b;
    cout << checkPointPosition(height, a, b);
}

string checkPointPosition(int height, int a, int b)
{
    if ((a < 3 * height) && (b < height))
    {
        return "Inside";
    }
    else if (((a >height)&&(a < 2 * height)) && ((b < 4 * height)))
    {
        return "Inside";
    }
    else if ((a == 0) && (b == 0))
    {
        return "Border";
    }
    else if ((a == 0) && (b == height))
    {
        return "Border";
    }
    else if ((a == height) && (b == height))
    {
        return "Border";
    }
    else if ((a == 2 * height) && (b == height))
    {
        return "Border";
    }
    else if ((a == 3 * height) && (b == height))
    {
        return "Border";
    }
    else if ((a == 3 * height) && (b == 0))
    {
        return "Border";
    }
    else if ((a == 2 * height) && (b == 0))
    {
        return "Border";
    }
    else if ((a == height) && (b == 0))
    {
        return "Border";
    }
    else if ((a == height) && (b == 2 * height))
    {
        return "Border";
    }
    else if ((a == height) && (b == 3 * height))
    {
        return "Border";
    }
    else if ((a == height) && (b == 4 * height))
    {
        return "Border";
    }
    else if ((a == 2 * height) && (b == 2 * height))
    {
        return "Border";
    }
    else if ((a == 2 * height) && (b == 3 * height))
    {
        return "Border";
    }
    else if ((a == 2 * height) && (b == 4 * height))
    {
        return "Border";
    }

    else if (((a > 0) || (a < height)) && (b > height))
    {
        return "Outside";
    }
    else if ((a > height) || (a < 2 * height) && (b > 4 * height))
    {
        return "Outside";
    }

    else if (((a > 2 * height) || (a < 3 * height) && (b > height)))
    {
        return "Outside";
    }
    else if ((a < 0) && ((b > 0) || (b < 0)))
    {
        return "Outside";
    }
    else if (((a < 0) || (a > 0)) && (b < 0))
    {
        return "Outside";
    }
    else if ((a > 3 * height) && (b == 0))
    {
        return "Outside";
    }
}