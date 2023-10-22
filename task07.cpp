#include<iostream>
using namespace std;
string checkStudentStatus(int examHour, int examMin, int studentHour, int studentMin);
void time(int examHour, int examMin, int studentHour, int studentMin);
main()
{
	int examHour,examMin,studentHour,studentMin;
	cout <<"Enter Exam Starting Time (hours): ";
	cin >> examHour;
	cout <<"Enter Exam Starting Time (minuteas): ";
	cin >> examMin;
	cout <<"Enter Student hour of arrival: ";
	cin >> studentHour;
	cout <<"Enter Student minutes of arrival: ";
	cin >> studentMin;
	cout<< checkStudentStatus(examHour, examMin, studentHour, studentMin);
	cout<<endl;
	time(examHour, examMin, studentHour, studentMin);		
}
string checkStudentStatus(int examHour, int examMin, int studentHour, int studentMin)
{
	int examTime, studentTime;
	examTime = examHour*60 + examMin;
	studentTime = studentHour*60 + studentMin;
	if((studentTime >= (examTime-30) || studentTime == examTime) && studentTime <= examTime)
	{return"On time";}
	if(studentTime > examTime)
	{return"Late";}
	if(studentTime < (examTime-30))
	{return"Early";}		
}
void time(int examHour, int examMin, int studentHour, int studentMin)
{
	int examTime, studentTime,finalTime,mins,hurs;
	examTime = examHour*60 + examMin;
	studentTime = studentHour*60 + studentMin;
	if(examTime < studentTime )
	{
	finalTime = studentTime-examTime;
	mins = finalTime % 60;
	hurs = finalTime / 60;
	if(finalTime < 60)
	{cout<<mins<<" minutes after the start";}
	else
	{cout << hurs<<":"<<mins<<" hours after the start";}
	}
	if(examTime > studentTime )
	{
	finalTime = examTime-studentTime;
	mins = finalTime % 60;
	hurs = finalTime / 60;
	if(finalTime < 60)
	{cout<<mins<<" minutes before the start";}
	else
	{cout << hurs<<":"<<mins<<" hours before the start";}
	}
}

Task09

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