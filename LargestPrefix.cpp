#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;

std::string LCP(std::vector<std::string> vec){
	std::string s="";
	size_t v_s=vec.size();
	int flag=0;

	size_t min_length=std::string::npos;
	for(const std::string& str:vec){
		if(str.length()<min_length){
			min_length=str.length();
		}
	}
	for(size_t i=0;i<min_length;i++){
		char a=vec[0][i];
		for(size_t j=1;j<v_s;j++){
			if(a!=vec[j][i]){
				flag=1;
				break;
			}
		}
		if(flag==0){
			s+=a;
		}
		else{
			return s;
		}
	}
	if(flag==0){
	    return s;
	}
    return 0;
}

int main(){
	std::vector<std::string> vec;
    int n;

    cout << "Введите количество строк: ";
    cin >> n;
    cout << "Введите строки по одной:\n";
    for (int i = 0; i < n; i++) {
        std::string str;
        cin >> str;
        vec.push_back(str);
    }
    std::string res = LCP(vec); 
    if (res == "") {
        cout << "Нет общих префиксов" << endl;
    } else {
        cout << "Наибольший общий префикс: " << res << endl;
    }	
    cout<<"test"<<endl;
    return 0;
}
