/*
There are flight paths between cities. If there is a flight between city A and city B then
there is an edge between the cities. The cost of the edge can be the time that flight take to
reach city B from A, or the amount of fuel used for the journey. Represent this as a graph.
The node can be represented by airport name or name of the city. Use adjacency list
representation of the graph or use adjacency matrix representation of the graph. Check
whether the graph is connected or not. Justify the storage representation used.
*/
//Ganesh bodakhe
//A 21
#include<iostream>
using namespace std;
string city[10][10];
void create()
{
for(int i=0;i<10;i++){
for(int j=0;j<10;j++)
{
city[i][j]="----";
}
}
}
void enterpath()
{
int scode,dcode;
cout<<"\nEnter City code for Source city :";
cin>>scode;
cout<<"\nEnter City code for Destination city :";
cin>>dcode;
for(int i=0;i<10;i++){
for(int j=0;j<10;j++)
{
if((i==scode && j==dcode)){
cout<<"\nEnter the Time/Distance(Enter in 4 digits like 1-->0001) :";
cin>>city[scode][dcode];
}
}
}
}
void displaymatrix()
{ int ind=0;
for(int i=0;i<10;i++)
{
cout<<endl;
cout<<"["<<ind<<")";
ind++;
for(int j=0;j<10;j++)
{
cout<<" "<<city[i][j]<<" ";
}
cout<<"]";
}
}
int main()
{
int ch;
cout<<"\n*********************| Cities In India |***************************";
cout<<"\nCode City Name\n0) PUNE\n1) MUMBAI\n2) NAGPUR\n3) SANGAMANER\n4) SHIKRAPUR\n5) NASHIK\n6) USMANABAD\n7) DHULE\n8) A.NAGAR\n9) SAMBHAJINAGAR";
cout<<"\n*******************************************************************";
create();
while(ch!=3)
{
cout<<"\n\n1)Create\n2)Display Matrix\n3)Exit(x)\nEnter your choice :";
cin>>ch;
switch(ch)
{
case 1:
enterpath();
break;
case 2:
displaymatrix();
break;
}
}
}