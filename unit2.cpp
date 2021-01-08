//
//  main.cpp
//  Learning
//
//  Created by Vinh Luong on 1/9/21.

// Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2
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

int tongcach2(int n)
{
    if(n==1)
    {
        return 1;
    }else{
        return pow(n, 2) + tongcach2(n-1);
    }
}

int tongcach1(int n)
{
    int tong=0;
    for(int i = 1; i<=n ; i++)
    {
        tong = tong + i * i;
    }
    return tong;
}

int main()
{
    int n;
    
    cout<<"Nhap so nguyen n: ";
    n =nhap();
    cout<<"Ket qua se la :"<<tongcach1(n)<<endl;
    return 0;
}


