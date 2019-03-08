#ifndef converter_h
#define converter_h
#include <math.h>
#include <string>
using namespace std;
class ConvertDec{
private: long value;
public:
	ConvertDec(){};
	ConvertDec(long value){
		this->value = value;
	};
	long DecToBin(long value)
	{
		long bin = 0;
		long i = 0;
		while(value>=1)
		{
			long rem = value % 2;
			bin = bin + rem*pow(10,i);
			value = value/2;
			i++;
		}
		return bin;
	};

	
	long DecToOct(long value)
	{
		long bin = 0;
		long i = 0;
		while(value>=1)
		{
			long rem = value % 8;
			bin = bin + rem*pow(10,i);
			value = value/8;
			i++;
		}
		return bin;
	};

	string DecToHex(long value)
	{
		string a ="0123456789ABCDEF";
		string hex = "";
		while(value>=1)
		{
			hex = hex + a[value%16];
			value = value/16;
		}
		string hex1 ="";
		for(int i = hex.length();i>=0;i--)
		{
			hex1 = hex1 + hex[i];
		}
		return hex1;
	};

};

class ConvertBin : public ConvertDec {
private:
	long value;
public:
	ConvertBin(){};
	ConvertBin(long value){
		this->value = value;
	};

	long BinToDec(long value)
	{
		long dec = 0;
		int i = 0;
		while(value>=1)
		{
			long rem = value%10;
			dec = dec + rem*pow(2,i);
			value = value/10;
			i++;
		}
		return dec;
	};

	long BinToOct(long value)
	{
		long oct = 0;
		int i = 0;
		while(value>=1)
		{
			long rem = value%8;
			oct = oct + rem*pow(2,i);
			value = value/8;
			i++;
		}
		return oct;
	} 
	string BinToHex(long value)
	{
		long dec = BinToDec(value);
		return DecToHex(dec);
	}
};

class ConvertOct : public ConvertDec
{
private: long value;
public:
	ConvertOct(){};
	ConvertOct(long value){
		this->value = value;
	}

	long OctToDec(long value)
	{
		long dec = 0;
		int i =0;
		while(value>=1)
		{
			long rem = value%10;
			dec = dec + rem*pow(8,i);
			value = value/10;
			i++;
		}
		return dec;
	}

	long OctToBin(long value)
	{
		long dec = OctToDec(value);
		return DecToBin(dec);
	}

	string OctToHex(long value)
	{
		long dec = OctToDec(value);
		return DecToHex(dec);
	}
};

class ConvertHex : public ConvertDec
{
private: string value;
public:
	ConvertHex(){};
	ConvertHex(string value){
		this->value = value;
	}

	int CharToNumber(char value)
	{
			if(value == '0'){return 0;}
			if(value == '1'){return 1;}
			if(value == '2'){return 2;}
			if(value == '3'){return 3;}
			if(value == '4'){return 4;}
			if(value == '5'){return 5;}
			if(value == '6'){return 6;}
			if(value == '7'){return 7;}
			if(value == '8'){return 8;}
			if(value == '9'){return 9;}
			if(value == 'A'){return 10;}
			if(value == 'B'){return 11;}
			if(value == 'C'){return 12;}
			if(value == 'D'){return 13;}
			if(value == 'E'){return 14;}
			if(value == 'F'){return 15;}
	}

	long HexToDec(string value)
	{
		long dec =0;
		string a = value;
		int k=0;
		for(int i = a.length()-1;i>=0;i--)
		{
			char b = a[i];
			int temp = CharToNumber(b);
			dec = dec + temp*pow(16,k);
			k++;
		}
		return dec;
	}

	long HexToBin(string value)
	{
		long dec = HexToDec(value);
		return DecToBin(dec);
	}

	long HexToOct(string value)
	{
		long dec = HexToDec(value);
		return DecToOct(dec);
	}
};
#endif