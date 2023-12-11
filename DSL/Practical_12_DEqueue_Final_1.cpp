#include<iostream>
using namespace std;
#define size 5
class dqueue{
	int q[size];
	int front,rear;
public :
	dqueue(){
		front=rear=-1;
		q[-1]=NULL;
	}

	void display(){
		for(int i=front ; i<=rear ; i++){
			cout<<"\n"<<q[i];
		}
	}
	void insert_end(int data){
		if(rear==size-1){
			cout<<"\nNotpossibel";
		}
		else{
		if(front==-1 && rear==-1){
					front=rear=0;
					q[rear]=data;
				}
				else{
					rear=rear+1;
					q[rear]=data;
				}

				display();
			}}
	void delete_end()
	{
		  if(front==-1)
		  {
			cout<<"deletion is not possible::dequeue is empty";
			return;
		  }
		  else
		  {
			cout<<"the deleted element is"<<q[rear];
			if(front==rear)
			{
			    front=rear=-1;
			}
			else
			    rear=rear-1;
		  }
		  display();
	}
	void delete_front(){
		if(front==-1)
			  {
				cout<<"deletion is not possible::dequeue is empty";
				return;
			  }
			  else
			  {
				cout<<"the deleted element is"<<q[front];
				if(front==rear)
				{
				    front=rear=-1;
				    return;
				}
				else
				    front=front+1;
			  }
		display();

	}
	void insert_begin(int data){

		if(front==-1 && rear==-1){
			front=rear=0;
			q[front]=data;
		}

		else if(front!=0){
			front=front-1;
			q[front]=data;
		}
		else
			cout<<"\nNot possible ";

		display();
	}
};
int main(){
	int ch;
	int data;
	dqueue q;
	do{
		cout<<"\n1.Add at begin \n2.Add at end \n3.Delete front \n4.Delete end\n5.Exit";
		cin>>ch;
		switch(ch){
		case 1 : cout<<"\nEnter data : ";
				cin>>data;
				q.insert_begin(data);
				break;
		case 2 : cout<<"\nEnter data : ";
				cin>>data;
				q.insert_end(data);
				break;
		case 3 :q.delete_front();break;
		case 4 :q.delete_end();break;
		}
	}while(ch!=5);
	return 0;
}
