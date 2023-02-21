//Concatination of all programs from 1 to 9 .....

#include<iostream>
#include<stdio.h>
using namespace std;
//Function of Program 1
void  Program1()
{
	cout<<"\nProgram to print maximum number in array."<<endl;
		int arr[5];
	cout<<"Enter values : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Value "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"Entered values are : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	int min=arr[0];
	for(int i=1;i<5;i++)
	{
		if(min>arr[i])
		min=arr[i];
	}
	
	cout<<"\nThe minimum number is : "<<min;
	
}
//Function of Program 2
void Program2()
{
	cout<<"\nProgram to print minimum number in array."<<endl;
	int arr[5];
	cout<<"Enter values : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Value "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"Entered values are : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	int max=arr[0];
	for(int i=1;i<5;i++)
	{
		if(max<arr[i])
		max=arr[i];
	}
	
	cout<<"\nThe maximum number is : "<<max;	
}
//Function of Program 3
void Program3()
{
	cout<<"Program to search wether a number is present or not in array.";
	int arr[5];
	cout<<"Enter values : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Value "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"Entered values are : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	int no;
	cout<<"\nEnter a number to find : "<<endl;
	cin>>no;
	bool flag;
	for(int i=0;i<5;i++)
	{
		if(no==arr[i])
		flag++;	
	}
	if(flag==1)
	cout<<"Number is found "<<endl;
	else
	cout<<"Number not found";
}
//Function of Program 4
void Program4()
{
int arr[5];
	cout<<"Enter values : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Value "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"Entered values are : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	int no;
	cout<<"\nEnter a number to search : "<<endl;
	cin>>no;
	int count=0;
	for(int i=0;i<5;i++)
	{
		if(no==arr[i])
		count++;
	}
	cout<<"Number occurs "<<count<<" times in list.";	
}
//Function of Program 5
void Program5()
{
	int arr[5];
	cout<<"Enter values : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Value "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"Entered values are : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"\nOdd numbers are : "<<endl;	
	for(int i=0;i<5;i++)
	{
		if(arr[i]%2!=0)	
		{
		cout<<arr[i]<<"\t";
	}
	}
}
//Function of Program 6
void Program6()
{
	int arr[5];
	cout<<"Enter values : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Value "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"Entered values are : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"\nEven numbers are : "<<endl;	
	for(int i=0;i<5;i++)
	{
		if(arr[i]%2==0)	
		{
		cout<<arr[i]<<"\t";
	}
	}
}
//Function of Program 7
void Program7()
{
	int arr[5];
		cout<<"Enter values : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Value "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"Elements of array are : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"\nReverse of array : "<<endl;
	for(int i=4;i>=0;i--)
	{
		cout<<arr[i]<<"\t";
	}
}
//Function of Program 8
void Program8()
{
	int arr[5];
		cout<<"Enter values : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Value "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"Entered values are : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	int sum=arr[0];
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i+1];
	}
	cout<<"\nThe sum is : "<<sum;
}

//Function of Program 9
void Program9()
{
int arr[5];
	cout<<"Enter the elements of array : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter value "<<i+1<<" :  ";
		cin>>arr[i];
	}
	cout<<"Elements of array are : "<<endl;
	for(int i=0;i<5;i++)
	{
	cout<<arr[i]<<"\t";	
	}
	cout<<"\nUnique elements in array are : "<<endl;
	int count;
	for(int i=0;i<5;i++)
	{
		count=0;
		for(int j=0;j<5;j++)
		{
			if(arr[i]==arr[j])
			{
				if(i!=j)
				{
					count++;
				}
			}
		}
		if(count==0)
		{
			cout<<arr[i]<<"\t";
		}
	}	
}
//Concatination....through switch.....
int main()
{
	int input;
	cout<<"Enter selection from 1 to 9 : ";
	cout<<"\nEnter 1 to print min number in an array."<<endl;
	cout<<"Enter 2 to print max number in an array."<<endl;
	cout<<"Enter 3 to search a number in an array."<<endl;
	cout<<"Enter 4 to count a number in an array."<<endl;
	cout<<"Enter 5 to print odd numbers in an array."<<endl;
	cout<<"Enter 6 to print even numbers in an array."<<endl;
	cout<<"Enter 7 to print reverse of an array."<<endl;
	cout<<"Enter 8 to print sum of an array."<<endl;
	cout<<"Enter 9 to print unique elements  of an array."<<endl;
	cin>>input;
 switch ( input ) {
        case 1:           
            Program1();
            break;
        case 2:          
            Program2();
            break;
        case 3:
		 	Program3();
			 break;
		case 4:
		    Program4();
			 break;
		case 5:
			Program5();
			 break; 
		case 6:
			Program6();
			 break;	
		case 7:
			Program7();
			 break;	
		case 8:
			Program8();
			 break;
		case 9:
			Program9();
			 break;    
        default:            
            cout<< "Invalid Selection!\n";
            break;
	
}
return 0;
}