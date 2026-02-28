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
#include <time.h>
#include <stdlib.h>
#include <windows.h>
int Tinhphanso(float J, float Q, float K, float A){
    printf("nhập vào phần tử của phân số 1 là:");
    scanf("%f", &J);
    printf("nhập vào phần mẫu của phân số 1 là:");
    scanf("%f", &Q);
    printf("nhập vào phần tử của phân số 2 là:");
    scanf("%f", &K);
    printf("nhập vào phần mẫu của phân số 2 là:");
    scanf("%f", &A);
    double Phanso1=J/Q;
    double Phanso2=K/A;
    if(Q!=0 && A!=0){
    double tong=Phanso1+Phanso2;
    printf("tổng của hai phân số là:%2f\n",tong);
    double hieu=Phanso1+Phanso2;
    printf("hiệu của hai phân số là:%2f\n",hieu);
    double tich=Phanso1*Phanso2;
    printf("tích của hai phân số là:%2f\n",tich);
    double thuong=Phanso1/Phanso2;
    printf("thương của hai phân số là:%2f\n",thuong);
    }
    else{
        printf("mẫu số không hợp lệ!");
    }
}
void randA(int arr[], int size, int min, int max ){
    srand(time(NULL));
    for(int i =0; i< size; i++){
        arr[i]=rand() %(max-min+1)+1;
    }
}
void printfA(int arr[], int size ){
    printf("các số là:\n ");
    for(int i =0; i<size ;i++){
        printf("So1=%d||So2=%d", arr[i],arr[i+1]);
    }
    printf("\n");
}
int FpolyLott(int a, int b) {
    int maDUthi[2];
    randA(maDUthi, 1, 1, 15); 
     printfA(maDUthi, 1);
    printf("Ket qua may quay:\n ");
   

    int count = 0;
    if (a == maDUthi[0] || a == maDUthi[1]) count++;
    if (b == maDUthi[0] || b == maDUthi[1]) count++;
    if (count == 2) {
        printf("Chuc mung ban da trung giai nhat!\n");
    } else if (count == 1) {
        printf("Chuc mung ban da trung giai nhi!\n");
    } else {
        printf("Chuc ban may man lan sau\n");
    }
    return 0;
}
int vaytien2( float Phantramvay){
    double nam;
    printf("hãy nhập vào số phần trăm vay:\n");
    scanf("%f", &Phantramvay);
     if (Phantramvay >= 0 && Phantramvay <= 100) {
        printf("nhap vao so nam vay toi da:\n");
        scanf("%lf", &nam);

        double Laisuat1thang = 0.006;
        double Tienxe = 500000000;
        double Tienvay = Tienxe * (Phantramvay / 100);
        double Tientratruoc = Tienxe - Tienvay;
        double soThang = nam * 12;
        double tien1Thang = Tienvay / soThang;
        double Tongtratruoc = Tientratruoc;
        double soDuno = Tienvay;

        printf("\nSo tien tra truoc la: %.0f\n", Tientratruoc);
        printf("--------------------------------------------\n");

        for (int i = 1; i <= (int)soThang; i++) {
            double Tienlaithangnay = soDuno * Laisuat1thang;
            double Sotienphaitra = Tienlaithangnay + tien1Thang;
            
            Tongtratruoc += Sotienphaitra;
            soDuno -= tien1Thang;

            // Bỏ dấu & ở các biến dưới đây
            printf("Thang %d | Goc: %.0f | Lai: %.0f | Tong: %.0f\n", 
                    i, tien1Thang, Tienlaithangnay, Sotienphaitra);
        }
        
        printf("--------------------------------------------\n");
        printf("Tong so tien phai tra ca goc lan lai la: %.0f\n", Tongtratruoc);
    } else {
        printf("so phan tram vay khong hop le!");
    }

    return 0;
}
int vaytien(int soTien){
    printf("nhập số tiền để vay:\n");
    scanf("%d", &soTien);
    int tien1Thang= soTien/12;
    if(soTien>0){
            int Tienthang1=tien1Thang +(0.05*soTien);
            int Tienthang2=tien1Thang +(0.05*(soTien-(tien1Thang*1)));
            int Tienthang3=tien1Thang +(0.05*(soTien-(tien1Thang*2)));
            int Tienthang4=tien1Thang +(0.05*(soTien-(tien1Thang*3)));
            int Tienthang5=tien1Thang +(0.05*(soTien-(tien1Thang*4)));
            int Tienthang6=tien1Thang +(0.05*(soTien-(tien1Thang*5)));
            int Tienthang7=tien1Thang +(0.05*(soTien-(tien1Thang*6)));
            int Tienthang8=tien1Thang +(0.05*(soTien-(tien1Thang*7)));
            int Tienthang9=tien1Thang +(0.05*(soTien-(tien1Thang*8)));
            int Tienthang10=tien1Thang +(0.05*(soTien-(tien1Thang*9)));
            int Tienthang11=tien1Thang +(0.05*(soTien-(tien1Thang*10)));
            int Tienthang12=tien1Thang +(0.05*(soTien-(tien1Thang*11)));
        printf("số tiền phải trả sau 12 tháng là:%d",Tienthang1+Tienthang2+Tienthang3+Tienthang4+Tienthang5+Tienthang6+Tienthang7+Tienthang8+Tienthang9+Tienthang10+Tienthang11+Tienthang12 );
    }
    else{
        printf("số tiền không hợp lệ vui lòng nhập lại:");
    }
}
int Doitien(int T){
    printf("hãy nhập vào số tiên là:\n");
    scanf("%d", &T);
    int Menhgia[9]={500,200,100,50,20,10,5,2,1};
    int n= sizeof(Menhgia)/sizeof(Menhgia[0]);
    for(int i=0; i<n; i++){
        if(T>Menhgia[i]){
    int count =T/Menhgia[i];
    T=T%Menhgia[i];
    printf(" %d là số tờ %d\n",count,Menhgia[i]);
        }
}
return 0;
}
int Ucln(int u,int b){
    while(b!=0){
        int Phandu= u%b;
        u=b;
        b=Phandu;
    }
    return u;
}
int Bcnn(int u,int b, int Ucln ){
    return (u*b)/Ucln;
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
                int u,b;
                printf("nhập vào u:\n");
                scanf("%d", &u);
                printf("nhập vào b:\n");
                scanf("%d", &b);
                int ucln =Ucln(u,b);
                int bcnn =Bcnn(u,b,ucln);
                printf("Ucln(u,b)=%d\n", ucln);
                printf("Bcnn(u,b)=%d\n", bcnn);
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
                int doitien= Doitien(0);
                break;
            case 6:
                // Gọi hàm tính lãi suất vay ngân hàng
                printf("DA CHON CHUC NANG 6: TINH LAI SUAT VAY NGAN HANG VAY TRA GOP\n");
                int VayTien=vaytien(0);
                break;
            case 7:
                // Gọi hàm vay tiền mua xe
                printf("DA CHON CHUC NANG 7: VAY TIEN MUA XE\n");
                int Muaxe= vaytien2(0);
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
                int So1,So2;
                printf("xin mời nhập số So1(từ 1 tới 15):\n");
                scanf("%d", &So1 );
                printf("xin mời nhập số So2(từ 1 tới 15):\n");
                scanf("%d", &So2 );
                int xoso= FpolyLott(So1,So2);
                break;
            case 10:
                // Gọi hàm tính toán phân số
                printf("DA CHON CHUC NANG 10: TINH TOAN PHAN SO\n");
                float TinhPhanso=Tinhphanso(0,0,0,0);
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