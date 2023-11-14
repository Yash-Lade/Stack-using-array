#include<iostream>
#define maxsize 5
using namespace std;

int stack[maxsize],no,top=-1,i;
void push();
void pop();
void display();
int main()
{
	int ch;
	cout<<"\n@Author name- Yash Lade \n";
	
	
	do
	{
		cout<<"\nStack using Array Menu :\n";
		cout<<"Press 1 to perform Push opertation\n";
		cout<<"Press 2 to perform Pop opertation\n";
		cout<<"Press 3 to Display \n";
		cout<<"Press 4 to exit\n";
		
		cout<<"Enter the choice :";
		cin>>ch;
	switch(ch)
	{
		case 1:push();break;
		case 2:pop();break;
		case 3:display();break;
		case 4:break;
		default:cout<<"\nWrong Choice\n";
		
	}
	}
	while(ch!=4);
	
}
void push()
{
	if(top>=maxsize-1)
	cout<<"Stack is full ";
	else
	{
		cout<<"Enter the number :";
		cin>>no;
		
		top++;
		stack[top]=no;
	}
}
void pop()
{
	if(top==-1)
	cout<<"Stack is empty ";
	else
	{
		cout<<"Deleted element is "<<stack[top];
		top--;
	}
}
void display()
{
	if(top==-1)
	cout<<"Stack is empty ";
	else
	{
		for(i=top;i>=0;i--)
		cout<<stack[i];
	}
}
