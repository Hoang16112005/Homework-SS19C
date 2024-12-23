#include<stdio.h>
#include<string.h>
struct SinhVien{
	int id;
	char fullName[50];
	int age;
	char phoneNumber[20];
};
void sapXepSinhVien(struct SinhVien sinhVien[], int n);
void inDanhSach(struct SinhVien sinhVien[], int n);
int main(){
	int n=5;
	struct SinhVien sinhVien[5]={
		{03, "Ngo Xuan Hoang", 19, "0917758758"},
		{05, "Nguyen Van A", 19, "0123456789"},
		{04, "Nguyen Van B", 19, "0987654321"},
		{01, "Nguyen Van C", 19, "0101010101"},
		{02, "Nguyen Van D", 19, "02020202020"}
	};
	printf("Danh sach ban dau:\n");
	inDanhSach(sinhVien, n);
	sapXepSinhVien(sinhVien, n);
	printf("\nDanh sach sau khi sap xep:\n");
	inDanhSach(sinhVien, n);
}
//
//
void inDanhSach(struct SinhVien sinhVien[], int n){
	printf("Danh sach sinh vien:\n");
	for(int i=0; i<n; i++){
		printf("\nId: %d\nHo va ten: %s\nTuoi: %d\nSo dien thoai: %s\n", sinhVien[i].id, sinhVien[i].fullName, sinhVien[i].age, sinhVien[i].phoneNumber);
	}
}
//
void sapXepSinhVien(struct SinhVien sinhVien[], int n){
	struct SinhVien temp;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(strcmp(sinhVien[i].fullName, sinhVien[j].fullName)>0){
				temp=sinhVien[i];
				sinhVien[i]=sinhVien[j];
				sinhVien[j]=temp;
			}
		}
	}
}

