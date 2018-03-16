#include<iostream>
using namespace std;
#include<stdlib.h>
void solve(int x,int y,char d,char array[100])//Actual Function
{
    int i=0;
    while(array[i]!='\0')//Untill the Whole String
    {
        if(array[i]=='R')//Move 90 degree clockwise to Right
        {
            if(d=='S')
            {
                d='W';
            }
            else if(d=='N')
            {
                d='E';
            }
            else if(d=='W')
            {
                d='N';
            }
            else if(d=='E')
            {
                d='S';
            }
        }
        else if(array[i]=='L')//Move 90 degree Counter Clockwise to Left
        {
            if(d=='N')
            {
                d='W';
            }
            else if(d=='W')
            {
                d='S';
            }
            else if(d=='S')
            {
                d='E';
            }
            else if(d=='E')
            {
                d='N';
            }
        }
        else if(array[i]=='W')//Move forward
        {
            i++;//Increament i to get the no. of steps to Move forward
            int s=(int)array[i]-48;
            if(d=='E')
            {
                x=x+s;
            }
            else if(d=='W')
            {
                x = x-s;
            }
            else if(d=='N')
            {
                y=y+s;
            }
            else if(d=='S')
            {
                y=y-s;
            }
        }
        i++;
    }
    cout<<x<<" "<<y;
    if(d=='S')
        cout<<"South";
    else if(d=='W')
        cout<<"West";
    else if(d=='N')
        cout<<"North";
    else if(d=='E')
        cout<<"East";
}
int main() {
    int X,y;
    cin>>X>>y;
    char Direction[10];
    char array[100];
    cin>>Direction;
    cin>>array;
    solve(X,y,Direction[0],array);
}
