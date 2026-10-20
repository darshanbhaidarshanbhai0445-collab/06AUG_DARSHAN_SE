//Create a Task class in your favorite OOP language (Java, Python, or C++) with properties: title and isDone. 
//Add a method markDone() that sets isDone to true, and a method display() that prints the task with its status.

#include<iostream>
using namespace std;

class task
{
	public:
		string title;
		bool isdone;
		
		void markdone()
		{
			title="c++ task 3 is ";
			isdone=true;
		}
		
		void display()
		{
			if(isdone==true)
			{
				cout<<title<<" done ";
			}
			
		}
};
main()
{
	task ts;
	ts.markdone();
	ts.display();
	
}

