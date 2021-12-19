void binaryprint(int n) {
	for (int i = 10; i >= 0; --i)
		cout << ((n >> i) & 1);
	cout << endl;
}

int setcount(int n) {
	int ct = 0;
	for (int i = 32; i >= 0; --i)
		if (n & (1 << i)) ct++;
	return ct;
}

//checking if ith bit is set or not
(a & (1 << 0))? cout << "set\n" : cout << "unset\n";
//bit set 
binaryprint(a | (1 << 6));
//bit unset 
binaryprint( a & (~(1 << 2)));
//bit toggle
binaryprint(a ^ (1 << 8)); 

char c = 'h', c1 = 'H';
// char(c1 | (1 << 5)); uppercase to lowercase
cout << char(c1 | ' ');
//char(c & ~(1 << 5)); lowercase to uppercase
cout << char(c & '_')
	
//unset ith bit from right 
int c1  = (a & (~((1 << (i+1))-1)));
//unset ith bit from left
int c2 = (a & ((1 << (i+1))-1));

int gcd(int a, int b) { // gcd of two numbers 
	if (a == 0) return b;
	return gcd(b%a, a);
}

//recursive binary exponentation.
int binexprec(int a, int b) { 
	if (b == 0) return 1;
	long long int ans = binexprec(a, b/2);
	if (b & 1) return (a*((ans*ans)%M)) % M;
	else return (ans*ans) % M;
}

//iterative binary exponentation
int binexpitr(int a, int b) {
	int ans = 1;
	while (b != 0) {
		if (b & 1) ans = (ans*1ll*a) % M;
		a = (a*1ll*a) % M;
		b >>= 1;
	}
	return ans;
}

const long long int M = 1e18+7;

// if the value of M becomes greater than integer range like ll int
//binary multiplication when we have to take mod of number greater than integer.
//multiplication function if we have to take mod of two big numbers where mod is big

int binmul(long long int a, long long int b) { 
	int ans = 0;
	while (b != 0) {
		if ( b & 1) ans = (ans + a) % M;
		a = (a + a) % M;
		b >>= 1;
	}
	return ans;
}
int binexpitr(long long int a, long long int b) {
	int ans = 1;
	while (b != 0) {
		if (b & 1) ans = binmul(ans, a);
		a = binmul(a,a);
		b >>= 1;
	}
	return ans;
}
