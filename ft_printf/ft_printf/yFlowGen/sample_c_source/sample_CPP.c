#include <iostream>
using namespace std;

template <class Type> 
void myswap( Type &a, Type &b )
{
	Type temp = a;

	a = b;
	b = temp;
}

int main()
{
	int    a = 1,   b = 2;
	double x = 1.0, y = 2.0;

	cout << "a=" << a << ",b=" << b << endl;
	myswap( a, b );
	cout << "a=" << a << ",b=" << b << endl;

	cout << "x=" << x << ",y=" << y << endl;
	myswap( x, y );
	cout << "x=" << x << ",y=" << y << endl;

	return 0;
}
//--------------------------------------
#include <iostream>
using namespace std;

template <class Type> 
void myswap( Type &a, Type &b )
{
	cout << "Type version is called" << endl;

	Type temp = a;

	a = b;
	b = temp;
}

template<>
void myswap<int>( int &a, int &b )
{
	cout << "int version is called" << endl;

	int temp = a;

	a = b;
	b = temp;
}

int main()
{
	int    a = 1,   b = 2;
	double x = 1.0, y = 2.0;

	cout << "a=" << a << ",b=" << b << endl;
	myswap( a, b );
	cout << "a=" << a << ",b=" << b << endl;

	cout << "x=" << x << ",y=" << y << endl;
	myswap( x, y );
	cout << "x=" << x << ",y=" << y << endl;

	return 0;
}
//-----------------------------------------------
#include <iostream>
using namespace std;

template <class Type> 
void myswap( Type &a, Type &b )
{
	Type temp = a;

	a = b;
	b = temp;
}

int main()
{
	string s1 = "one";
	string s2 = "two";

	cout << "s1=" << s1 << ",s2=" << s2 << endl;
	myswap( s1, s2 );
	cout << "s1=" << s1 << ",s2=" << s2 << endl;

	return 0;
}
//-----------------------------------------------
#include<iostream>
using namespace std;

template <class Type>
class Point
{
	Type x, y;

public:
	Point( Type, Type );

	void pr();
};

template <class Type>
Point<Type>::Point( Type ax, Type ay )
{
	this->x = ax;
	this->y = ay;
}

template <class Type>
void Point<Type>::pr()
{
	cout << "(" << this->x << "," << this->y << ")" << endl;
}

int main()
{
	Point<int> pint( 0, 1 );
	Point<double> pdouble( 1.2, 3.4 );
	Point<char> pchar( 'a', 'b' );

	pint.pr();
	pdouble.pr();
	pchar.pr();

	return 0;
}
//---------------------------------------------------
#include <iostream>
using namespace std;

template <class Type1, class Type2> 
void myswap( Type1 &a, Type2 &b )
{
	long double temp = a;

	a = (Type1)b;
	b = (Type2)temp;
}

int main()
{
	double x = 2.5;
	int y = 5;

	cout << "x=" << x << ", y=" << y << endl;
	myswap( x, y );
	cout << "x=" << x << ", y=" << y << endl;

	return 0;
}
//--------------------------------------------------
#include<iostream>
using namespace std;

int main()
{
	string s1 = "abcdefg";
	string s2 = "hijklmnopqrstu";

	string st = s1 + s2; // 文字列の連結

	cout << "1:" << st << endl;

	st.insert( 5, "***" );

	cout << "2:" << st << endl;

	st.replace( 5, 3, "---" );

	cout << "3:" << st << endl;

	string s3 = st.substr( 5, 3 );

	cout << "4:" << st << endl;
	cout << "5:" << s3 << endl;

	return 0;
}
//---------------------------------------------------
#include<iostream>
using namespace std;

int main()
{
	string s1 = "abcdefg";
	string s2( "hijklmnop" );
	string s3( s2 );

	char str[] = "1234567890";
	string s4( str );

	return 0;
}
//-------------------------------------------------
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	const int n=10;

	vector<int> v1;

	for( int k=0; k<n; k++ )
		v1.push_back( k+1 );

	for( int k=0; k<n; k++ )
		cout << v1[k] << ", ";
	cout << endl;

	for( int k=0; k<n; k++ )
		cout << v1.at(k) << ", ";
	cout << endl;

	for( int k=0; k<n+1; k++ ) // エラー；しかし、終了しない
		cout << v1[k] << ", ";
	cout << endl;

	for( int k=0; k<n+1; k++ ) // エラー；Abortする
		cout << v1.at(k) << ", ";
	cout << endl;

	return 0;
}
//-----------------------------------------------
#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;

int main()
{
	const int n=10;

	vector<int> v1;

	for( int k=0; k<n; k++ )
		v1.push_back( k+1 );

	try
	{
		for( int k=0; k<n+1; k++ ) // エラー；out_of_range例外をスロー
			cout << v1.at(k) << ", ";
		cout << endl;
	}
	catch( out_of_range e ) // out_of_range, runtime_error, exceptionでもキャッチOK
	{
		cout << endl << "例外発生" << endl;
	}
	
	return 0;
}
//----------------------------------------------
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	const int n=10;

	vector<int> v1;

	int mz = v1.max_size(); // 確保可能最大数
	cout << "max size=" << mz << endl;

	for( int k=0; k<n; k++ )
		v1.push_back( k+1 ); // 末尾に追加

	for( int k=0; k<n; k++ )
		cout << v1[k] << ", ";
	cout << endl;

	int f = v1.front(); // 先頭要素取得
	int t = v1.back();  // 最後要素取得
	int sz = v1.size(); // 現在の要素数
	
	cout << "front=" << f << endl;
	cout << "back=" << t << endl;
	cout << "size=" << sz << endl;
	
	v1.pop_back(); // 末尾削除
	v1.pop_back(); // 末尾削除
	sz = v1.size(); // 現在の要素数

	cout << "size=" << sz << endl;

	for( int k=0; k<sz; k++ )
		cout << v1[k] << ", ";
	cout << endl;

	return 0;
}
//------------------------------------------------
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int k;
	int t[] = { 1, 8, 6, 3, 9, -2, 0, 5, };
	const int n = sizeof t / sizeof t[0];

	vector<int> v1;

	for( k = 0 ; k < n ; k++ )
		v1.push_back( t[k] );

	int sz = v1.size();

	for( k = 0 ; k < sz ; k++ )
		cout << v1.at( k ) << " ";
	cout << endl;

	sort( v1.begin(), v1.end() );

	for( k = 0 ; k < sz ; k++ )
		cout << v1.at( k ) << " ";
	cout << endl;

	return 0;
}
//------------------------------------------------
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	const int n=10;
	vector<int> v1;

	for( int k=0; k<n; k++ )
		v1.push_back( k+1 ); // 末尾に追加

	int sz = v1.size(); // 
	cout << "size=" << sz << endl;

	for( int k=0; k<sz; k++ )
		cout << v1[k] << ", ";
	cout << endl;

	reverse( v1.begin(), v1.end() );

	for( int k=0; k<sz; k++ )
		cout << v1[k] << ", ";
	cout << endl;

	random_shuffle( v1.begin(), v1.end() );

	for( int k=0; k<sz; k++ )
		cout << v1[k] << ", ";
	cout << endl;

	return 0;
}
//-----------------------------------------------------
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream ofs( "output.txt" );
	if( ofs == NULL )
	{
		cout << "output.txtを作成できません。" << endl;
		exit( 1 );
	}

	ofs << "おはよう" << endl;
	ofs << "こんにちは" << endl;
	ofs << "こんばんは" << endl;

	ofs.close();

	return 0;
}