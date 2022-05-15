//											Nir Miranda's And Dorin Cohen's Queue project
#include"arrQ.h"
#include "listQ.h"
#include "M_Q.h"
#include"node.h"
#include "queue.h"
#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

int main()
{
	M_Q arr1;
	
	int arr[101];						// Making an array With 101 different numbers between 1 to 10000 //
	cout << "Array of 101 numbers between 1:10000 : "<< endl;
	for (int i = 0; i < 101; i++) //rand arr from[1,10000]//
	{
		arr[i] = rand()%10000;
		cout  << arr[i] << ", ";
	}
	cout << endl;
	arr1.setsize(51); 

	for (int i = 0; i < 51; i++)		//  First 51 numbers in the array are entering the Queue //
	{
		arr1.MEnqueue(arr[i]);
		cout << "The number: "<< arr[i] << " is number " << (i)+1<< " in the queue." << endl;
	}
	arr1.setfinished(1);
	int temp=arr1.Middle();				//		Checking the current middle in the queue	//
	cout << endl<< " The middle number of the queue is: " ;
	cout << temp << " "<<endl;
	cout << "the number that out of the queue is:" << arr1.MDequeue() << endl; //	Taking out the 2 first numbers in the queue	//
	cout << "the number that out of the queue is:" << arr1.MDequeue() << endl;
	int temp2 = arr1.Middle();
	cout << "the new middle is:" << temp2 << endl;		//		Checking the middle after the 2 first numbers are taken out	 //
	arr1.setsize(99);									// The new size of the queue is now 99	//
	int fixqueue = 0;
	
	for (int i = 51; i <101; i++)			//		Enterring the rest of 50 numbers to the queue	//
	{
		if (arr1.getcurrent1() <= arr1.getsize() / 2)
		{
			i--;
			arr1.MEnqueue(arr[i]);
		}
		else
		{
			arr1.MEnqueue(arr[i]);
		}
	
		
		
	}
	

	for (int i = 2; i < 101; i++)
	{
		cout << "the number: " << arr[i] << " is number " << (i)-1 << " in the queue." << endl;

	}

	cout << "the new middle is:" << arr1.Middle() << endl;		//	 Checking the middle numbers in the final queue		//
}