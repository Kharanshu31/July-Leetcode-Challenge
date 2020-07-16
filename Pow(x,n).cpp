class Solution {
public:
    double myPow(double x, int n) {
//         if(n<0)
//             return 1/pow(x,abs(n));
        
//         return pow(x,n);
        
  double y = 1;
	if (x == 0)
		return 0;
	while (n) {
		if (n & 1)
			y = (n < 0) ? y / x : y * x;
		x *= x;
		n /= 2;
	}
	return y;
        
    }
};
