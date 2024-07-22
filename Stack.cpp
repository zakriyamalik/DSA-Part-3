#include<iostream>
using namespace std;
class queue
{
private:
	int *stkptr;
	int* arr;
	int* frt_ptr;
	int max_size;
	int curr_size;
	int front;
	int rear;
public:
	queue()
	{
		stkptr = nullptr;
		arr[max_size] =10;
		frt_ptr = nullptr;
		curr_size = 0;
		max_size = 10;
		front = 0;
	}
	int get_front()
	{
		if (arr[0])
		{
			return arr[0];
		}
		else
		{
			return -1;
		}
	}
	bool full()
	{
		if (curr_size == max_size)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	int insert()
	{
		if (!full())
		{
			int n = 0;
			cout << "Enter value to insert\n";
			cin >> n;
			if (rear == max_size)
			{
				rear = 0;
				arr[rear] = n;
			}
			
			arr[rear] = n;
			rear++;
			curr_size++;
		}
		else
		{
			cout << "\nFull\n";
			return;
		}
	}
	int remove()
	{
		int temp = arr[front];
		front++;
		if (front == max_size)
		{
			front = 0; 
		}
		curr_size--;
		return temp;

	}
};
int main()
{
	queue obj;
	obj.insert();
	obj.remove();
}

//#include<iostream>
//using namespace std;
//class stack
//{
//	int front;
//	int* arr;
//	int max_size;
//	int curr_size ;
//public:
//	stack()
//	{
//		front = 0;
//		max_size = 10;
//		arr = new int[max_size];
//		curr_size = 0;
//	}
//	void insert(int n)
//	{
//		arr[front++] = n;
//		curr_size++;
//	}
//	void print()
//	{
//		cout << "The data in the array is \n";
//		for (int i = 0; i < curr_size; i++)
//		{
//			cout << arr[i] << " ";
//		}
//	}
//};
//int main()
//{
//	stack obj;
//	obj.insert(2);
//	obj.print();
//}