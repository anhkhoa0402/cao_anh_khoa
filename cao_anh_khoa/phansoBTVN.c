#include <stdio.h>
#include <math.h>

struct PhanSo {
    int tu;
    int mau;
};

// Hàm tìm Ước chung lớn nhất (UCLN)
int UCLN(int a, int b) {
    if (a < 0) {
        a = -a;
    }
    if (b < 0) {
        b = -b;
    }
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// Hàm rút gọn phân số
void RutGon(struct PhanSo* p) {
    int ucln = UCLN(p->tu, p->mau);
    p->tu /= ucln;
    p->mau /= ucln;
    // Đảm bảo mẫu luôn dương
    if (p->mau < 0) {
        p->tu = -p->tu;
        p->mau = -p->mau;
    }
}

// Hàm nhân hai phân số
struct PhanSo Nhan(struct PhanSo a, struct PhanSo b) {
    struct PhanSo kq;
    kq.tu = a.tu * b.tu;
    kq.mau = a.mau * b.mau;
    RutGon(&kq);
    return kq;
}

// Hàm chia hai phân số
struct PhanSo Chia(struct PhanSo a, struct PhanSo b) {
    struct PhanSo kq;
    kq.tu = a.tu * b.mau;
    kq.mau = a.mau * b.tu;
    RutGon(&kq);
    return kq;
}

// Hàm cộng hai phân số
struct PhanSo Cong(struct PhanSo a, struct PhanSo b) {
    struct PhanSo kq;
    kq.tu = a.tu * b.mau + b.tu * a.mau;
    kq.mau = a.mau * b.mau;
    RutGon(&kq);
    return kq;
}

// Hàm trừ hai phân số
struct PhanSo Tru(struct PhanSo a, struct PhanSo b) {
    struct PhanSo kq;
    kq.tu = a.tu * b.mau - b.tu * a.mau;
    kq.mau = a.mau * b.mau;
    RutGon(&kq);
    return kq;
}

// Hàm in phân số
void InPhanSo(struct PhanSo p) {
    printf("%d/%d\n", p.tu, p.mau);
}

// Hàm main
int main() {
    struct PhanSo ps1 = { 3, 4 };  // 3/4
    struct PhanSo ps2 = { 5, 6 };  // 5/6

    struct PhanSo kq;

    kq = Cong(ps1, ps2);
    printf("Cong: ");
    InPhanSo(kq);

    kq = Tru(ps1, ps2);
    printf("Tru: ");
    InPhanSo(kq);

    kq = Nhan(ps1, ps2);
    printf("Nhan: ");
    InPhanSo(kq);

    kq = Chia(ps1, ps2);
    printf("Chia: ");
    InPhanSo(kq);

    return 0;
}
