#include <iostream>
using namespace std;

int main (){
	string a[10]={"*"," *","  *","   *","    *","     *","      *","       *","        *","         *"};
	
	for (int b = 0; b < 10; b++){
		for(int c = 0; c < 10; c++){
			cout << a[b];
		}
		cout<<endl;
	}
	
	return 0;
}
