#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main(int argc, char** argv){
	fprintf(stderr, "---------------------------%s:%s():%d------------------------------\n", __FILE__, __FUNCTION__, __LINE__); 

	cout << "argc: " << argc << endl;
	for(int i = 0; i < argc; i++){
		cout << "argv[" << i << "]: " << argv[i] << endl;
	}
	if(argc != 3){
		cout << "Forget enter 2 number." << endl;

	}else{

		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int sum = a+b;
		cout << "The sum of " << a << " and "<< b << " is: "<< sum << endl;
	}

	fprintf(stderr, "---------------------------%s:%s():%d------------------------------\n", __FILE__, __FUNCTION__, __LINE__);
	return 0;
}
