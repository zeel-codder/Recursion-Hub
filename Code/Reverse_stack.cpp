
#include<bits/stdc++.h>
using namespace std;

stack<char> st;

string ns;

char insert_at_bottom(char x)
{
	if(st.size() == 0)
	st.push(x);

	else
	{
		char a = st.top();
		st.pop();
		insert_at_bottom(x);

		st.push(a);
	}
}

char reverse()
{
	if(st.size()>0)
	{
		char x = st.top();
		st.pop();
		reverse();
		
		insert_at_bottom(x);
	}
}

int main()
{
    int n;
    cout<<"Enter number of elements to push in stack : ";
    cin<<n;

    for(int i=0; i<n; i++){

        int x;
        cin>>x;
        st.push(x);
    }

	reverse();
	cout<<"Reversed Stack"
		<<endl;

	while(!st.empty())
	{
		char p=st.top();
		st.pop();
		ns+=p;
	}

	for(int i=0; i<n; i++) cout<<ns[i]<<" ";
    cout<<endl;

	return 0;
}

// This code is contributed by Ankit Raibole
