//
//  main.cpp
//  Learning
//
//  Created by Vinh Luong on 1/9/21.

// Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)
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

double tinh(int n)
{
    double s = 0;
    for (int i =1; i<=n; i++) {
        s = s + (double) 1 / (2 * i);
    }
    return s;
}
int main()
{
    int n;
    
    cout<<"Nhap so nguyen n: ";
    n = nhap();
    cout<<"Ket qua se la :"<<tinh(n)<<endl;
    return 0;
}


