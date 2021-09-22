#include<iostream>
using namespace std;
int main(){
	int *ptr;
	ptr=new int[10];
	for(int i=0;i<10;i++){
		cout<<"Enter elements "<<i+1<<" \n";
		cin>>ptr[i];
	}
    int temp1=0;
	int temp2=0;
	//Descending
	for(int i=0;i<9;i++){ 
    	for(int j=0;j<9-i;j++){
 
		if(ptr[j]<ptr[j+1]){
			temp1=ptr[j];
			ptr[j]=ptr[j+1];
			ptr[j+1]=temp1;
	    	}
    	}
	}
	int max[5];
	for(int i=0;i<5;i++){
		max[i]=ptr[i];
	}
	//ascending
	for(int i=0;i<9;i++){ 
    	for(int j=0;j<9-i;j++){
 
		if(ptr[j]>ptr[j+1]){
			temp1=ptr[j];
			ptr[j]=ptr[j+1];
			ptr[j+1]=temp1;
	    	}
    	}
	}
	int min[5];
	for(int i=0;i<5;i++){
		min[i]=ptr[i];
	}
    cout<<"\n***ARRANGED***\n";
    ptr[0]=max[0];
    ptr[1]=min[0];
    ptr[2]=max[1];
    ptr[3]=min[1];
    ptr[4]=max[2];
    ptr[5]=min[2];
    ptr[6]=max[3];
    ptr[7]=min[3];
    ptr[8]=max[4];
    ptr[9]=min[4];
    for(int i=0;i<10;i++){
    	cout<<" "<<ptr[i]<<" ";
	}
}
