#pragma once
#include <string>

using namespace std;

class AlgsCifrado
{
public:
	AlgsCifrado();
	string monomioBinomio(string plainText, int num1, int num2, string mnemo);
	string railFence(string plainText);
	string descRailFence(string cipherText);
	string polyBios(string plainText);
	string descPolyBios(string cipherText);
	string pb_abc = "abcdefghiklmnopqrstuvwxyz", pb_let = "ABCDE";
	string mb_abc = "abcdefghijklmnopqrstuvwxyz", mb_num = "0123456789";

private:

	string mb_abc2;
	int rf_key;
};
