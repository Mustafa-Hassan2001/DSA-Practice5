#include <iostream>
#include <math.h>

using namespace std;
int part1(int n){
	cout<<"B TO D"<<endl;
	int ans=0, i=0;
	while(n!=0){
		int digit = n%10;
		if(digit==1){                                                   
		ans = ans+pow(2,i);
		}
		n = n/10;
		i++;
	}
	return ans;
}

int octal(int n){
	int ans=0, i=0;
	while(n!=0){
		int dig = n%10;
		ans = dig*pow(8,i) + ans;
		n = n/10;
		i++;
	}
	return ans;
}

//int hexdec(int n){
//	int ans=0, i=0;
//	while(n!=0){
//		ans = n%10;
//		ans = ans + pow(8,i);
//		n = n/10;
//		i++;
//	}
//	return ans;
//}
int part4(int n){
	cout<<"D TO B"<<endl;
	int ans=0, i=0;
	while(n!=0){
		int digit = n&1;
		ans = digit*pow(10, i) + ans;
		n = n>>1;
		i++;
	}
	return ans;
}

int part5(int n){
	cout<<"D TO O"<<endl;
	int ans=0, i=0;
	while(n!=0){
		int dig = n%8;
		ans = dig*pow(10, i) + ans;
		n = n/8;
		i++;
	}
	return ans;
}


int sum(int n){
	int ans = 0;
	for(int i=0; i<=n; i++){
		ans = ans + i;
 	}
	return ans;
}

