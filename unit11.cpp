//
//  main.cpp
//  Learning
//
//  Created by Vinh Luong on 1/9/21.

// Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N
//

#include <iostream>
#include <math.h>

using namespace std;
int nhap()
{
    int x;
    do{
        cin>>x;
        if(x<0){
            cout<<"Gia tri phai nhap lon hon 0";
            return -1;
        }
        system("cls");
    }while (x< 0);
        system("pause");
    return x;
}

long tinh(int n)
{
	long tong = 0, tich = 1;
	for (int i = 1; i <= n; i++)
	{
		tich = tich * i;
		tong = tong + tich;
	}
	return tong;
}
int main()
{
    int n;
    
    cout<<"Nhap so nguyen n: ";
    n = nhap();
    cout<<"Ket qua se la :"<<tinh(n)<<endl;
    return 0;
}


