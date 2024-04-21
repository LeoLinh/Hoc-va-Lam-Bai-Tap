// Baitap_buoi3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // Bài 1 :  Nhập vào số thực x. Tính căn bậc 2 và luỹ thừa của x rồi hiển thị ra màn hình
   
  /*  float x;

    cout << "Nhap gia tri x : ";
    cin >> x;

    float canbac2 = sqrt(x);
    float luythua = pow(x, 2);

    cout << "Can bac 2 cua x : " << canbac2 << endl;;
    cout << "Luy Thua cua x : " << luythua;*/
    //-------------------------------------------------------

    // Bài 2 : Viết chương trình nhập cạnh hình vuông. Tính chu vi và diện tích của hình vuông đó.
    
    /*float canhHinhVuong;

    cout << "Nhap gia tri cua canh hinh vuong : ";
    cin >> canhHinhVuong;

    float chuVi = 4 * canhHinhVuong;
    float dienTich = canhHinhVuong * canhHinhVuong;

    cout << "Chu vi hinh vuong : " << chuVi << endl;
    cout << "Dien tich hinh vuong : " << dienTich;*/
    //-------------------------------------------------------

    // Bài 3 : Viết chương trình nhập bán kính của đường tròn. Tính chu vi và diện tích của hình tròn đó.
    
    /*int banKinhDuongTron;
    const double banKinh = 3.14;

    cout << "Nhap gia tri ban kinh duong tron : ";
    cin >> banKinhDuongTron;

    double chuViHinhTron = 2 * banKinhDuongTron * banKinh;
    double dienTichHinhTron = banKinh * (banKinhDuongTron * banKinhDuongTron);

    cout << "Chu vi hinh tron la : " << chuViHinhTron << endl;
    cout << "Dien tich hinh tron la : " << dienTichHinhTron;*/
    //-------------------------------------------------------

    // Bài 4 : Nhập vào giá trị x.Viết chương trình tính giá trị biểu thức 3𝑥3 − 5𝑥2 + 6

    float x;
    const double hangSo = 6;

    cout << "Nhap gia tri x : ";
    cin >> x;

    float giaTriCuaX = 3 * pow(x, 3) - 5 * pow(x, 2) + hangSo ;

    cout << "Gia tri cua x : " << giaTriCuaX;
    //-------------------------------------------------------










    return 0;
}


