#include<stdio.h>
int main(){
	int n,sum,giaTriThem,viTri,viTriXoa,giaTri;
	int arr[100];
    int min =arr[0];
    int max =arr[0];
    int flag = -1;
	
	int chon;
	do{
		printf("1 nhap so phan tu va gia tri cho mang\n");
		printf("2 in ra gia tri cac phan tu trong mang\n");
		printf("3 gia tri nho nhat va lon nhat trong mang\n");
		printf("4 in ra tong tat ca cac phan tu\n");
		printf("5 them 1 phan tu vao cuoi mang\n");
		printf("6 xoa 1 phan tu\n");
		printf("7 sap xep theo thu tu giam dan\n");
		printf("8 Cho nguoi dùng nhap vào mot phan tu, tìm kiem xem phan tu dó có ton tai trong mang hay không\n");
		printf("9 sap xep mang theo thu tu tang dan\n");
		printf("10 thoat\n");
		printf("moi ban chon\n");
		scanf("%d",&chon);
		
		switch(chon){
			case 1 :// nhap so phan tu va gia tri cho mang
				printf("moi ban nhap so phan tu ");
				scanf("%d",&n);
				for(int i = 0;i < n;i++){
					printf("arr[%d]=",i);
					scanf("%d",&arr[i]);
				}
				break;
			case 2 ://in ra gia tri cac phan tu trong mang
				for(int i=0;i<n;i++){
					printf("arr[%d] = %d\n",i,arr[i]);
				}
				break;
			case 3 ://gia tri nho nhat va lon nhat trong mang
			
				for(int i = 0;i<n;i++){
					if(arr[i] > max){
						max = arr[i];
					}
					if(arr[i]<min){
						min = arr[i];
					}
				}
				printf("min = %d\n",min);
				printf("max = %d\n",max);
				break;
			
			case 5://them 1 phan tu vao cuoi mang
				printf("moi ban nhap gia tri muon them");
				scanf("%d",giaTriThem);
				arr[n-1] = giaTriThem;
                n++;
                for(int i=0;i<n;i++){
					printf("arr[%d] = %d\n",i,arr[i]);
				}
                
				
                break;
            case 6 ://xoa 1 phan tu
            	printf("moi ban nhap vi tri muon xoa cua mang");
	            scanf("%d",&viTriXoa);
	            if(viTriXoa <= n){
		        for(int i = viTriXoa-1; i < n - 1; i++){
                arr[i] = arr[i + 1];
                }
                --n;
                for(int i = 0; i < n; i++){
                printf("%d ", arr[i]);
                }
			}
			break;
			case 8 ://Cho nguoi dùng nhap vào mot phan tu, tìm kiem xem phan tu dó có ton tai trong mang hay không
				printf("moi ban nhap phan tu can tim");
				scanf("%d",&giaTri);
				for(int i =0;i<n;i++){
	         	if(arr[i] == giaTri){
			    flag = i+1;
			break;
	     	}
	        }
	
	        if(flag != -1){
		    printf("phan tu can tim dang o vi tri %d\n",flag);
	        }
	        else{
		    printf("phan tu can tim ko co trong mang");
         	}
			case 9 ://sap xep mang theo thu tu tang dan
				for(int i =0;i<n-1;i++){
		            int minIdx = i;
		        for(int j =i+1;j<n;j++){
			    if(arr[j]<arr[minIdx]){
			    	minIdx = j;
	            }
		
	            }
	            int temp = arr[minIdx];
             	arr[minIdx] = arr[i];
                arr[i] = temp;
                }
            	for(int i =0;i<n;i++){
        		printf("%d\t",arr[i]);
            	}
            	break;
            case 10 :
            	printf(" chuong trinh ket thuc");
         		default:
         			printf("lua chon khong hop le");
		}
					
		    	
				
			
			
				
		
		
	}while(chon !=10);
	
	return 0;
	
	
	
}
