#include<bits/stdc++.h>
using namespace std;
int power(int a,int b,int n){
	int i,res=1,def=a;
	for(i=0;i<b;i++){
		res=(res*def)%n;
	}
	return res;
}
int main(){
	string s;
	cin>>s;
	int len=s.size(),i,j=0;
	int a[len/2]={0};
	for(i=0;i<len/2;i++){
		a[i]=(int)s[j]-30;
		a[i]*=100;
		a[i]+=(int)s[j+1]-30;
		j+=2;
	}
	for(i=0;i<len/2;i++)cout<<a[i]<<" ";
	cout<<endl;
	int num=len/2;
	cout<<"enter two primes"<<endl;
	int p,q;
	cin>>p>>q;
	int n=p*q,phi=(p-1)*(q-1),e=2;
	while(e<phi){
		if(__gcd(e,phi)==1)break;
		e++;
	}
	int d=1;
	while(1){
		if((d*e)%phi==1)break;
		d++;
	}
	cout<<"PHI = "<<phi<<"  E= "<<e<<"  D= "<<d<<endl;
	int en[num]={0},de[num]={0};
	for(i=0;i<num;i++){
		en[i]=power(a[i],e,n);
		//en[i]%=n;
	}
	cout<<"encrypted :: "<<endl;
	for(i=0;i<num;i++){
	cout<<en[i]<<" ";
	}
    cout<<endl<<"decrypted  :: "<<endl;
	for(i=0;i<num;i++){
		de[i]=power(en[i],d,n);
	}
	for(i=0;i<num;i++){
	cout<<de[i]<<" ";
}
}
