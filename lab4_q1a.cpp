#include<iostream>
using namespace std;

class stackarr{
	public:
	int n;
	int a[111];
	int b[111];
stackarr(int x){
	n =x;
	a[n];
	b[n];
	for(int i=0;i<n;i++){
		a[i] = 0;
	}
	for(int i=0;i<n;i++){
		b[i] = 0;
	}
}


void push(int value){
	
	if(n==0){cout << "Stack is empty" << endl; return;}

	
	for(int i=0;i<n;i++){
		b[i] = a[i];
	}

	
	a[0] = value;
	for(int i=0;i<n-1;i++){
		a[i+1] = b[i];
	}
}

void pop(){
	
	if(n==0){cout << "Stack is empty" << endl; return;}

	
	for(int i=0;i<n;i++){
		b[i] = a[i];
	}

	
	for(int i=0;i<n-1;i++){
		a[i] = b[i+1];
	}
	
	b[0]=0;
	a[n-1]=0;
}


void size(){
	cout << "This stack can store upto " << n << " elements." << endl;
}

void isEmpty(){
	if(n==0){cout << "This stack is empty."<<endl;}
	else {
	cout << "This stack can never be empty as it will contain zero if you don't give any input"<<endl;
	}
}
void top(){
	cout << "The top is " << a[0] << endl;
} 
void disp(){
	for(int i=0;i<n;i++){
	cout << a[i] << "->";
	}
	cout << "\b\b  " << endl;
}

};

int main(){
	int n;
	cout << "How long is stack supposed to be?" << endl;
	cin >> n;	
	stackarr s1(n);

	for(int i=1;i<=n;i++){
	s1.push(i);
	}
	s1.disp();
	s1.pop();
	s1.pop();
	s1.disp();
	s1.isEmpty();
	s1.top();
	s1.size();
	
return 0;
}
