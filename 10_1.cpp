#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
template<class bili>
class nnegate
{
	public:
		bili operator() (bili& t){
			return -t;
		};
};

template<class IntputIterator,class OutputIterator,class UnaryFunction >
OutputIterator transform(IntputIterator first, IntputIterator last, OutputIterator result, UnaryFunction op);
int main(){
	const int N=5;
	vector<int> S(N);
	for(int i=0;i<N;i++)
	cin>>S[i];
	transform(S.begin(),S.end(),ostream_iterator<int>(cout," "),nnegate<int>());
	return 0;
}

template<class IntputIterator,class OutputIterator,class UnaryFunction >
OutputIterator transform(IntputIterator first, IntputIterator last, OutputIterator result, UnaryFunction op)
{
	for(;first!=last;++first,++result)
	*result=op(*first);
	return result;
}

