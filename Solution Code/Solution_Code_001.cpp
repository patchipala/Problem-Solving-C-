#include<bits/stdc++.h>
using namespace std;

void solve(int n, int a, int num_of_elem){
	int sol[num_of_elem + 1];
	int i, j, k, temp = 4,pos = 1;
	
	if(n == 1){
		sol[1] = 0;
		sol[2] = 1;
		if(a == 1){
			cout<<"1 0";
		} else {
			cout<<"0 1";
		}
	} else {
		sol[1] = 0;
	      if(sol[1] == a){
		   	 pos = 1;
		 }
		sol[2] = 1;
		  if(sol[2] == a){
		   	 pos = 2;
		 }
		sol[3] = 3;
		  if(sol[3] == a){
		   	 pos = 3;
		 }
		sol[4] = 2;
		  if(sol[4] == a){
		   	 pos = 4;
		 }
		
		while(temp < num_of_elem){
		   temp = temp * 2;
		   sol[temp] = temp/2;
		   if(sol[temp] == a){
		   	  pos = temp;
		   }
		   for(j=(temp/2)+1; j<(temp); j++){
		   	  sol[j] = sol[temp] + sol[temp-j+1];
		   	  if(sol[j] == a){
		   	  	    pos = j;
				 }
		   }	
		}
		
	    for(k=pos; k<=num_of_elem; k++){
	    	cout<<sol[k]<<" ";
		}
		
		for(k=1; k<pos; k++){
			cout<<sol[k]<<" ";
		}	
				
	}
	
}

int main(){
	
	int n, a, num_of_elem = 1;
	int i;
	
	cin>>n>>a;
	
	for(i=1; i<=n; i++){
		num_of_elem = num_of_elem * 2;
	}
	
	solve(n, a, num_of_elem);
	
	return 0;
}
