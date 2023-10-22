#include<iostream>
using namespace std;
float   fruitShop(string fruit, float quantity, string day);
main()
{
    string fruit, day;
    float quantity;
    cout << "Enter the fruit name: ";
    cin >> fruit;
    cout << "Enter the day of the week (e.g., Monday, Sunday): ";
    cin >> day;
    cout<< "Enter the quantity: ";
    cin >> quantity;
    if(fruit == "banana" || fruit == "apple" || fruit == "orange" || fruit == "grapefruit" || fruit == "kiwi" || fruit == "pineapple" || fruit == "grapes" || day == "Monday" ||day == "Tuesday" ||day == "Wednesday" ||day == "Thrusday" ||day == "Friday" ||day == "Saturday" ||day == "Sunday")
    	{
	    cout << fruitShop( fruit,  quantity,  day) ;
	}
    else
	{
	    cout<< "error";
	}

}
float   fruitShop(string fruit, float quantity, string day)
{
    float price;
    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday" )
    {
        if(fruit == "banana")
    {
        price = quantity * 2.50;
        return price;
    }
    if(fruit == "apple")
    {
        price = quantity * 1.20 ;
        return price;
    }
    if(fruit == "orange")
    {
        price = quantity * 0.85 ;
        return price;
    }
    if(fruit == "grapefruit")
    {
        price = quantity * 1.45 ;
        return price;
    }
    if(fruit == "kiwi")
    {
        price = quantity * 2.70 ;
        return price;
    }
    if(fruit == "pineapple")
    {
        price = quantity * 5.50;
        return price;
    }
    if(fruit == "grapes")
    {
        price = quantity *3.85 ;
        return price;
    }
    }
     if (day == "Sunday" || day == "Saturday")
    {
        if(fruit == "banana")
    {
        price = quantity * 2.70;
        return price;
    }
    if(fruit == "apple")
    {
        price = quantity * 1.25 ;
        return price;
    }
    if(fruit == "orange")
    {
        price = quantity * 0.90 ;
        return price;
    }
    if(fruit == "grapefruit")
    {
        price = quantity * 1.60 ;
        return price;
    }
    if(fruit == "kiwi")
    {
        price = quantity * 3.00 ;
        return price;
    }
    if(fruit == "pineapple")
    {
        price = quantity * 5.60;
        return price;
    }
    if(fruit == "grapes")
    {
        price = quantity * 4.20 ;
        return price;
    }
    }
}