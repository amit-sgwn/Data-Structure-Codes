#include<iostream>
#include<vector>

using namespace std;

int main()
{
	std :: vector <int> vec;
	bool isEqualsum = false;
	vector<int> :: iterator itr;
	int n,k,sum=0,sumleft=0;
	
	cin >> n;
	for(int i=0 ;i<n;i++){
		cin >> k;
		sum += k;
		vec.push_back(k);
		
	}
	sumleft += *vec.begin();
	sum -= sumleft;
	for(itr = vec.begin()+1 ; itr != vec.end();itr++)
	{
		int temp = *itr;
		sum -= temp;
		if(sum == sumleft)
		{
			cout << "yes" << endl;
			isEqualsum = true;
		}
		sumleft += temp;
	}
	cout << "value is " << isEqualsum << endl;
}
