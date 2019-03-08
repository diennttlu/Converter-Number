#include <iostream>
using namespace std;
#include "converter.h"
#include <math.h>

int main()
{
	// ConvertDec Dec;
	// cout<<Dec.DecToHex(38)<<endl;
	// ConvertBin Bin;
	// cout<<Bin.BinToDec(1000)<<endl;
	// cout<<Bin.BinToOct(1000)<<endl;
	// cout<<Bin.BinToHex(1111)<<endl;

	// ConvertOct Oct;
	// cout<<Oct.OctToDec(46)<<endl;
	// cout<<Oct.OctToBin(46)<<endl;
	// cout<<Oct.OctToHex(46)<<endl;

	ConvertHex Hex;
	cout<<Hex.HexToDec("26")<<endl;
		// long value = 5;

		// long bin = 0;
		// long i = 0;
		// while(value>=1)
		// {
		// 	long rem = value % 2;
		// 	bin = bin + rem*pow(10,i);
		// 	value = value/2;
		// 	i++;
		// }
		// cout<<bin<<endl;
	return 0;
}