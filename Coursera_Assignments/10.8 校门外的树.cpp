#include <iostream>

using namespace std;

int main(){    
	int L, M;    
	cin >> L >> M;    

	int count = L + 1; // count the number of trees    
	int start[100] = {0}; //count the starting points    
	int end[100] = {0}; //count the ending points    

	for (int i = 1; i <= M; i++) {        
		cin >> start[i] >> end[i];    
	} //store starting points and ending points for subway districts    
	
	for (int i = 0; i <= L; i++) {        
		for (int j = 1; j <= M; j++) {            
			if (i >= start[j] && i <= end[j]) {                
				count = count - 1;                 
				break;            
			}        
		}    
	 } //check if there is a tree on each point    
	
	cout << count;    
	return 0;
}