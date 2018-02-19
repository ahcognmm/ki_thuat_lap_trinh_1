#include <iostream>
#include <limits>

#define option1 "\n1.Tao Lop"
#define option2 "\n2.Tim Kiem"
#define option3 "\n3.Them Sinh Vien"
#define option4 "\n4.Them Lop"
#define option5 "\n5.Xoa Hoc Sinh"
#define option6 "\n6.Xoa Lop"
#define option7 "\n7.Danh Sach Lop"
#define option8 "\n8.Thoat"
using namespace std;

struct node {
    string hoTen;
    int tuoi;
    int mssv;
    struct node *nLeft;
    struct node *nRight;
};
typedef node* tree;
// khoi tao cay
void init( tree &t){
    t = NULL;
}

void TaoLop(){
}
void TimKiem(){
}
void ThemSinhVien(){
}
void ThemLop(){
}
void XoaHocSinh(){
}
void XoaLop(){
}
void DanhSach(){
}

int main() {
    bool finish = false;
    bool error;
    int selectedOption ;
    while(!finish){
        cout << "\nOptions: "<< option1<<option2<<option3<<option4<<option5<<option6<<option7<< option8 << endl;
        cout << "Chon chuc nang: ";
        do{
            error = false;
            cin >> selectedOption;
            if(cin.fail()){
                cin.clear();
                error = true;
                cin.ignore( numeric_limits< int >::max(), '\n' );
                cout << "Ban da nhap loi"<< endl;
                cout << "Chon chuc nang:";
            }
        }while (error == true);

        switch (selectedOption){
            case 1:
                TaoLop();
                break;
            case 2:
                TimKiem();
                break;
            case 3:
                ThemSinhVien();
                break;
            case 4:
                ThemLop();
                break;
            case 5:
                XoaHocSinh();
                break;
            case 6:
                XoaLop();
                break;
            case 7:
                DanhSach();
                break;
            case 8:
                finish = true;
                break;
        }
    }
    cout << "Thank you" << endl;
    return 0;
}
