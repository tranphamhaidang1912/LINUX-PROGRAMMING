#include <stdio.h>
#include <stdlib.h>

struct  phanso
{
	int tu;
	int mau;
};
typedef struct  phanso PHANSO;

void nhapMangPhanSo(PHANSO *a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("Nhập tử: ");
		scanf("%d", &(a+i)->tu);
		printf("Nhập mẫu: ");
		scanf("%d", &(a+i)->mau);
	}
}

void xuatMangPhanSo(PHANSO *a, int n)
{
	for (int i = 0; i < n; ++i)
		printf("%d/%d\n", (a+i)->tu, (a+i)->mau);
}

void main()
{
	int n;
	printf("Nhập n: ");
	scanf("%d", &n);
	PHANSO *a = (PHANSO *) calloc(n, sizeof( int ));
	nhapMangPhanSo(a, n);
	xuatMangPhanSo(a, n);
}