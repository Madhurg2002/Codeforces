 #include <iostream>
  using namespace std;
   int main()
   {long long int m,n,a;
   	cin>>m>>n>>a;
   	long long int row = m/a;
   	long long int coloumn =n/a;
   	if(m%a!=0){ row= row+1;
   	} if (n%a!=0) {coloumn = coloumn +1;
   		}
   		cout<< coloumn*row;
   	}


/*

	cout<<max(m/a,(m+a-1)/a) * max(n/a, (n+a-1)/a)

*/