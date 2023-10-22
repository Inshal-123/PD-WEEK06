#include<iostream>
using namespace std;
string findZodiaSign(float date, string month);
main()
{
    float date;
    string month;
    cout << "Enter the day of birth: ";
    cin >> date;
    cout << "Enter the month of birth (e.g., January, February): ";
    cin >> month;
    cout << "Zodiac Sign: "<<findZodiaSign( date, month);
}
string findZodiaSign(float date, string month)
{
    if ((date >= 21 && month == "March")  ||  (date <= 19  && month == "April"))
        {return "Aries";}
   if ((date >= 20 && month == "April")  || (date <= 20  && month == "May")) 
   {
    return "Taurus";
   }
   if ((date >= 21 && month == "May") || (date <= 20  && month == "June"))
   {
    return "Gemini";
   }
   if ((date >= 21 && month == "June") || (date <= 22  && month == "July"))
   {
    return "Cancer";
   }
   if ((date >= 23 && month == "July")  ||  (date <= 22  && month == "August"))
    {
        return "Leo";
    }
    if ((date >= 23 && month == "August")  ||  (date <= 22  && month == "September"))
    {
        return "Virgo";
    }
    if ((date >= 23 && month == "September")  ||  (date <= 22  && month == "October"))
    {
        return "Libra";
    }
    if ((date >= 23 && month == "October")  ||  (date <= 21  && month == "November"))
    {
        return "Scorpio";
    }
    if ((date >= 22 && month == "November")  ||  (date <= 21  && month == "December"))
    {
        return "Sagittarius";
    }
    if ((date >= 22 && month == "December")  ||  (date <= 19  && month == "January"))
    {
        return "Capricorn";
    }
    if ((date >= 20 && month == "January") ||  (date <= 18  && month == "February"))
    {
        return "Aquarius";
    }
    if ((date >= 19 && month == "February")  ||  (date <= 20  && month == "March"))
    {
        return "Pisces";
    }
}