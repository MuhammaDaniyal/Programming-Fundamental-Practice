#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/*
	Name = Muhammad Daniyal
	Class = CS-F
	Roll no. i230579
*/	


	cout << " ." << setw(43) << setfill('-') << ",\n"<< "| ." << setw(42) << setfill('-') << ", |\n"
	<< "| | _~_" << setw(38) << setfill(' ') << "| |\n"<< "| |" << setw(3) << setfill(' ') << '\\' << '/' << setw(3) << setfill(' ') << 'N' << "UCES Instruments" << setw(6) << setfill(' ') << 'T' << "I - 8 6  | |\n"
	<< "| | ." << setw(35) << setfill('-') << ',' << " | |\n" << "| | |" << setw(35) << setfill(' ') << '|' << " | |\n"
	<< "| | | 1 + 1" << setw(29) << setfill(' ') << '|' << " | |\n"<< "| | |" << setw(35) << setfill(' ') << '|' << " | |\n"	
	<< "| | |" << setw(33) << setfill(' ') << "2  " << " | | |\n"<< "| | |" << setw(35) << setfill(' ') << '|' << " | |\n"
	<< "| | | 6 * 8" << setw(29) << setfill(' ') << '|' << " | |\n"<< "| | |" << setw(32) << setfill(' ') << '4' << "8 | | |\n"
	<< "| | |" << setw(35) << setfill(' ') << '|' << " | |\n"<< "| | | _" << setw(33) << setfill(' ') << '|' << " | |\n"
	<< "| | |" << setw(35) << setfill(' ') << '|' << " | |\n"<< "| | |" << setw(35) << setfill(' ') << '|' << " | |\n"
	<< "| | |" << setw(35) << setfill(' ') << '|' << " | |\n"<< "| | |" << setw(35) << setfill(' ') << '|' << " | |\n"
	<< "| | |" << setw(35) << setfill(' ') << '|' << " | |\n"<< "| | ." << setw(35) << setfill('-') << ',' << " | |\n" 
	<< "| |" << setw(42) << setfill(' ') << "| |\n"<< "| ." << setw(42) << setfill('-') << ", |\n"
	<< '|' << setw(6) << setfill(' ') <<'M' << '1'<< setw(7) << setfill(' ') <<'M' << '2'<< setw(7) << setfill(' ') <<'M' << '3'<< setw(7) << setfill(' ') <<'M' << '4'<< setw(7) << setfill(' ') <<'M' << '5' << setw(5) << setfill(' ') << "|\n"
	<< "|  ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(9) << setfill('-') << ", |\n"<< "|  |  F1 | |  F2 | |  F3 | |  F4 | |  F5 | |\n"
	<< "|  `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(9) << setfill('-') << "\' |\n"<< '|' << setw(8) << setfill('-') << '.' << setw(9) << setfill('_') << ' ' << setw(10) << setfill(' ') << '_' << setw(8) << setfill('_') << ',' << setw(9) << setfill('-') << "|\n"
	<< '|' << setw(17) << setfill(' ') << '`' << setw(9) << setfill('-') << "\'"<<setw(18)  << setfill(' ') << "|\n"<< "|" << setw(44) << setfill(' ') << "|\n"
	<< "|" << setw(10) << setfill(' ') << "Q" << "UIT" << setw(6) << setfill(' ') << 'M' << "ODE" << setw(9) << setfill(' ') << '_' << ",-._" << setw(9) << setfill(' ') << "|\n"<< "|  ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(6) << setfill('-') << "," << "  /\\ \\_^_/ /\\" << setw(6) << setfill(' ') << "|\n"
	<< "|  | 2nd | | EXIT| | MORE|" << " / /   |   \\ \\" << setw(5) << setfill(' ') << "|\n"<< "|  `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(6) << setfill('-') << "\'" << " |<|   0   |>|" << setw(5) << setfill(' ') << "|\n"
	<< "|  alpha" << setw(4) << setfill(' ') << 'L' << "INK x  INS" << setw(6) << setfill(' ') << '\\' << " \\  _|_  / /" << setw(5) << setfill(' ') << "|\n"<< "|  ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(6) << setfill('-') << "," << "  \\/ / v \\ \\/" << setw(6) << setfill(' ') << "|\n"<< "|  |ALPHA| |x-VAR| | DEL |" << setw(6) << setfill(' ') << '-' << "._,-" << setw(9) << setfill(' ') << "|\n"
	<< "|  `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(6) << setfill('-') << "\'"  << setw(19) << setfill(' ') << "|\n"<< "|  SOLVER  SILMULT  POLY" << setw(3) << setfill(' ') << 'C' << "ATLG-VARS" << setw(9) << setfill(' ') << "|\n"
	<< "|  ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(9) << setfill('-') << ", |\n"<< "|  |GRAPH| |TABLE| | PRGM| |CUSTM| |CLEAR| |\n"
	<< "|  `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(9) << setfill('-') << "\' |\n"<< "|  10x  A  SIN-U1 B COS-1 C TAN-1 D pi"  << setw(3) << setfill(' ') << 'E' << setw(4) << setfill(' ') << "|\n"
	<< "|  ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(9) << setfill('-') << ", |\n"<< "|  | LOG | | SIN | | COS | | TAN | |  ^  | |\n"
	<< "|  `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(9) << setfill('-') << "\' |\n"
	<< "|  ex   F  x-1  G  [" << setw(5) << setfill(' ') << 'H' << setw(3) << setfill(' ') << ']'<< setw(3) << setfill(' ') << 'I' << "  CALC J" << setw(6) << setfill(' ') << "|\n"<< "|  ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(9) << setfill('-') << ", |\n"<< "|  | LN  | | EE  | |  (  | |  )  | |     | |\n"
	<< "|  `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(9) << setfill('-') << "\' |\n"<< "|  ,/~  K MATRIX B VECTOR M CPLX N MATH 0"  << setw(4) << setfill(' ') << "|\n"
	<< "|  ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(9) << setfill('-') << ", |\n"<< "|  | X2  | |  7  | |  8  | |  9  | |  x  | |\n"
	<< "|  `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(9) << setfill('-') << "\' |\n"	
	<< "|  /_  P   CONS Q  CONV R  STRNG S  LIST T"  << setw(3) << setfill(' ') << "|\n"<< "|  ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(9) << setfill('-') << ", |\n"<< "|  |  ,  | |  4  | |  5  | |  6  | |  -  | |\n"<< "|  `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(9) << setfill('-') << "\' |\n"
	<< "|  RCL =   BASE U  TEST V  MEM W   STAT X"  << setw(4) << setfill(' ') << "|\n"<< "|  ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(9) << setfill('-') << ", |\n"
	<< "|  | STO>| |  1  | |  2  | |  3  | |  +  | |\n"<< "|  `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(9) << setfill('-') << "\' |\n"
	<< "|  OFF     CHAR Y  :    z  ANS  _  ENTRY"  << setw(5) << setfill(' ') << "|\n"<< "|  ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(8) << setfill('-') << ", ." << setw(9) << setfill('-') << ", |\n"
	<< "|  | ON  | |  0  | |  .  | | (-) | |ENTER| |\n"<< "|  `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(8) << setfill('-') << "\' `" << setw(9) << setfill('-') << "\' |\n"
	<< "|  " << setw(8) << setfill('-') << ' ' << setw(34) << setfill(' ') << "|\n"<< "`\\" << setw(43) << setfill(' ') << "/\'\n"<< "  `-._" << setw(36) << setfill(' ') << "_.-\'\n"
	<< setw(7) << setfill(' ') << '`' << "--.__" << setw(20) << setfill(' ') << '_' << "_.--\'\n"<< setw(13) << setfill(' ') << '`' << "`----.._____,,--->" << endl;


	

return 0;
}
