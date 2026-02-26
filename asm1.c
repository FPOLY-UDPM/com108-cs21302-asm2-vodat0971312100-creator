/******************************************************************************
 * Họ và tên: [Nguyễn Võ Minh Đạt]
 * MSSV:      [PS49299]
 * Lớp:       [COM108]
 *****************************************************************************/

// Tạo file asm2.c và hoàn thiện nội dung Assignment từ nội dung file asm1.c


// Danh sách các chức năng trong ASM1:
// 1. Chức năng số 1: Kiểm tra số nguyên
// 2. Chức năng số 2. Tìm Ước số chung và bội số chung của 2 số 
// 3. Chức năng số 3: Chương trình tính tiền cho quán Karaoke
// 4. Chức năng số 4: Tính tiền điện 
// 5. Chức năng số 5: Chức năng đổi tiền 
// 6. Chức năng số 6: Xây dựng chức năng tính lãi suất vay ngân hàng vay trả góp 
// 7. Chức năng số 7: Xây dựng chương trình vay tiền mua xe
// 8. Chức năng số 8: Sắp xếp thông tin sinh viên
// 9. Chức năng số 9: Xây dựng game FPOLY-LOTT
// 10. Chức năng số 10: Xây dựng chương trình tính toán phân số 
// Viết chương trình C thực hiện các chức năng trên

