 #include <iostream>
using namespace std;
int mySqrt(int x) 
{
    long r = x;
    while (r*r > x)
        r = (r + x/r) / 2;
    return r;
}

int main(void)
{
	for (int i = 0; i < 30; i++)
		cout << to_string(i) + " : " + to_string(mySqrt(i)) << endl;
	return 0;
}
