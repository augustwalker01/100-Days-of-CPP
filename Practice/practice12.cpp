#include<iostream>
using namespace std;

int main()
{
    int age;
    string gender;
    string boy,girl;

    cout<<"Enter the gender of person"<<endl;
    cin>>gender;

    if(gender=="boy")
    {
        cout<<"Enter the age"; 
        cin>>age;

        if(age<18)
        {
            cout<<"You are a minor, not eligible for job";
        }

        else if(age>=18&&age<60)
        {
            cout<<"You are eligible for the job";
        }

        else
        {
            cout<<"you are a senior citizen, not eligible for job";
        }
    }

    /*else if(gender==female)
    {
        cout<<"Enter the age";
        cin>>age;

        if(age<18)
        {
            cout<<"You are a minor, not eligible for job";
        }

        else if(age>=18&&age<50)
        {
            cout<<"You are eligible for the job";
        }

        else
        {
            cout<<"you are a senior citizen, not eligible for job";
        }
    }

    else
    {
        cout<<"sorry, you're not eligible for the job";
    }*/

    return 0;
}