#include <stdio.h>
#include <stdlib.h>

luongthuong(int *namlamviec, int *namkinhnghiem) {
    int luongchinhthuc;
    if (*namkinhnghiem <= 2) {
        printf("luong thuong 10000000");
    }
    if (2 < *namkinhnghiem && *namkinhnghiem <= 5) {
        printf("luong thuong 20000000");
    }
    if (*namkinhnghiem > 5) {
        printf("luong thuong 30000000");
    }
    if (*namlamviec <= 1) {
        printf("luong thuong=\n", (float) luongchinhthuc * 0.3);
        scanf("%f", &luongthuong);
    }
    if (1 < *namlamviec && *namlamviec < 2) {
        printf("luong thuong =", (float) luongchinhthuc * 0.5);
    }
    if (2 <= *namlamviec && *namlamviec >= 5) {
        printf("luong thuong=", (float) luongchinhthuc);
    }
    if (*namlamviec > 5) {
        printf("luong thuong=", (float) luongchinhthuc * 2);
    }
}

int main() {int *poiter =(int *)malloc(10);
    int namkinhnghiem, namlamviec;
    printf("nhap so nam kinh nghiem");
    scanf("%d", &namkinhnghiem);
    printf("nhapso nam lam viec trong cong ty\n");
    scanf("%d", &namlamviec);
    luongthuong(&namlamviec, &namkinhnghiem);
    char choice;
    printf("ban muon tiep tuc chuong trinh khong\n");
    printf("chon n hoac N de ket thuc chuong trinh\n");
    printf("nhap lua chon cua ban(n,N)\n");
    while (namkinhnghiem<10) if (choice == 'n' || choice=='N') {
            printf("dung chuong trinh");
            exit(1);
        } else { luongthuong(&namlamviec,&namkinhnghiem); }

    return 0;
}