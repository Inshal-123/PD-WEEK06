#include<iostream>
using namespace std;
float calculateAverage(float marksENG,float marksMATH,float marksCHEM,float marksSS,float marksBIO);
string calculateGrade(float average);
main()
{	
	string name;
	float marksENG, marksMATH, marksCHEM, marksSS, marksBIO;
	cout<< "Enter student name: ";
	cin >> name;
	cout << "Enter marks for English: ";
	cin >> marksENG;
	cout << "Enter marks for Maths: ";
	cin >> marksMATH;
	cout << "Enter marks for Chemistry: ";
	cin >> marksCHEM;
	cout << "Enter marks for Social Science: ";
	cin >> marksSS;
	cout << "Enter marks for Biology: ";
	cin >> marksBIO;
	float average = calculateAverage( marksENG, marksMATH, marksCHEM, marksSS, marksBIO);
	cout << "Student Name: "<< name <<endl;
	cout << "Percentage: "<<calculateAverage(marksENG, marksMATH, marksCHEM, marksSS, marksBIO)<<"%"<<endl;
	cout << "Grade: "<< calculateGrade( average);
}
float calculateAverage(float marksENG,float marksMATH,float marksCHEM,float marksSS,float marksBIO)
{
	float totalMarks, percentage ;
	totalMarks = marksENG + marksMATH + marksCHEM + marksSS + marksBIO;
	percentage = totalMarks / 500 * 100;
	return percentage;
}
string calculateGrade(float average)
{
	if (average >= 90 && average <= 100)
	{return "A+";}
	if (average >= 80 && average <90)
	{return "A";}
	if (average >= 70 && average <80)
	{return "B+";}
	if (average >= 60 && average <70)
	{return "B";}
	if (average >= 50 && average <60)
	{return "C";}   
	if (average >= 40 && average <50)
	{return "D";}
	if (average < 40)
	{return "F";}
}