#include <stdio.h>
int UclnBcnn(int Ucln, int Bcnn){
    int x,y;
    printf("x:\n");
    scanf("%d", &x);
    printf("y:\n");
    scanf("%d", &y);
    int i,n;
    while(x%i==0){
        
        i++;
    }
}
float tinhTien2(float gioBatdau, float gioKetthuc){
    printf("nhập giờ bắt đầu :\n");
    scanf("%f", &gioBatdau);
    printf("nhập giờ kết thúc :\n");
    scanf("%f", &gioKetthuc);
    float Gio=gioKetthuc-gioBatdau;
    float Tongtien;
    if(Gio>=0 && Gio<=11){
        if(gioBatdau>=4 && gioBatdau<=7){
        if(Gio <4){
            Tongtien= (Gio * 150000)*0.9;
            printf("số tiền phải trả là:%.1f",Tongtien);
        }
        else if(Gio>=4){
            Tongtien=(450000+(Gio-3)*105000)*0.9;
            printf("sô tiên phải trả là:%.1f",Tongtien);
        }
    }
    else{
        if(Gio <4){
            Tongtien= (Gio * 150000)*0.9;
            printf("số tiền phải trả là:%.1f",Tongtien);
        }
        else if(Gio>=4){
            Tongtien=(450000+(Gio-3)*105000)*0.9;
            printf("sô tiên phải trả là:%.1f",Tongtien);
        }
    }
  
}
else{
    printf("số giờ không hợp lệ vui lòng nhập lại!");
}
return 0;
}
int hocluc(float soDiem){
    printf("Nhap so diem:\n");
    scanf("%f", &soDiem);

    if (soDiem >= 0 && soDiem <= 10){
        if (soDiem >= 9){
            printf("Hoc luc xuat sac\n");
        }
        else if (soDiem >= 8){
            printf("Hoc luc gioi\n");
        }
        else if (soDiem >= 6.5){
            printf("Hoc luc kha\n");
        }
        else if (soDiem >= 5){
            printf("Hoc luc trung binh\n");
        }
        else if (soDiem >= 3.5){
            printf("Hoc luc yeu\n");
        }
        else{
            printf("Hoc luc kem\n");
        }
    } else {
        printf("So diem khong hop le\n");
    }

    return 0;
}
int Tiendien(float kWh){
    printf("số điện tiêu thụ 1 tháng là :");
    scanf("%f",&kWh);
    if(kWh<=600 && kWh>0){
        if(kWh >= 401){
            printf("giá kí điện bậc 6 là 3.460 đồng/kWh =%.3f",(kWh-400)*3.460+100*3.350+100*2.998+100*2.380+50*2.050+50*1.984);
        }
        else if(kWh>=301 && kWh<=400){
           printf("giá kí điện bậc 5 là 3.350 đồng/kWh =%.3f",kWh-300*3.350+100*2.998+100*2.380+50*2.050+50*1.984);
        }
        else if(kWh>= 201 && kWh<=300 ){
            printf("giá  kí điện bậc 4 là 2.998 đồng/kWh =%.3f",kWh-200*2.998+100*2.380+50*2.050+50*1.984 );
        }
        else if (kWh >= 101 && kWh <=200){
            printf("giá  kí điện bậc 3 là 2.380 đồng/kWh =%.3f",kWh-100*2.380+50*2.050+50*1.984);
        }
        else if (kWh>=51 && kWh<=100){
            printf("giá  kí điện bậc 2 là 2.050 đồng/kWh =%.3f",kWh-50*2.050+50*1.984);
        }
        else{
            printf("giá  kí điện bậc 1 là 1.984 đồng/kWh =%.3f",kWh*1.984);
        }
    }
    else{
        printf("số kí điện không hợp lệ! \nvui lòng nhập lạihihi  ");
    }
    return 0;
}
int Songuyen(int x ){
    printf("nhập vào giá trị x:");
    scanf("%d",&x);
    if(x%2==0 && x%2!=0 && x==0  ){
        printf(" không phải là số nguyên\n");
    }
    else{
        printf("là một con số nguyên\n ");
    }
    return 0;
}
int main() {
    int chonChucNang;

    do {
        printf("Chon chuc nang:\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim Uoc so chung va boi so chung cua 2 so\n");
        printf("3. Tinh tien cho quan Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Chuc nang doi tien\n");
        printf("6. Tinh lai suat vay ngan hang vay tra gop\n");
        printf("7. Vay tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. Tinh toan phan so\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &chonChucNang);

        switch (chonChucNang) {
            case 1:
                // Gọi hàm kiểm tra số nguyên
                printf("DA CHON CHUC NANG 1: KIEM TRA SO NGUYEN\n");
                int x;
                printf("nhap vao gia tri a:");
                scanf("%d",&x);
                int Kiemtra = Songuyen(x);
                break;
            case 2:
                // Gọi hàm tìm Ước số chung và bội số chung
                printf("DA CHON CHUC NANG 2: TIM UOC SO CHUNG VA BOI SO CHUNG CUA 2 SO\n");
                break;
            case 3:
                // Gọi hàm tính tiền cho quán Karaoke
                printf("DA CHON CHUC NANG 3: TINH TIEN CHO QUAN KARAOKE\n");
                float soTien = tinhTien2(0, 0);
                break;
            case 4:
                // Gọi hàm tính tiền điện
                printf("DA CHON CHUC NANG 4: TINH TIEN DIEN\n");
                float y;
                printf("nhập số kí điện");
                scanf("%.2f",&y);
                float Giatien= Tiendien(y);
                break;
            case 5:
                // Gọi hàm đổi tiền
                printf("DA CHON CHUC NANG 5: DOI TIEN\n");
                break;
            case 6:
                // Gọi hàm tính lãi suất vay ngân hàng
                printf("DA CHON CHUC NANG 6: TINH LAI SUAT VAY NGAN HANG VAY TRA GOP\n");
                break;
            case 7:
                // Gọi hàm vay tiền mua xe
                printf("DA CHON CHUC NANG 7: VAY TIEN MUA XE\n");
                break;
            case 8:
                // Gọi hàm sắp xếp thông tin sinh viên
                printf("DA CHON CHUC NANG 8: SAP XEP THONG TIN SINH VIEN\n");
                float z;
                printf("xin nhập điểm số:\n");
                scanf("%.2f",&z);
                float Thanhtich= hocluc(z);
                break;
            case 9:
                // Gọi hàm game FPOLY-LOTT
                printf("DA CHON CHUC NANG 9: GAME FPOLY-LOTT\n");
                break;
            case 10:
                // Gọi hàm tính toán phân số
                printf("DA CHON CHUC NANG 10: TINH TOAN PHAN SO\n");
                break;
            case 0:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (chonChucNang != 0);

    return 0;
}