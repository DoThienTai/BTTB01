#include <iostream>
#include <cmath>
using namespace std;
class HinhKhoi
{
	private: 
		string MaHK;
		string TenHK;
	public:
		HinhKhoi();
		HinhKhoi(string ma,string ten);
		string getMaHK();
		void setMaHK(string ma);
		string getTenHK();
		void setTenHK(string ten);
		
		void input();
		void output();
		virtual double tinhChuVi()=0;
		virtual double tinhDienTich()=0;
};
class HinhChuNhat: public HinhKhoi
{
	private:
		double chieuRong; 
		double chieuDai;
	public:
		HinhChuNhat();
		HinhChuNhat(string ma,string ten,double cr,double cd);
		double getchieuRong();
		void setchieuRong(double cr);
		double getchieuDai();
		void setchieuDai(double cd);	
		void input();
		void output();
		double tinhChuVi();
		double tinhDienTich();	
};
int main()
{
	HinhChuNhat hcn1;
	HinhChuNhat hcn2("0110","Hinh chu nhat 110",5,8);
	hcn1.output();
	hcn2.output();
	hcn1.input();
	hcn1.output();
	return 0;
}
HinhKhoi::HinhKhoi():MaHK("0000"),TenHK("Hinh Khoi")
{
}
HinhKhoi::HinhKhoi(string ma,string ten):MaHK(ma),TenHK(ten)
{
}
string HinhKhoi::getMaHK()
{
	return MaHK;
}
void HinhKhoi::setMaHK(string ma)
{
	MaHK=ma;
}
string HinhKhoi::getTenHK()
{
	return TenHK;
}
void HinhKhoi::setTenHK(string ten)
{
	TenHK=ten;
}
void HinhKhoi::input()
{
	cout<<"Nhap ma: ";
	getline(cin, MaHK);
	cout<<"Nhap ten: ";
	getline(cin, TenHK);
}
void HinhKhoi::output()
{
	cout<<"Ma:"<<MaHK<<endl;
	cout<<"Ten:"<<TenHK<<endl;
}

HinhChuNhat::HinhChuNhat():HinhKhoi(),chieuRong(0),chieuDai(0)
{
}
HinhChuNhat::HinhChuNhat(string ma,string ten,double cr,double cd):HinhKhoi(ma,ten),chieuRong(cr),chieuDai(cd)
{
}
double HinhChuNhat::getchieuRong()
{
	return chieuRong;
}
void HinhChuNhat::setchieuRong(double cr)
{
	chieuRong=cr;
}
double HinhChuNhat::getchieuDai()
{
	return chieuDai;
}
void HinhChuNhat::setchieuDai(double cd)
{
	chieuDai=cd;
}	
void HinhChuNhat::input()
{
	cout<<"Nhap hinh chu nhat: "<<endl;
	HinhKhoi::input();
	cout<<"Chieu rong: ";
	cin>>chieuRong;
	cout<<"Chieu dai: ";
	cin>>chieuDai;
}
void HinhChuNhat::output()
{
	cout<<"Xuat hinh chu nhat: "<<endl;
	HinhKhoi::output();
	cout<<"Chieu rong "<<chieuRong<<endl;
	cout<<"Chieu dai "<<chieuDai<<endl;
	cout<<"Chu vi "<<tinhChuVi()<<endl;
	cout<<"Dien tich "<<tinhDienTich()<<endl;
}
double HinhChuNhat::tinhChuVi()
{
	return 2*(chieuRong+chieuDai);
}
double HinhChuNhat::tinhDienTich()
{
	return chieuRong*chieuDai;
}	
