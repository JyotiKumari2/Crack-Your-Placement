#include <bits/stdc++.h>
using namespace std;

int toggle(int n){		 
	if(n==0){
    	return 1;
	}
	return 0;
}

int main() {
    
    int a[3][3], b[3][3];		 
    for(int i=0; i<3; i++){
    	for(int j=0; j<3; j++){
        	cin>>a[i][j];
        	if(a[i][j]%2 == 0){		 
            	a[i][j]=0;
        	}
        	else{	 
            	a[i][j]=1;
        	}
        	b[i][j]=1;		 
    	}
    }
    
    for(int i=0; i<3; i++){
    	for(int j=0; j<3; j++){
        	if(a[i][j]==1){		 
            	b[i][j] = toggle(b[i][j]);		 
            	if(i>0){
                	b[i-1][j] = toggle(b[i-1][j]);		 
            	}
            	if(j>0){
                	b[i][j-1] = toggle(b[i][j-1]);		 
            	}
            	if(i<2){
                	b[i+1][j] = toggle(b[i+1][j]);		 
            	}
            	if(j<2){
                	b[i][j+1] = toggle(b[i][j+1]);		 
            	}
           	 
           	 
        	}
    	}
   	 
    }
    
    
    for(int i=0; i<3; i++){
    	for(int j=0; j<3; j++){
   	 
        	cout<<b[i][j];		 
    	}
    	cout<<endl;
    }
    
    
    return 0;
}