#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;
int main(){
	
/*
A cannon ball is thrown straight into the air with a starang velocity v 0 . The posiaon of the cannon ball
aber t seconds is given by the equaaon, s = v 0 t – (1/2) gt 2 , where g = 9.8. m/s 2 is the gravitaaonal
force.
In a short ame interval, the velocity v is nearly constant, and we can compute the distance the ball
moves using Δs = vΔt. You will assume that Δt is a constant double with a value of 0.01. You can get
the updated posiaon using s = s + v × Δt. The velocity changes constantly; in fact, it is reduced by the
gravitaaonal force of the earth. In a short ame, interval, Δv = –gΔt, you must keep the velocity updated
as v = v - g * Δt; In the next iteraaon, the new velocity is used to update the distance. Use Δt = 0.01
for each iteraaon.
You are required to conﬁrm the above given equaaon by a simulaaon. In this simulaaon, you will
consider how the ball moves in very short ame interval Δt. You need to run the simulaaon unal the
cannon ball falls back to the ground. Your program should take the iniaal velocity [50,150] meter/sec
as an input. Update the posiaon and velocity 100 ames per second, but print out the posiaon only
every full second. Also, printout the values from the exact formula s = vi t – (1/2) gt 2 for the
comparison.
Lastly plot the path that cannon ball in such a way that the posiaon of ball will get refreshed whenever
you will press the spacebar. You will have to learn the usage of a command for clearing the screen.
*/


	int s0 , s=0 , ds=0 , dt=0 , t , first=0 , v_cnt=0 , dv , Sg;
	double t0=0 , v0=0 , v , v_s;
	short const g=9.8 ;
	
	do{  cout << "Enter velocity [50 , 150] :";	cin >> v0;  } while( v0<50 && v0>150 );
	
	cout << fixed << setprecision(2);
	
	t=2*v0/g;
	v=v0;
	
	cout << "TIME \t\t     DISTANCE    \t\t VELOCITY " << endl << endl; 
	

	
	while( t0<t ){	
				
		cout << t0 << "\t\t\t" << ds << "\t\t\t" << v << endl;
		
		while( v_cnt<=100 ){
			t0 = t0 + 0.01;
			dv = -1*g*t0;
			v_cnt++;
		}

		v = v0 + (-1*g*t0);			//updated velocity
		ds = (v0*t0) - (4.9*t0*t0);		//updated distance
		v_cnt=1;				//velocity count again 1 from 100
	}
	
	cout << "=========================================================" << endl;
	
	t0=0;						
	//GRAPH	
		
	int max_s , max_s1 , t_temp;
	t_temp = 0;

	ds = (v0*t0) - (4.9*t0*t0);				//Resetting all values
	s = s0 + ds;
	max_s = (v0*t/2) - (4.9*(t/2)*(t/2));
	max_s1 = max_s;
	
	cout << endl;
	
	int s_print , t_max_s;
	t_max_s = t/2;
	string further;			
			
	while( t0<t ){						//Plot graph t number of times by resetting it
		
		int l=0;
		max_s = max_s1;
	
		while( l<=max_s ){				//print from 0 to max distance
			
			s = (v0*t0) - (4.9*t0*t0);			
			
			if( max_s>99 )		cout << max_s << '|';			//for managing zeros
			else if( max_s>9 ) 	cout << "0" << max_s << '|';
			else			cout << "00" << max_s << '|';
			
			if ( max_s == s ){						//for printing spaces & * where value matches
				for( int i=0 ; i<=t0 ; i++ ){
					cout << "  ";  
				}
				cout << '*';
				t0++;
			}
			cout << endl;
			max_s--;
		}
		
		t_temp=0;					//Reset temp_t for x-axis of graph
		
		cout << "     ";
		while( t_temp<=t ){				//x-axis printing
				cout << " " << t_temp; //<< ' ';
				t_temp++;
		}
		cout << endl;
		cout << "=============================================================================" << endl;
		
		cout << "Write a char and then Press enter to continue!";
		cin >> further;

	}

return 0;
}
