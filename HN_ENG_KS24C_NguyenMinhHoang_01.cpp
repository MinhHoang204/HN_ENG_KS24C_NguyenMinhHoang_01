#include<stdio.h>
int main() {
	int value, arr[n];
	do(){
		printf("MENU\n");
		printf("1.Nhap so phan tu va gia tri cho mang\n");
		printf("2.In ra gia tri cac phan tu trong mang theo dong (arr[0] = 1, arr[1] = 5 …)\n");
		printf("3.Dem so luong cac so nguyen to co trong mang\n");
		printf("4.Tim gia tri nho thu hai trong mang\n");
		printf("5.Them mot phan tu vao vi tri ngau nhien trong mang, phan tu moi them vao mang va vi tri them vao phai do nguoi dung nhap vao\n");
		printf("6.Xoa phan tu tai mot vi tri cu the (nguoi dung nhap vi tri)\n");
		printf("7.Sap xep mang theo thu tu giam dan (Insertion sort)\n");
		printf("8.Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay khong (Binary search)\n");
		printf("9.Xoa toan bo phan tu trung lap trong mang va hien thi toan bo phan tu doc nhat có o trong mang\n ");
		printf("10.Dao nguoc thu tu cua cac phan tu co trong mang\n");
		printf("11.Thoat\n");
		printf("Nhap lua chon cua ban:\n");
		scanf("%d", &choice);
		switch (value){
			case 1:
				printf("Nhap so phan tu cua mang");
				scanf("%d", &n);
				arr[i];
				for (int i=0; i<n; i++){
					printf("Moi nhap gia tri cho mang:");
					scanf("%d", &arr[i]);
				}
				printf("\n");
				break;
			case 2:
				for(int i=0; i<n; i++){
					printf("arr[0] = 1", &arr[i]);
				}
			   	break;
			case 3:
			   	printf("Cac so nguyen co trong mang");
			   	scanf("%d");
			   	for(int i=0; i<n; i++){
			   		if(arr[i] == 0){
			   			while(arr[i]){
			   				case 1:
			   					printf("%d", &arr[0]);
			   					break;
			   				case 2:
							    printf("%d", &arr[1]);
								break;	
						}
					} else if (arr[i]) {
						
					}
				}
			   	break;
			case 4:
			    for(int)
				break;   
			case 5:
				int null;
			    printf("Nhap gia tri can them:");
				scanf("%d", &null);
				printf("Nhap vi tri")
				break;
			case 6:
			    break;
			case 7:
			    for (int i=0; i<n-1; i++){
			    	for (int j=0; j<n-1; j++){
			    		if(arr[i]<arr[j]){
			    			temp = arr[j];
			    			arr[j] = arr[i];
			    			arr[i] = temp;
						}
					}
					for(int i=0; i<n; i++){
						printf("%d", arr[i]);
					}
				}
				break;
			case 8:	
			for (int i=0; i<n; i++){
				printf("%d");
			}
			    break;				
		} while(!choice == 11)
	}
	return 0;
}
