#include<iostream>
#include <cmath>
using namespace std;

void printchar( int ,char );

int main(){

	int n;
	cin>>n;

	char ch='*';
	// cin>>n;
	cout << "\n\n";
	

/*
*     *     * 
  *   *   *   
    * * *     
* * * * * * * 
    * * *     
  *   *   *   
*     *     * 
*/

	for( int i=1 ; i<=n ; ++i )
	{
		for( int j=1 ; j<=n ; ++j )
		{
			if( i==n/2+1 || j==n/2+1 || i==j || i+j==n+1 )
				cout << ch << ' ';			
			else
				cout << "  ";
		}
		cout << endl;
	}



/*

*         
* *       
*   *     
*     *   
* * * * * 
*/
	for( int i=1 ; i<=n ; ++i )
	{
		for ( int j=1 ; j<=n ; ++j )
		{
			if ( j==1 || i==n || i==j )
				cout << ch << ' ';
			else cout << "  ";
		}
		cout << endl;
	}



/* 
        * 
      * * 
    *   * 
  *     * 
* * * * * 
*/

	for ( int i=1 ; i<=n ; ++i )
	{
		for ( int j=1 ; j<=n ; ++j )
		{
			if ( j==n || i==n || i+j==n+1 )
				cout << ch << " ";
			else	cout << "  ";
		}
	cout << endl;
	}





/*

    *
   ***
  *****
 *******
*********
*/
	int k=1;
	for ( int i=1 ; i<=n ; ++i )
	{
		for ( int j=n-1 ; j>=i ; --j )
			cout << " ";		
		
		for ( int j=1 ; k>=j ; ++j )
			cout << "*";
		
	k+=2;	
	cout << endl;
	}

	int k=1;
	for ( int j=1 ; j<=n ; ++j )
	{
		printchar( n-j , ' ' );
		printchar( k , '*' );
		k+=2;
		cout << endl;
	}

	cout << "\n\n\n";





/*

*     * * * * 
*     *       
*     *       
* * * * * * * 
      *     * 
      *     * 
* * * *     * 
*/
	
	int mid = n/2+1;
	for ( int i=1 ; i<=n ; ++i )
	{
		for ( int j=1 ; j<=n ; ++j )
		{
			if ( j==mid || i==mid || ( j>=mid && i==1 ) || ( j<=mid && i==n ) || ( j==1 && i<=mid ) || ( j==n && i>=mid ) )
				cout << ch << " ";
			else	cout << "  ";
		}
	cout << endl;
	}


/*
 1 2 3 4 5 6 
 1 2 3 4 5 
 1 2 3 4 
 1 2 3 
 1 2 
 1 
*/
	int m=n;
	for ( int i=1 ; i<=n ; ++i )
	{
		for ( int j=1 ; j<=m ; ++j )
			cout << j << " ";			
	m--;
	cout << endl;
	}

	for( int i=0 ; i<n ; ++i )
	{
		for( int j=0 ; j<n-i ; ++j )
			cout << j+1 << " ";
		cout << endl;
	}


/*

// A 
// B B 
// C C C 
// D D D D 
// E E E E E 
*/
	char ch1=65;
	for ( int i=0 ; i<n ; ++i )
	{
		for ( int j=0 ; j<=i ; ++j )
			cout << char(ch1+i) << " ";	
		cout << endl;
	}


/*
A 
A B 
A B C 
A B C D 
A B C D E 
*/
	char ch2=65;
	for ( int i=0 ; i<n ; ++i )
	{
		for ( int j=0 ; j<=i ; ++j )
			cout << char(ch2+j) << " ";	
		cout << endl;
	}


	char ch3=65;
	for ( int i=0 ; i<n ; ++i )
	{
		for ( int k=n-i-1 ; k>0 ; --k )
			cout << " ";
			
		for ( int j=0 ; j<=i ; ++j )
			cout << char(ch3+j);	
		cout << endl;
	}

	


	// int mid1 = n,
	//     mid2 = n;
	// ch = '#';
	
	
/*
    #    
   # #   
  #   #  
 #     # 
#       #

*/ 
	for( int i=1 ; i<=n ; ++i )
	{
		for ( int j=1 ; j<=n*2-1 ; ++j )
		{
			if( j==mid1 || j==mid2 )	cout << ch;
			else 				cout << " ";
		}
		cout << endl;
		mid1++;
		mid2--;
	}



//     0
//    101
//   21012
//  3210123
// 432101234

	// int k=1;
	// for ( int i=1 ; i<=n ; ++i )
	// {
	// 	for ( int j=n-1 ; j>=i ; --j )
	// 		cout << " ";
		
	// 	for ( int j=1 ; k>=j ; ++j )
	// 		cout << abs(j-i);
	
	// k+=2;	
	// cout << endl;
	// }


	// for ( int i=1 ; i<=n ; ++i )
	// {
	// 	for ( int j=n-1 ; j>=i ; --j )
	// 		cout << " ";
			
	// 	for ( int j=i-1 ; j>=-(i-1) ; --j )
	// 		cout << abs(j);
	
	// 	cout << endl;
	// }



// Write a program to print pyramid using numbers

//    1	
//   232
//  34543
// 4567654

/*
	cin >> n;  // Number of rows in the pyramid

    // Outer loop for rows
    for (int i = 1; i <= n; ++i)
	{
        // Inner loop for spaces
        for (int j = 1; j <= n - i; ++j) 
            cout << " ";  // Print spaces
    
        // Inner loop for increasing numbers
        for (int k = i; k <= 2 * i - 1; ++k) 
            cout << k;

        // Inner loop for decreasing numbers
        for (int l = 2 * i - 2; l >= i; --l)
            cout << l;

        cout << endl;  // Move to the next line
    }
*/



return 0;
}

void printchar ( int a , char ch )
{
	for ( int i=1 ; i<=a ; ++i )
		cout << ch;
	
}






















