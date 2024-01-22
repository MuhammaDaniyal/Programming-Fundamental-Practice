#include <iostream>
using namespace std;	
int main(){

	int z=32 , az=25 ,internal_space=5;
	int space_line1=0 , run_time=1;
	while( 5>=run_time ){

		int i=1;
		//line 1
		while (az>=i){
			cout << ' ';   i++;
		}
		int j=1;
		while( 6>=j ){
			cout << '*';   j++;
		}
		int o=1;
		while( space_line1 >=o ){
			cout << ' ';   o++;
		}
		cout << '*' << endl;
		//=========================================
		//line 2,3
		int m=1;
		while( 2>=m ){
			int k=1;
			while( az>=k ){
				cout << ' ';    k++;
			}
			cout << '*';
			int l=1;
			while(internal_space>=l){
				cout << ' '; l++;
			}
			cout << '*' << endl;
			m++;
		}
		az-=5; 
		internal_space+=5 ;
		space_line1+=5;
		run_time++;
	}

	
	//Last line
	int h =1;
	while ( 32>=h ){
		cout << '*';	h++;
	}
	cout << endl << endl;



cout << "============================================================================" << "\n\n\n";
		

//Part B
		
		
		
//FIRST 3 lines of pyramid (NO PATTERN)

	int A1=1 , A2=8 , A3=1;
	while( A1<=3 ){
		A1++;
		for( int a1=1 ; a1<=A2 ; a1++ ){
			cout << ' ';
		}
		A2-=1;
		if( A3==1 ){
			cout << '*';	A3++;
		}
		else if( A3==2 ){
			cout << "- -";	A3++;
		}
		else{
			cout << "* - *";
		}
		cout << endl;
	}
		
//NEXT 4 LINES OF PYRAMID

	int B1=4 , B2=5 , B3=2 , B4=1 , B5=2;
	
	while(B1>=1){   B1--;					
	
		for( int b1=1 ; b1<=B2 ; b1++ ){		//For first spaces
			cout << ' ';
		}	
		B2--;
	
		if(B3%2==0){							//First * & -
			cout << "- *";		B3++;
		}
		else{
			cout << "* -";		B3++;
		}
	
		for(int b2=1 ; b2<=B4 ; b2++ ){			//Middle spacing
			cout << ' ';
		}
		B4+=2;
	
		if(B5%2==0){							//Last * & -
			cout << "* -";		B5++;
		}
		else{
			cout << "- *";		B5++;
		}
	cout <<endl;
	}

		
//first 5 lines of box

	int n=5,s2,num=0,a=0,b=0,s1;
	int c1=1 ,c2=1 ,c3=2 ,c4=2;
	
	for ( int i1=1 ; i1<=n ; i1++ ){

		if(c1==1){								//This is for first * & -
			cout << " - *";		c1++;
		}
		else if(c3%2==0){
			cout << "* - ";		c3++;
		}
		else{
			cout << "- * ";		c3++;
		}
	
		s1=n-a-1;					
		for( s1 ; s1>=1 ; s1-- ){				//This for loop is for first stars
			cout << '*';
		}
		a+=1;
		for( int j=1 ; j<=i1 ; j++ ){			//This for loop is for incrementing numbers
			cout << j;
		}
		num=i1;
		for( int k=1 ; k<i1 ; k++ ){			//This for loop is for decrementing numbers
			num--;
			cout << num;
		}
		s2=n-b-1;
		for( s2 ; s2>=1 ; s2-- ){				//This for loop is for last stars
			cout << '*';
		}
		b+=1;
		
		if(c2==1){								//For ending * & -
			cout << "* - ";		c2++; 
		}
		else if(c4%2==0){
			cout << " - *";		c4++;
		}
		else {
			cout << " * -";		c4++;
		}
		
		cout << endl;
	}
	
//LAST 4 LINES OF BOX
		int n1=4 , d=0 ;
		int f=4;
		int ref =n1,t=0;
		int p1=2 , p2=2;
		
		for ( int i2=1 ; n1>=i2 ; i2++ ){
			
			if( p1%2==0 ){							//For first * & -
				cout << "* - ";
				p1++;
			}
			else{
				cout << "- * ";
				p1++;
			}						   				
			
			for( int o=1 ; i2>=o ; o++ ){			// for first stars
				cout << '*';
			}								
			
			for( int l=1 ; l<=ref ; l++ ){			// for first numbers
				cout << l;
			}
			ref--;
			f = n1-t;
			while( f>1 ){							//for spaces
				cout << ' ';
				f--;
			}
			t++;
			
			for( int m=1 ; m<=i2 ; m++ ){			//for last stars
				cout << '*';
			}
			
			if( p2%2==0 ){							//For last * & -
				cout << " - *";
				p2+=1;
			}
			else{
				cout << " * -";
				p2+=1;
			}							
			
			cout <<endl;
		}
		
//First 5 lines of inverted pyramid

	int e3=2 , e4=9 , e6=2;
	
	for( int e1=1 ; e1<=5 ; e1++ ){
		
		for( int e2=1 ; e2<=e1 ; e2++ ){			//for first spaces
			cout << ' ';		
		}
		
		if (e3%2==0){								//For first * & -
			cout << "* -";		e3++;
		}
		else{
			cout << "- *";	 	e3++;
		}
		
		int e5=1;
		while(e4>=e5){								//for middle spaces
			cout << ' ';		e5++;
		}
		e4-=2;
		
		if(e6%2==0){								//for second * & -
			cout << "- *";		e6++;
		}
		else{
			cout << "* -";		e6++;
		}
		cout << endl;
	}


		
//LAST 3 LINES OF PYRAMID
	
	int d2=6 , d4=0;
	
	for( int d3=1 ; d3<=3 ; d3++ ){					//For repeating 3 times
		for ( int d1=1 ; d1<=d2 ; d1++ ){			//for initial spaces
			cout << ' ';
		}
		d2++;
		
		if( d4==0 ){								//for conditonal outputs
			cout << "- * -";		d4++;
		}
		else if( d4==1 ){
			cout << "* *";			d4++;
		}
		else{
			cout << '-';
		}
		cout << endl;
	}

	return 0;	
}
