#include <stdio.h>

int main() {
	//Bai tap 1
    // Kieu du lieu int: Dung de luu tru cac gia tri so nguyen (int)
    int a = 10; // Khai bao va khoi tao mot bien a kieu int voi gia tri 10

    // Kieu du lieu float: Dung de luu tru cac gia tri so thuc co dau voi do chinh xac vua phai
    float b = 3.14; // Khai bao va khoi tao mot bien b kieu float voi gia tri 3.14

    // Kieu du lieu double: Dung de luu tru cac gia tri so thuc co dau voi do chinh xac cao hon float
    double c = 3.1415926535; // Khai bao va khoi tao mot bien c kieu double voi gia tri Pi chinh xac hon

    // Kieu du lieu char: Dung de luu tru mot ky tu (1 byte)
    char d = 'A'; // Khai bao va khoi tao mot bien d kieu char voi gia tri 'A'

    // Kieu du lieu long: Dung de luu tru cac so nguyen dai (thuong co do dai 4 byte hoac 8 byte tuy vao he dieu hanh)
    long e = 1234567890L; // Khai bao va khoi tao mot bien e kieu long voi gia tri 1234567890

    // In ra cac gia tri cua cac bien da khai bao
    printf("a = %d\n", a);       // In ra gia tri cua bien a
    printf("b = %.2f\n", b);     // In ra gia tri cua bien b
    printf("c = %.10f\n", c);    // In ra gia tri cua bien c
    printf("d = %c\n", d);       // In ra gia tri cua bien d
    printf("e = %ld\n", e);      // In ra gia tri cua bien e

	//Bai tap 2
 	// khai bao va khoi tao hai bien kieu so nguyen
    int num1 = 20;  // bien num1 voi gia tri 20
    int num2 = 10;  // bien num2 voi gia tri 10
    
    // khai bao bien de luu ket qua cua phep cong
    int sum;

    // tinh tong cua num1 va num2, luu vao bien sum
    sum = num1 + num2;

    // in ket qua ra man hinh
    printf("Tong cua %d va %d la: %d\n", num1, num2, sum);

	//Bai tap 3
	// tinh hieu cua num1 va num2, luu vao bien difference
    int difference = num1 - num2;

    // tinh tich cua num1 va num2, luu vao bien product
    int product = num1 * num2;

    // tinh thuong cua num1 va num2, luu vao bien quotient
    int quotient = num1 / num2; // ep kieu float de ket qua chinh xac

    // in ket qua ra man hinh
    printf("Hieu cua %d va %d la: %d\n", num1, num2, difference);
    printf("Tich cua %d va %d la: %d\n", num1, num2, product);
    printf("Thuong cua %d va %d la: %.d\n", num1, num2, quotient);

	//Bai tap 4
	// khai bao va khoi tao bien canh hinh vuong
    int side = 5;  // bien side voi gia tri 5, dai canh hinh vuong
    
    // khai bao bien de luu chu vi va dien tich
    int perimeter, area;

    // tinh chu vi hinh vuong, chu vi = 4 * canh
    perimeter = 4 * side;

    // tinh dien tich hinh vuong, dien tich = canh * canh
    area = side * side;

    // in ket qua ra man hinh
    printf("Chu vi hinh vuong la: %d\n", perimeter);
    printf("Dien tich hinh vuong la: %d\n", area);

	//Bai tap 5
	// khai bao va khoi tao chieu dai chieu rong hinh chu nhat
	int length = 8; // bien length voi gia tri 8, chieu dai hinh chu nhat
	int width = 5; // bien width voi gia tri 5, chieu rong hinh chu nhat
	
	// khai bao bien de luu chu vi va dien tich
	int perimeter_hcn, area_hcn;
	
	// tinh chu vi hinh chu nhat, chu vi = 2 * (dai + rong)
	perimeter_hcn = 2 * (length + width);
	
	// tinh dien tich hinh chu nhat, dien tich = dai * rong
	area_hcn = length * width;
	// in ket qua ra man hinh
	printf("Chu vi hinh chu nhat la: %d\n", perimeter_hcn);
	printf("Dien tich hinh chu nhat la: %d\n", area_hcn);
	
	//Bai tap 6
	// khai bao hang so PI kieu float
    const float PI = 3.14;  // hang so PI co gia tri 3.14
    
    // khai bao bien ban kinh hinh tron
    int radius = 5;  // ban kinh hinh tron, gia tri 5

    // khai bao bien de luu chu vi va dien tich
    float circumference_tron, area_tron;

    // tinh chu vi hinh tron, chu vi = 2 * PI * ban kinh
    circumference_tron = 2 * PI * radius;

    // tinh dien tich hinh tron, dien tich = PI * ban kinh * ban kinh
    area_tron = PI * radius * radius;

    // in ket qua ra man hinh
    printf("Chu vi hinh tron la: %2f\n", circumference_tron);
    printf("Dien tich hinh tron la: %2f\n", area_tron);
    
    return 0;
}

