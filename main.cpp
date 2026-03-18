#include <iostream>
using namespace std;

/*
    Hàm namnhuan
    Chức năng: kiểm tra một năm có phải là năm nhuận hay không
    Đầu vào: năm (số nguyên)
    Đầu ra: true nếu là năm nhuận và ngược lại false
*/

bool namnhuan(int a){
    return (a % 4 == 0 && a % 100 != 0 || a % 400 == 0);
}

/*
    Hàm main
    Chức năng: nhập một ngày, tháng, năm và tìm ngày kế tiếp của ngày đó
    Đầu vào: ngày, tháng, năm
    Đầu ra: ngày kế tiếp
*/

int main()
{
    int ngay, thang, nam;
    cin >> ngay >> thang >> nam;
    int songay = 0;
    if (thang == 2){
        if (namnhuan(nam)){
            songay = 29;
        }
        else{
            songay = 28;
        }
    }
    else if (thang == 4 || thang == 6 || thang == 9 || thang == 11){
        songay = 30;
    }
    else if (thang >= 1 && thang <= 12){
        songay = 31;
    }
    else{
        cout<<"Ngay khong hop le";
        return 0;
    }
    if (ngay < 1 || ngay > songay){
        cout<<"Ngay khong hop le";
        return 0;
    }
    ngay++;
    if (ngay > songay){
        ngay = 1;
        thang++;
        if (thang > 12){
            thang = 1;
            nam++;
        }
    }
    cout << ngay << "/" << thang << "/" << nam;
    return 0;
}
