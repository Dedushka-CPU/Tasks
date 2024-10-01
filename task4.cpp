#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cctype>
#include <unordered_set>

using std::cout;
using std::cin;

bool LoveWord(std::string word){
 std::unordered_set<std::string> loveWords {"скучаю","красивый","красивая","особенный","особенная","любить","любовь","любил","любила","полюблю"}	;
	return loveWords.find(word)!=loveWords.end();
}

std::string checkPunktWord(std::string& word){
	std::string res;
	for(char c:word){
		if(!std::ispunct(c)){
			c=std::tolower(c);
			res+=c;
			}	
	}
	return res;
}

int main(){
	std::map<std::string,int> loveWords;
	
	std::string word;
	
	bool check;
	while(cin>>word){
		word=checkPunktWord(word);
		check=LoveWord(word);
		if(check==true){
			loveWords[word]++;
		}
	}
	int count=0;
	for(auto [key,value]:loveWords){
		cout<<key<<" "<<value<<"\n";
		count+=value;
	}
	cout<<"Count love words:"<<count<<"\n"; 
	int rafaello=count/1000;
	int candy=(count-rafaello)/66;
	if(rafaello!=0){
		cout<<"Rafaello box:"<<rafaello<<"\n";
		if(candy!=0){cout<<"And "<<candy<<" candy\n";}
	}else{
		cout<<candy<<" candy\n";
	}
	return 0;
}



