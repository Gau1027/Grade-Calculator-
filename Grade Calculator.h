// Lab #3
// CPET Computational Problem Solving
// Gordon Upshaw
// Date: 19Feb15
//Title: Lab 3 Midterm Grade by name calculator


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main ();
int main (void)


{




	double LabGrade=0;
	double ProjectGrade;
	double MidtermexamGrade;
	double Midterm;
	double MidtermAverage;
	char ProjectGradeLetter;
	string Name;
	string Last;
	double NoProject;
	double HomeworkGrade=0;
	double HW1;
	double NumHw;
	double lab;
	char yn;


	do
	{














		cout << "Input the name" << endl;
		cin >> Name;
		cin>> Last;


		cout << Name << endl;


		cout << "This program calculates the Midterm grades \n "<< endl;


		cout << "Input the 3 Homework Grades out of 5 each \n" << endl;




		{
			int i = 1;


			cout << "Enter the number of Homeworks 3 homeworks total" << endl;
	


			while ( i <= 3)


			{
				cout << " The Grade  of  this homeworks is " << i << endl;
				cin >> HW1;
				HomeworkGrade = HomeworkGrade+HW1/15*15;


				


				i = i + 1; 
			
			}
			cout << "The homework grade is "<< HomeworkGrade << " % " << endl;
			if(HomeworkGrade<11)
				cout << "Grade is lower than a 75 WARNING" <<endl;
			i=0;
			
			


		}














		cout << " Enter the next 6 grades as the Lab grades out of 20 "<< endl;
		{
			int j = 1;
			cout << " Enter in number of Lab Grades (6 total) \n " << endl;
	


			while (j<=6)
			{
				cout << "Lab Grade is " << j << endl;
				cin >> lab;
				LabGrade = LabGrade+lab/120*35;
				j=j+1;
			}
			cout  <<" The lab grade is "<< LabGrade <<  "% "  << endl;


			if (LabGrade < 26)
				cout << "Grade is lower than a 75 WARNING" <<endl;
			j= 0;
			
				




		}






		cout << "Next  is the Project Grade is 20% of the grade enter in letter value \n" << endl;


		cout << "A = 99 B = 87 C = 75 D = 63 F = 55 I= 45 Enter in NoProject if the project was not handed in \n" << endl;


		cin >>	ProjectGradeLetter;


		switch (ProjectGradeLetter)
		{
		case 'A':
		case 'a':


			ProjectGrade=99;
			break;


		case 'B':
		case 'b':


			ProjectGrade=87;
			break;


		case 'C':
		case 'c':


			ProjectGrade=75;
			break;


		case 'D':
		case 'd':


			ProjectGrade=63;
			break;
		case 'F':
		case 'f':


			ProjectGrade=55;
			break;
		case 'I':
		case 'i':
			ProjectGrade = 45;
			cout << "Contact the student and advisor about poor incomplete grade";
			break;


		}




		ProjectGrade = (ProjectGrade/100)*20;




		cout << "The Project Grade Percent is " <<ProjectGrade << endl;


		if (ProjectGrade < 15)
			cout << "The Grade is below a 75 WARNING" << endl;




		cout << "Next is the Mid Term exam grade out of 80 points \n" << endl;
		cout << "DO NOT ENTER A VALUE PAST 80 OR ELSE AN ERROR WILL OCCUR \n" << endl;
		cin >>Midterm;


		MidtermexamGrade=(Midterm/80) * 30.0;


		cout << "The Mid Term Exam Average is " << MidtermexamGrade << endl;
		if (MidtermexamGrade < 23)
			cout << "The Grade is below a 75 WARNING";
		MidtermAverage = HomeworkGrade + ProjectGrade + LabGrade + MidtermexamGrade;


		cout << "MidTerm Average is" << MidtermAverage << endl;


		cout << endl;






		if (ProjectGrade == 9) {
			cout  << Last << "  "   << Name << "  " <<  MidtermAverage << "The Mid Term Grade is I for incomplete your advisor has been notified";
		}


		else if (MidtermAverage>=90){
			cout << Last << "    " << Name <<"The Midterm Grade is A" << endl;
		}
		else if (MidtermAverage<90&&MidtermAverage>=80){
			cout << Last <<"      "     << Name << "The Mideterm Grade is B" << endl;
		}
		else if (MidtermAverage<80&&MidtermAverage>=70){
			cout << Last << "       "  << Name << "The Midterm Grade is C" << endl;
		}
		else if (MidtermAverage<70&&MidtermAverage>=65){
			cout << Last << "      "    << Name << "The Midterm Grade is D You are in danger of failing this course. Schedule a meeting to see your Professor" << endl;
		}


		else if (MidtermAverage < 45) {
			cout << "The Midterm Grade is F You are failing this course. Your Advisor has been notified. Please contact your advisor and setup a 1 on 1 meeting with your Professor" << endl;
		}


LabGrade = 0;
HomeworkGrade =0;




		cout << "New Student?  Y/N: ";
	}while (cin >> yn && (yn == 'Y' || yn == 'y'));


	system("pause");
	return 0;


}