bool pt(int n1, int n2, int n3){
	if(n1>n2 || n1>n3){
		int a = n1*n1;
		int b = n2*n2;
		int c = n3*n3;
		int sum = b+c;
		if(a==sum){
			return true;
		}
	}
	if(n2>n1 || n2>n3){
		int a = n2*n2;
		int b = n1*n1;
		int c = n3*n3;
		int sum = b+c;
		if(a==sum){
			return true;
		}
	}
	if(n3>n1 || n3>n2){
		int a = n3*n3;
		int b = n2*n2;
		int c = n1*n1;
		int sum = b+c;
		if(a==sum){
			return true;
		}
	}
	return false;	
}
//int fact(int n){
//	int ans=1;
//	for(int i=1; i<=n; i++){
//		ans = ans * i;
//	}
//	return ans;
//}
//
//int NCR(int n, int r){
//	int newo = fact(n);
//	int dewo = fact(r) *	 fact(n-r);
//	return newo/dewo;
//}
//
//int fibnum(int n){
//	int n1 = 0;
//	int n2 = 1;
//	int ans;
//	for(int i=0; i<=n; i++){
//		cout<<n1<<" ";
//		ans = n1+n2;
//		n1 = n2;
//		n2 = ans;
//	}
//	//return ;
//}
//
//int primenum(int n){
//	for(int i=2; i<=sqrt(n); i++){
//		if(n%i==0){
//			return false;
//		}
//	}
//	return true;
//}
//
//int AP(int n){
//	return (3*n+7);
//}
//
//int setbit(int a, int b){
//	int ans = 0, bit = 0;
//	while(a!=0){
//		 bit = a&1;
//		if(bit == 1){
//			ans++;
//		}
//		a=a>>1;
//	}
//	while(b!=0){
//		 bit = b&1;
//		if(bit == 1){
//			ans++;
//		}
//		b=b>>1;
//	}
//	return ans;
//}
//
//int fab(int n){
//	int num = 0, num1 = 1, ans = 0;
//	for(int i=3; i<=n; i++){
//		ans = num+num1;
//		num = num1;
//		num1 = ans;
//	} 
//	return ans;
//}
//
//int factorial(int n){
//	int fact = 1;
//	for(int i=0; i<=n; i++){
//		fact = fact * i;
//	}
//	return fact;
//}
//int nCr(int n, int r){
//	int newo = factorial(n);
//	int dewo = factorial(r)*factorial(n-r);
//	int ans = newo/dewo;
//	return ans;
//	
//}
//
//int POW(int a, int b){
//	int ans = 1;
//	for(int i=1; i<=b; i++){
//		ans = ans * a;
//	}
//	return ans;
//}
//
//int evenodd(int n){
//	if(n%2==0){
//		return true;
//	}
//	return false;
//}
//
//bool prime(int m){
//	for(int i=2; i<=(m-1); i++){
//		if(m%i==0){
//			return false;
//		}
//	}
//	return true;
//}
int main(int argc, char** argv) {
	//Binary to Decimal Conversion 
//	int n,num=1, ans=0;
//	cin>>num;
//	int i=0; //This variable i
//	while(num!=0){
//		int digit = num&1;				
//		ans = (digit*pow(10,i))+ans;
//		num=num>>1;
//		i++;
//	}
//	cout<<ans;


//	int n,num=1, ans=0;
//	cin>>num;int i=0;
//	while(num!=0){
//		int digit = num%10;
//		if(digit == 1){
//			ans += pow(2,i);
//		}				
//		num=num/10;
//		i++;
//	}
//	cout<<ans;
//complement of n
//int n;
//cin>>n;
//     if(n==0){
//            return 1;
//        }
//        int rednum = 0, num = n;
//        while(num!=0){
//            rednum = (rednum << 1) | 1;
//            num = num>>1;
//        }
//        int ans = (~n) & rednum;
//        cout<<ans;
//    //Power of 2;
//	for(int i=0; i<=30; i++){
//            int ans = pow(2,i);
//            if(ans==n){
//                return true;
//            }
//        }
//        cout<<false;
//    
//	//Power of 3;
//	for(int i=0; i<=30; i++){
//            int ans = pow(3,i);
//            if(ans==n){
//                return true;
//            }
//        }
//        cout<<false;
//    
//	//Power of 4;
//	for(int i=0; i<=30; i++){
//            int ans = pow(4,i);
//            if(ans==n){
//                return true;
//            }
//        }
//        cout<<false;
          
//          
//	long n = 8974899847382;
//	while(n!=0){
//		int n;
//		cin>>n;
//		cout<<endl;
//		switch(n){
//			case 1:
//				cout<<"one"<<endl;
//				break;
//			case 2:
//				cout<<"2one"<<endl;
//				break;
//			case 3:
//				cout<<"3one"<<endl;
//				break;	
//			default: 
//				cout<<"DEF"<<endl;	
//		}
//		cout<<"OUT"<<endl;
//		exit(9);
//	}

//int a, b, oprator;
//cin>>a>>b;
//cout<<"What you want:"<<endl;
//cout<<"1.ADD"<<endl;
//cout<<"2.SUB"<<endl;
//cout<<"3.MUL"<<endl;
//cout<<"4.DIV"<<endl;
//cout<<"5.MOD"<<endl;
//cin>>oprator;
//cout<<endl;
//switch(oprator){
//	case 1:
//		cout<<a+b<<endl;
//		break;
//	case 2:
//		cout<<a-b<<endl;
//		break;
//	case 3:
//		cout<<a*b<<endl;
//		break;
//	case 4:
//		cout<<a/b<<endl;
//		break;
//	case 5:
//		cout<<a%b<<endl;
//		break;
//		
//	default:
//		cout<<"You are out!"<<endl;
//		break;
//		
//		
//}

//we cannot use continue in switch case
//	int n;
//		cin>>n;
//		cout<<endl;
//		switch(n){
//			case 1:
//				cout<<"one"<<endl;
////				break;
//				continue;
//			case 2:
//				cout<<"2one"<<endl;
////				break;
//				continue;
//			case 3:
//				cout<<"3one"<<endl;
////				break;	
//				continue;
//			default: 
//				cout<<"DEF"<<endl;	
//		}
//		cout<<"OUT"<<endl;


//write a c++ code for a program in which user enter a certien amount of money and we tell how much 100 note, 50 notes, 20 notes and 1 notes use to make given amount
//
//input: 1330
//output:
//100: 13
//50: 0
//20: 1
//1: 10
//int n, hun, fifty, twenty, ten, one;
//cin>>n;
//
//switch(1){
//	case 1:
//		hun = n/100;
//		n=n%100;
//		switch(1){
//			case 1: 
//			fifty = n/50;
//			n=n%50;
//			switch(1){
//				case 1: 
//				twenty = n/20;
//				n=n%20;
//				switch(1){
//					case 1: 
//					ten = n/10;
//					n=n%10;
//					switch(1){
//						case 1: 
//						one = n/11;
//						n=n%1;
////						break;
//					}
////					break;
//				}
////				break;
//			}
////			break;
//		}
////		break;
//}
//
//cout<<endl;
//cout<<hun<<" "<<fifty<<" "<<twenty<<" "<<ten<<" "<<one;

//int num1, num2;
//cin>>num1>>num2;
//cout<<POW(num1, num2);

//int n;
//cin>>n; 
//cout<<evenodd(n);

//nCr = n!/r!*(n-r)!

//int n, r;
//cin>>n>>r;
//cout<<nCr(n,r);

//int n;
//cin>>n;
//cout<<prime(n);
//cout<<AP(n);
//int a, b;
//cin>>a>>b;
//cout<<setbit(a, b);

//int n;
//cin>>n;
//cout<<fab(n);
//int n1, n2;
//cin>>n1>>n2;
//for(int i=n1; i<=n2; i++){
//	if(primenum(i)){
//		cout<<i<<endl;
//	}
//}

//	int n;
//	cin>>n;
//	cout<<fibnum(n);

//int n;
//cin>>n;
//cout<<fact(n);
//int n1, n2;
//cin>>n1>>n2;

//Pascal Pattern
//int n;
//cin>>n;
//for(int i=0; i<=n; i++){
//	for(int j=0; j<=i; j++){
//		cout<<NCR(i, j);
//	}
//	cout<<endl;
//}


//=====p5

//q1 sum of n natural numbers
//int n;
//cin>>n;
//cout<<sum(n);


///q2 pythagori tripleing 
//int a, b, c;
//cin>>a>>b>>c;
//cout<<pt(a, b, c);

//q3 part1
int n;
cin>>n;
//cout<<part1(n);
//cout<<octal(n);
//cout<<part4(n);
cout<<part5(n);

 return 0;
}
