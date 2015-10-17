
// Do cai muc tieu cua chung ta la tim hieu cach tao menu, chinh vi vay nhung ham chuc nang toi se cung cap san
// Cac ban co the tai ma nguon duoi bai viet de tham khao them

#pragma once
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<iostream>
using namespace std;
// Khai bao nguyen mau ham
void VuaGaVuaCho();
int TimSoNT(int n);
int TinhTongCacSoNT(int n);
int DaoNguocSo(int n);
int Finbonaci(int n);
void Finbonaci2(int n);
void TimSoTichABBang2TongAB(int n);
int TinhGiaiThua(int n);
void GiaiPhuongTrinhBac2(int a, int b, int c);
void HoanVi(int &a, int &b);
void VeHinhTamGiac(int a, int b);
// Khai bao ham thuc thi

void VuaGaVuaCho() {
	cout << "Gia bai toan dan gian trong C++\n";
	cout << "Vua ga vua cho\n";
	cout << "Bo lai cho tron\n";
	cout << "Ba muoi sau(36) con\n";
	cout << "Mot tram(100) chan chan\n";
	cout << "Hoi may ga, may cho?\n";
	cout << "\n";
	for (int i = 9; i < 25; i++)
	{
		if ((i * 2 + (36 - i) * 4) == 100) {
			cout << "So ga la: " << i << "\n";
			cout << "So cho la: " << (36 - i) << "\n";
			break;
		}
	}
}

int KiemTraSNT(int n) {
	if (n == 2) {
		return 1;
	}
	else {
		for (int i = 2; i <= int(sqrt(n)); i++)
		{
			if (n%i == 0) {
				return 0;
			}
		}
	}
	return 1;
}
int TimSoNT(int n) {
	int ok = 1;
	if (n == 2) {
		return 2;
	}
	else {
		for (int i = 2; i <= int(sqrt(n)); i++)
		{
			if (n%i == 0) {
				ok = 0;
				break;
			}
		}
	}
	if (ok) {
		return n;
	}
	else
	{
		return 0;
	}
}
int TinhTongCacSoNT(int n) {
	int tong = 0, x = 0;
	for (int i = 2; i <= n; i++)
	{
		x = KiemTraSNT(i);
		if (x == 1)
			tong += i;
	}
	return tong;
}

int DaoNguocSo(int n)
{
	int sogoc = n, sodao = 0, donvi = 0;
	while (sogoc>0)
	{
		donvi = sogoc % 10;
		sodao = sodao * 10 + donvi;
		sogoc = sogoc / 10;
	}
	return sodao;
}
int Finbonaci(int n) {
	if (n < 2) {
		return n;
	}
	return (Finbonaci(n - 1) + Finbonaci(n - 2));
}
void Finbonaci2(int n) {
	int first = 0, second = 1, next, c;

	cout << "\nFibonacci series\n";

	for (c = 0; c < n; c++)
	{
		if (c <= 1)
			next = c;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		cout << next << "\t";
	}
}
int TinhGiaiThua(int n) {
	if (n == 1)return 1;
	else return n*TinhGiaiThua(n - 1);
}
void TimSoTichABBang2TongAB(int n)
{
	int x = 0, t = 0;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if ((i*j) == 2 * (i + j))
			{
				cout << i << "" << j << "\t";
				//cout << j << "\t";
				break;
			}
		}
	}
	//cout << t;
}

void GiaiPhuongTrinhBac2(int a, int b, int c) {
	float delta = 0;
	cout << "\nGiai phuong trinh bac hai " << a << "Xý + " << b << "X" << " + " << c << " = 0";

	delta = b * b - 4 * a * c;
	if (delta<0)
		printf("\nPhuong trinh vo nghiem");
	else if (delta == 0)
		cout << "\nPhuong trinh co nghiem kep x1 = x2 = " << -b / (2 * a);
	else
	{
		cout << "\nPhuong trinh co hai nghiem phan biet\nx1 = " << (-b + sqrt(delta)) / (2 * a);
		cout << "\nx2 = " << (-b - sqrt(delta)) / (2 * a);
	}
}
void HoanVi(int &a, int &b)
{
	int tam = a;
	a = b;
	b = tam;
}

void VeHinhTamGiac(int a, int b) {
	int n = 10;
	int i, j;
	for (i = 0; i<n; i++)
	{
		for (j = n - 1; j>i; j--)
			printf(" ");

		for (j = 0; j<i * 2 + 1; j++)
			if (j == 0 || j == i * 2 || i == 0 || i == n - 1)
				printf("*");
			else
				cout << " ";

		cout << "\n";
	}
	cout << "\n";
	for (i = 0; i<n; i++) //vòng l?p này vi?t ra t?ng dòng c?a tam giác
	{
		for (j = n - 1; j>i; j--)   //vòng này t?o các d?u cách tr?ng  trên 1 dòng ?? kí t? * vi?t xa l?
			printf(" ");
		for (j = 0; j<i * 2 + 1; j++)  //vòng này vi?t s? kí t? sao trên 1 dòng
			cout << "*";
		cout << "\n";    //xu?ng dòng, cái này quan tr?ng
	}
}