#include<iostream>
using namespace std;
float cellularCompany(char type, char time, float mins);
main()
{
    char type,  time;
    float mins;
    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> type;
	if (type == 'p' || type == 'P')
	{
    cout << "Enter time of the call (D/d for day, N/n for night): ";
    cin >> time;
	}
    cout << "Enter the number of minutes used: ";
    cin >> mins;
    if (type == 'R' || type == 'r')
   {
	cout << "Service Type: Regular"<<endl;
   }
	else
  {
	cout << "Service Type: Premium"<< endl;
  }
	cout << "Total Minutes Used: "<< mins << " minutes"<< endl;
    cout <<"Amount Due: $"<<cellularCompany( type,  time,  mins);
}
float cellularCompany(char type, char time, float mins)
{
    float amount;
    if ((type == 'R'|| type == 'r') && mins <= 50)
    {amount = 10;
    return amount;
    }
    if((type == 'R' || type == 'r') && mins > 50)
    {
    amount = ((mins - 50)*0.20) + 10 ;
    return amount;
    }
     if((type == 'P' || type == 'p') && (time == 'D' || time == 'd') && mins > 75)
    {
    amount = ((mins - 75)* 0.10 ) + 25;
    return amount;
    }
    if((type == 'P' || type == 'p') && (time == 'D' || time == 'd') && mins <= 75)
    {
        amount = 25;
        return amount;
    }
    if((type == 'P' || type == 'p') && (time == 'N' || time == 'n') && mins > 100)
    {
        amount = ((mins - 100)* 0.05) + 25;
        return amount;
    }
    if((type == 'P' || type == 'p') && (time == 'N' || time == 'n') && mins <= 100)
    {
        amount = 25;
        return amount;
    }
}