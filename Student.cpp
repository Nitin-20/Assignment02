/*1. Create Student class with data members
RollNo
Name
Course
and implement following
 Default constructor
 Parameterized constructor
 Destructor
 Function to accept data
 Function for display data
 Write main function and create array of
students and store data of multiple
students in array.
 Write Function to find student by Roll No
*/

#include <iostream>
#include<string>
using namespace std;

class Student
{
    private:
    int rollno ;
    string name;
    string course;
    public:
        Student()
        {
            rollno=0;
            name="NA";
            course="NONE";
        }
        Student(int r, string n,string c)
        {
            rollno=r;
            name=n;
            course=c;
        }
        void Accept()
        {
            cout<<"Enter roll no"<<"\t";
            cin>>rollno;
            cout<<"Enter name"<<"\t";
            cin>>name;
            cout<<"Enter course"<<"\t";
            cin>>course;

        }
        void Display()
        {
            cout<<rollno<<"\t"<<name<<"\t"<<course<<endl;
        }
        void Find(int r)
		{

			if(r==rollno)
			{	cout<<"\nFound "<<endl<<" roll no: "<<r;
				cout<<"\nName: "<<name;
				cout<<"\nCourse: "<<course<<endl;
			}

		}
		~Student(){
			cout<<"\nDestructor accessed.";
		}
};
int main()
{
    int n;
    int roll;
    //Size of Student
    cout<<"Enter the no of Students";
    cin>>n;
    //Size of Student
    Student *s = new Student[n];
    cout<<"Enter Details of Student"<<endl;
    //Accepting N Arrays
    for(int i=0;i<n;i++)
    {
        s[i].Accept();
    }
    //Displaying N Arrays
	for(int i=0;i<n;i++)
        {
                s[i].Display();
        }
	//Finding the rollno
    cout<<"Enter the roll no u want to search"<<"\t";
    cin>>roll;


            for(int i=0;i<n;i++)
            {
                s[i].Find(roll);
            }
            delete []s;

    return 0;
}

