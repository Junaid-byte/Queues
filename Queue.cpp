#include<iostream>	
#include<conio.h>

using namespace std;
class Queue
{
 private:
	int front;
	int rear;  
	int a[5];
public:
	Queue() //Creating a Queue
	{
		front = -1;
		rear = -1;
		for (int i = 0; i < 5; i++)
		{
			a[i] = 0;
		}
	}
	bool isEmpty()
	{
		if (front == -1 && rear == -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool isFull()
	{
		if (rear == 4)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void EnQueue(int val)
	{
		if (isFull())
		{
			cout << "Queue Is Full!" << endl;
		}
		else if (isEmpty())
		{
			front = rear = 0;
			a[rear] = val;
		}
		else
		{
			rear++;
			a[rear] = val;
		}
	}
	int deQueue()
	{
		int x;
		if (isEmpty())
		{
			cout << "Queue Is Empty!" << endl;
			return 0;
		}
		else if(front == rear)
		{ 
			x = a[front];
			a[front] = 0;
			front = rear = -1;
			return x;
		}
		else
		{
			x = a[front];
			a[front] = 0;
			front++;
			return x;
		}
	}

	int count()
	{
		return (rear - front + 1);
	}

	void Display()
	{
		cout << "Values In The Queue:- " << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	void Update()
	{
		if (front != -1 && rear != -1)
		{
			int pos;
			cout << "Enter Position:- ";
			cin >> pos;
			if (pos == 1)
			{
				front++;
				rear++;
			}
			else if (pos == 2)
			{
				front++;
				rear++;
			}
			else if (pos == 3)
			{
				front++;
				rear++;
			}
			else if (pos == 4)
			{
				front++;
				rear++;
			}

			 if (pos <= front && pos <= rear)
			 {
				cout << "Enter Value To Update In Stack:- ";
				cin >> a[pos];
				cout << "Updated Stack Values:- " << endl;
				Display();

			 }
			 else
			 {
				cout << "Invalid Position Of The Stack!" << endl;
			 }


		}
		else
		{
			cout << "Invalid Value of the Queue!" << endl;
		}

	}

};

int main()
{
	Queue q;
	int option, val;
	do
	{
		cout << "1. Enqueue" << endl;
		cout << "2. Dequeue" << endl;
		cout << "3. isEmpty" << endl;
		cout << "4. isFull" << endl;
		cout << "5. Count" << endl;
		cout << "6. Display" << endl;
		cout << "7. Update" << endl;
		cout << "8. Exit" << endl<<endl;
		cin >> option;
		switch (option)
		{
			case 1:
			{
				cout << "Enter Value To Insert/Enqueue In Queue:- ";
				cin >> val;
				q.EnQueue(val);
				break;
			}
			case 2:
			{
				cout << "Removed or Dequeued Value is:- " << q.deQueue() << endl;
				break;
			}
			case 3:
			{
				if (q.isEmpty())
				{
					cout << "Queue Is Empty!!" << endl;
				}
				else
				{
					cout << "Queue Is Not Empty!" << endl;
				}
				break;
			}
			case 4:
			{
				if (q.isFull())
				{
					cout << "Queue Is Full!" << endl;

				}
				else
				{
					cout << "Queue Is Not Full!" << endl;
				}
				break;
			}
			case 5:
			{
				cout << "Count Operation:- " << endl;
				cout << "Count Of Values In Queue:- " << q.count() << endl;
				break;
			}
			case 6:
			{
				q.Display();
				break;
			}
			case 7:
			{
				q.Update();
				break;
			}
			case 8:
			{
				exit(0);
				break;
			}
			default:
			{
				cout << "Sorry You Entered Wrong Option Please Try Again!" << endl;
			}


		}


	} while (option!=0);

	_getch();
	return 0;


}

/*
Follow me on my github ID https://github.com/Junaid-byte
Credits:-Junaid Jawed
*/
