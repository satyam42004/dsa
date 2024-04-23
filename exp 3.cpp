//A21 :Ganesh bodakhe
#include <iostream>
using namespace std;
const int MAX_CHAPTERS = 100;
const int MAX_SECTIONS = 100;
const int MAX_SUBSECTIONS = 100;
struct node {
char name[20];
int cnt;
struct node* ptr[MAX_CHAPTERS];
};
void create() {
struct node* book = new node;
cout << "Enter the name of the book: ";
cin >> book->name;
cout << "Enter the count of the chapters: ";
cin >> book->cnt;
for (int i = 0; i < book->cnt; i++) {
book->ptr[i] = new node;
cout << "Enter the name of the chapter ("<<i+1<<") :";
cin >> book->ptr[i]->name;
cout << "Enter the count of the sections: ";
cin >> book->ptr[i]->cnt;
for (int j = 0; j < book->ptr[i]->cnt; j++) {
book->ptr[i]->ptr[j] = new node;
cout << "Enter the name of section ("<<j+1<<") :";
cin >> book->ptr[i]->ptr[j]->name;
cout << "Enter the count of subsections: ";
cin >> book->ptr[i]->ptr[j]->cnt;
for (int k = 0; k < book->ptr[i]->ptr[j]->cnt; k++) {
book->ptr[i]->ptr[j]->ptr[k] = new node;
cout << "Enter the name of subsection("<<k+1<<") :";
cin >> book->ptr[i]->ptr[j]->ptr[k]->name;
}
}
}
/////////////////////////
for (int i = 0; i < book->cnt; i++) {
cout << "\nChapter :"<<i+1<<" Name :"<<book->ptr[i]->name;
int seccnt=book->ptr[i]->cnt;
for (int j = 0; j < seccnt; j++) {
cout << "\nSection :"<<j+1<<" Name :"<<book->ptr[i]->ptr[j]->cnt;
int subseccnt=book->ptr[i]->ptr[j]->cnt;
for (int k = 0; k <subseccnt; k++) {
cout << "\nSubsection:"<<k+1<<" Name :"<<book->ptr[i]->ptr[j]->ptr[k]->cnt<<endl;
}
}
}
}
int main() {
create();
return 0;
}