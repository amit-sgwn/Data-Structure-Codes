#include<iostream>
#include<string>


// @Author Amit
/*
	Input :-  string with whitespaces
	Output :- string with all non plindrom string 
	
	this program remove all plindrom words 
*/
using namespace std;
bool isPlindrom(string str){
	int len = str.length();
	for(int i=0;i<len-1/2;i++)
	{
		if(str[i] != str[len-1-i])
			return false;
	}
	return true;
}

int main()
{
	string str,str1;
	int i=0,length,startIndex=0,endIndex=0;
	std::getline(cin,str);

	length = str.length();

	while(i<length-1){
		startIndex = i;
		string space = " ";
		while(str[i] != ' ' && i < length-1){
			i++;

		}
			
		if(str[i]==' ')
		{
			endIndex = i;	
		
			if(endIndex - startIndex == 1)
			{

				cout << "1 kaa diff" << endl;
			}
			else if(!isPlindrom(str.substr(startIndex,endIndex-startIndex)) )
			{
				str1.append(str.substr(startIndex,endIndex-startIndex));
				str1.append(space);
			}
			else{
				
			}
			cout << "appended string is :---- "<< str1 << endl;
			i++;
		}
		
	}
//	cout << isPlindrom(str); 
	cout << str1 << endl;
}
