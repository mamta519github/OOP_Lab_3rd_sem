/*Q.1. An event called MUN is organized at KIIT, Bhubaneswar. We have to keep the following information
about each participant: Name of the participant, College, Contact No., Participating events, Score in
each event. Write a C++ program to store information about at least 5 participants. Write a function that
will tell the winner in each event based on the score. Create class, object, and functions as per the
requirements given above. Follow the object-oriented programming model.
[ Note: Include the case that at least two or more students are participating in one event, and the
function will make the comparison based on the score to find the winner]*/


#include<iostream>
using namespace std;
class MUN
{
    public:
        char name[100];
        char college[100];
        int contact_no;
        int events;
        int score_in_event1;
        int score_in_event2;
        int score_in_event3;

        void getdata()
        {
            cout<<"Enter the name of the participant:";
            getchar();
            gets(name);
            cout<<"Enter the college of the participant:";
            getchar();
            gets(college);
            cout<<"Enter the contact number of participant:";
            cin>>contact_no;
            cout<<"Enter the number of events the student has participated (max 3 events):";
            cin>>events;
            cout<<"\n\nIf not participated,enter score as zero"<<endl<<endl;
            cout<<"Enter the score of student in event 1:";
            cin>>score_in_event1;
            cout<<"Enter the score of student in event 2:";
            cin>>score_in_event2;
            cout<<"Enter the score of student in event 3:";
            cin>>score_in_event3;
        }
        void display()
        {
            cout<<"\n\nThe details of the students are:"<<endl<<endl;
            cout<<"Name:-"<<name<<endl<<endl;
            cout<<"College:-"<<college<<endl<<endl;
            cout<<"Contact number:-"<<contact_no<<endl<<endl;
            cout<<"Number of events:-"<<events<<endl<<endl;
            cout<<"Score in event 1:-"<<score_in_event1<<endl<<endl;
            cout<<"Score in event 2:-"<<score_in_event2<<endl<<endl;
            cout<<"Score in event 3:-"<<score_in_event3<<endl<<endl;
        }
};
int main()
{
    int n;
    MUN n1[100];
    cout<<"Enter the number of participants:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\n\nFor "<<i+1<<" student"<<endl;
        n1[i].getdata();
    }
    for(int i=0;i<n;i++)
    {
        cout<<"\n\nFor "<<i+1<<" student"<<endl;
        n1[i].display();
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(n1[i].score_in_event1 > n1[j].score_in_event1)
            {
                cout<<"\nThe winner of the event 1 is"<<n1[i].name;
                break;

            }
            if(n1[i].score_in_event1 < n1[j].score_in_event1)
            {
                cout<<"\nThe winner of the event 1 is"<<n1[j].name;
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(n1[i].score_in_event2 > n1[j].score_in_event2)
            {
                cout<<"\nThe winner of the event 2 is"<<n1[i].name;
                break;

            }
            if(n1[i].score_in_event2 < n1[j].score_in_event2)
            {
                cout<<"\nThe winner of the event 2 is"<<n1[j].name;
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(n1[i].score_in_event3 > n1[j].score_in_event3)
            {
                cout<<"\nThe winner of the event 3 is"<<n1[i].name;
                break;

            }
            if(n1[i].score_in_event3 < n1[j].score_in_event3)
            {
                cout<<"\nThe winner of the event 3 is"<<n1[j].name;
                break;
            }
        }
    }
}