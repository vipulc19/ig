#include<bits/stdc++.h>

using namespace std;

int main()
{
	stack<int> st;

	vector<string> A={"2", "1", "+", "3", "*"};
	int len=A.size();

	for(int i=0;i<len;i++)
	{
		//cout << A[i][0]; exit(0);
		if(isdigit())
		{
			st.push(A[i][0]);
			//cout<<st.top()<<endl;
			//int x=st.top();
			//cout<<x<<endl;
		}

		else 
		{
			int val1=st.top();		st.pop();	
			int val2=st.top();		st.pop();
			cout << val1<<'\t'<<val2; exit(0);
			if(A[i]=="+")
				st.push(val2+val1);
			else if(A[i]=="-")
				st.push(val2-val1);
			else if(A[i]=="*")
				st.push(val2*val1);
			else if(A[i]=="/")
				st.push(val2/val1);

		}
	}
	cout<<st.top();

	return 0;
}