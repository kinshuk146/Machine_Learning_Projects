#include <iostream>
using namespace std;



int subsequences(string input, string output)
{
	if(input.size()==0)
	{
		output[0]="";
		return 1;
	}


	smallString=input.substr(1);
	smalloutput=subsequences(smallString,output);

	for(int i=0;i<smalloutput;i++)
	{
		output[smalloutput+i]=input[0]+output[i];
	}
	

	return smalloutput*2;
}








int main()
{
	size=subsequences(input,output);

	for(int i=0;i<size;i++)
	{
		cout<<output[i]<<endl;
	}
}