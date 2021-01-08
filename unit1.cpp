//
//  main.cpp
//  Learning
//
//  Created by Vinh Luong on 1/9/21.

// Bài 1: Tính S(n) = 1 + 2 + 3 + … + n
//

#include <iostream>

using namespace std;
int tong(int n)
{
    int tong=0;
    for(size_t i = 0; i<=n ; i++)
    {
        tong += i;
    }
    return tong;
}

int main()
{
    int n;
    do{
        cout<< "Moi nhap gia tri a :" << endl;
        cin>>n;
        if(n<0){
            cout<<"Gia tri phai nhap lon hon 0";
            return -1;
        }
        system("cls");
        cout<<"Gia tri cua tong la :"<< tong(n)<<endl;
    }while (n>=0);
        system("pause");
    return 0;
}
