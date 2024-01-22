#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string ones[] = { "" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine" };
string teen[] = { "ten" , "eleven" , "twelve" , "thirteen" , "fourteen" , "fifteen" , "sixteen" , "seventeen" , "eighteen" , "ninteen" };
string tens[] = { "" , "" , "twenty" , "thirty" , "fourty" , "fifty" , "sixty" , "seventy" , "eighty" , "ninty" , "" };
string value[] = { "thousand" , "hundred" , "and" , "paisa" };

//It deals with the conversion of two digits i.e eighty seven or fifty four
string convert( int n );
//It converts single digit according to ones rule i.e one in ninty-one
string for_ones( int n1 );
//It deals with the complete whole number part
string Whole_Num( int n1);
//It deals with the complete decimal part
string Decimal_part( int dec_p );

int main()
{
// You are given with a number less than 1 lakh ( 100,000 ) .
// Print out the number in words form 
cout << fixed << setprecision(2);

string rupees , paisas , result;
float	n , dec_p, whole_p;

  do
  {
    cout << "Enter amount between [0,100,000] : ";  cin>>n; 
  } while( n<0 || n>=100000 );

dec_p = (n - (int)n) * 100;		//Making decimal place upto 2
whole_p = (int)n;			         //Whole number part

cout << whole_p << " " << dec_p <<  endl;

rupees = Whole_Num( n );		   //Converting whole number into rupees
paisas = Decimal_part( dec_p );	//Converting decimal part into paisa

result = rupees + paisas;
cout << result << endl;

return 0;
}

string Decimal_part( int dec_p )
{
   if( dec_p == 0 )     return " ";
   string s;
//This will add "AND" and will convert the decimal part with adding "paisa"
   s = " " + value[2] + " " + convert(dec_p) + " " + value[3];
   return s;
}


string Whole_Num( int n1 )
{
   if( n1 == 0 )  return "no money";

   string s1,s2,s3, rup ;
   int whole_p = n1;

   //CREATING THE STRINGS ACCORDING TO THE DIGIITS
   //It will Convert the thousand part of the number
   if( n1 >= 1000 )
   {
      int th = n1/1000;      
      s1 = convert(th) + " " + value[0] ;         
      n1 %= 1000;
   }
   //it will convert the hundred part of the number
   if( n1 >= 100 )
   {
      int hun = n1/100;
      s2 = for_ones(hun) + " " + value[1] ;
      n1 %= 100;   
   }
   //It will convert the tens and ones part
   if( n1>=0 )      s3 = convert(n1);   
   

   //COMBINING THE STRINGS ACCORDING TO REQUIREMENTS

   //If the number is greater than 1000 it will come in this condition
   if( whole_p>=1000 )
   {
      if( whole_p%1000 == 0 )       rup = s1;                        //If the number is only in thousands i.e (17000,4000)
      else if( whole_p%100 == 0 )   rup = s1 + " " + s2;             //If the number is thousands and hundred i.e (12400,99900)
      else                          rup = s1 + " " + s2 + " " + value[2] + " " + s3;   //If all present i.e (12305 , 87610)
   }
   //If the number is greater than hundred
   else if( whole_p>=100 )
   {
      if( whole_p%100 == 0 )     rup = s2;                           //If the number is only in pure hundred i.e (100,300)
      else                       rup = s2 + " " + value[2] + " " + s3; //If it has next indexes i.e (101,110)
   }
   //For just ones and tens part
   else 		     rup = s3;       //i.e (10 , 43)

   rup = rup + " Rupees"; 
   return rup;
}

string convert( int n )
{
   int n2 = n%10 , n1 = n/10  ;
   string s1;
  
  //If first part is 0 than it just checks for ones
   if( n1 == 0 )
      s1 = for_ones(n2);   

   //If first number is 1 than it checks for teens 
   else if( n1==1 )
   {
      for( int i=0 ; i<10 ; i++ )
         if( n2 == i )
         {
            s1 = teen[i];           //Adds a teen according to the condition
            break;
         }
   }
   //IF its neither 0 nor 1 
   else
   {  //IF second part is 0 that means it is just twenty-one or like it
      if( n2 != 0 )
      {
         for( int i=2 ; i<10 ; i++ )   
            if( n1==i )
            {  //ones function will be called
               s1 = tens[i] + "-" + for_ones(n2);
               break;
            }
      }
      else
      {  //IF second part is 0 that means it is just twenty or like it
         for( int i=2 ; i<10 ; i++ )   
            if( n1==i )
            {  //Just calling of tens function
               s1 = tens[i];
               break;
            }
      }
   }

   return s1;
}

string for_ones( int n1 )
{
   string s1;
   //If that number is not zero
   if( n1 != 0 )
   {  //It checks for each one for its related "ONES" numbers    
      for( int i=1 ; i<10 ; i++ )
         if( n1 == i )
         {
            s1 = ones[i];	
            break;
         }            
   }
   return s1;
}



