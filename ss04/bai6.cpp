#include <stdio.h>

int main() {
    int chiSoCu, chiSoMoi;
    int soDienTieuThu;
    long tongTien = 0;

    
    printf("Nhap chi so cu (kWh): ");
    scanf("%d", &chiSoCu);
    printf("Nhap chi so moi (kWh): ");
    scanf("%d", &chiSoMoi);

   
    if (chiSoMoi < chiSoCu) {
        printf("Chi so moi phai lon hon hoac bang chi so cu.\n");
        return 1;
    }

  
    soDienTieuThu = chiSoMoi - chiSoCu;

    
    if (soDienTieuThu <= 50) {
        tongTien = soDienTieuThu * 10000;
    } else if (soDienTieuThu <= 100) {
        tongTien = 50 * 10000 + (soDienTieuThu - 50) * 15000;
    } else if (soDienTieuThu <= 150) {
        tongTien = 50 * 10000 + 50 * 15000 + (soDienTieuThu - 100) * 20000;
    } else if (soDienTieuThu <= 200) {
        tongTien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (soDienTieuThu - 150) * 25000;
    } else {
        tongTien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (soDienTieuThu - 200) * 30000;
    }


    printf("So dien tieu thu: %d kWh\n", soDienTieuThu);
    printf("Tong tien dien: %ld VND\n", tongTien);

    return 0;
}

