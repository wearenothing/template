#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
	const int N=5;
	vector<int> S(N);
	for(int i=0;i<N;i++)
	cin>>S[i];
	transform(S.begin(),S.end(),ostream_iterator<int>(cout," "),nnegate<int>());
	return 0;
}



