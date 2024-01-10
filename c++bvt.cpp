#include<bits\stdc++.h>
using namespace std;
int nt(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	long long n;
	cin>>n;
	int max=1,b=2;
	long long c=n;
	if(nt(n)) cout<<n<<" "<<max;
	else{
		while(c>1&&(nt(c)==0)){
		  for(int i=2;i<=sqrt(n);i++){
			int a=0;
			while(c%i==0){
				a++;
				c/=i;
			}
			if(a>max){
				max=a;
				b=i;
			}
		}
	}
	cout<<b<<" "<<max;
	}
	return 0;
}
