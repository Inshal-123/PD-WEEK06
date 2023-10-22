#include<iostream>
using namespace std;
float calculateStudioPrices(string month,int stayDays);
float calculateAppartmentPrices(string month,int stayDays);
main()
{
    string month;
    int stayDays;
    cout << "Enter the month (May, June,, July, August, September, October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> stayDays;
    cout<<"Apartment: "<<calculateAppartmentPrices(month, stayDays)<<"$"<<endl;
    cout<<"Studio: "<<calculateStudioPrices(month, stayDays)<<"$";
}
float calculateStudioPrices(string month,int stayDays)
{
    float studioPrice;
    if(month == "May" || month == "October" )
    {
        if(stayDays > 7 && stayDays <=14)
        {
        studioPrice = (50-(50*0.05))*stayDays;
        return studioPrice;
        }
       if(stayDays > 14)
       {
        studioPrice = (50-(50*0.3))* stayDays ;
        return studioPrice;
       }
       if (stayDays <= 7)
       {
        studioPrice = 50 * stayDays;
        return studioPrice;
       }
    }
       if(month == "June" || month == "September" )
    {
       if(stayDays > 14)
       {
        studioPrice = (75.20-(75.20*0.3))* stayDays;
        return studioPrice;
       }
       if (stayDays <= 14)
       {
        studioPrice = 75.20 * stayDays;
        return studioPrice;
       }
    }
       if(month == "July" || month == "August" )
    {
        studioPrice = 76 * stayDays;
        return studioPrice;
    }
}
float calculateAppartmentPrices(string month,int stayDays)
{
    float apartmentPrice;
    if(month == "May" || month == "October" )
    {
       if(stayDays > 14)
       {
        apartmentPrice = (65-(65*0.1))* stayDays ;
        return apartmentPrice;
       }
       if (stayDays <= 14)
       {
        apartmentPrice = 65 * stayDays;
        return apartmentPrice;
       }
    }
       if(month == "June" || month == "September" )
    {
       if(stayDays > 14)
       {
        apartmentPrice = (68.07-(68.70 * 0.1))* stayDays;
        return apartmentPrice;
       }
       if (stayDays <= 14)
       {
        apartmentPrice= 68.70 * stayDays;
        return apartmentPrice;
       }
    }
       if(month == "July" || month == "August" )
    {
	if (stayDays <= 14)
     	{
	   apartmentPrice= 77 * stayDays;
           return apartmentPrice;
	}
	if (stayDays > 14)
	{
	apartmentPrice = (77-(77 * 0.1))* stayDays;
        return apartmentPrice;
	}
    }
}
