/* 
    Build a simple TaskList class/object that stores multiple Task objects 
    and provides addTask(title), 
    markTaskDone(index), 
    and showTasks() methods. 
    Demonstrate adding 3 tasks, marking one as done, 
    and displaying all tasks with their statuses.
*/

#include<iostream>
using namespace std;

class task
{
    public:
    string title;
    bool isDone = false;

    void markDone()
    {
        isDone = true;
    }

    void showTask()
    {
        if(isDone)
            cout<<"Task: "<<title<<" | Status:- Done"<<endl;
        else
            cout<<"Task: "<<title<<" | Status: Pending"<<endl;
    }

};

class taskList
{
    task tasks[10];
    int count = 0;

    public:
    void addTask(string T)
    {
        tasks[count].title = T;
        count++;
    }

    void  markTaskDone(int index)
    {
        tasks[index].markDone();
    }

    void showAll()
    {
        for(int i=0;i<count;i++)
        {
            tasks[i].showTask();
        }
    }
};

int main()
{
    taskList tl;
    tl.addTask("Buy Milk");
    tl.addTask("Do Code");
    tl.addTask("Do workout");

    cout<<"----------------------"<<endl;
    cout<<"     initial tasks  "<<endl;
    cout<<"----------------------"<<endl;

    tl.showAll();
    tl.markTaskDone(1);

    cout<<"----------------------"<<endl;
    cout<<"     Updated tasks  "<<endl;
    cout<<"----------------------"<<endl;
    tl.showAll();
    return 0;
}