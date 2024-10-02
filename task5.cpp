#include <iostream>
#include <string>
#include <deque>
#include <map>
#include <vector>
#include <utility>
#include <algorithm>
#include <list>
#include <iterator>

using std::cout;
using std::cin;

template <typename T>

/*void Dublicate(std::vector<T>& v){
	auto s=v.size();
	for(size_t it=0;it<s;it++){
		v.push_back(v[it]);
	}
	for(auto el:v){
		cout<<el<<' ';
	}
}
*/

void Dublicate(std::vector<T>& v){
	v.reserve(2*size(v));
	for(auto it=v.begin(); it!=v.end();it++){
		v.push_back(*it);
	}
	for(auto el:v){
		cout<<el<<' ';
	}
}
	

int main(){
	std::vector<int> v{1,58,6,-9};
	Dublicate(v);
	return 0;
}



