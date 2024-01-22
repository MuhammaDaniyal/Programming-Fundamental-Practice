#include <iostream>
#include <cmath>
using namespace std;

int main(){

	cout << "Name: M.Daniyal\nRoll no. 23I-0579\nAssignment 2\n";

/*
Write a program to plot a graph of funcaon f(x) =𝑥 # + 𝑥 #%& . The program shall take a maximum
absolute value of x as well as a posiave integer n as input. You will plot a graph for the range [0, x].
You should label the y-axis according to the maximum value of x. 
*/

	int x=0 , n=0 , y , y_max , y1;
	
	do{ cout << "Enter value of x: ";		cin >> x;}	 while( x<0 );		//For input validation
	do{ cout << "Enter value of n: ";		cin >> n;}	 while( n<0 );
	
	
	int x_var = x ; 									

		y = pow(x,n) + pow(x,n-1);
		y1 = y;
		
		for (  ; y1>=0 ; y1-=2 ){							//Loop For Graph starts
				
			y = pow(x,n) + pow(x,n-1);
		
			if( y1>=10)		cout << y1 ;					//For printing two digits in start
			else 			cout << '0' << y1;
		
			if( y1 == y ){							       //For selecting whether to print a star or not 
				
				for( int i=1 ; (x*2)+1>=i ; i++ )
					cout << "  ";
						
				cout << '*' << endl;
			}
		
			else		cout << endl;			
		
			if( y1==y)		x--;	//Selecting rather to decrement x or not as it will not decrement till star prints
		
		}	
	
		cout << "    " ;

		for ( int k=0 ; k<=x_var ; ++k )			//For printing last line
			cout << k << "   ";
	cout << endl;
	
return 0;
}

