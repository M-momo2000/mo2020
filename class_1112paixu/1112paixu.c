#ifndef sorts_h
#define sorts_h

#include <stdio.h>
void bubbleSort(int arr[],int arrSize);
void outArr(char *name,char *time,int arr[],int arrSize);

void binaryInsertSort(int arr[],int arrSize);
void selectSort(int arr[],int arrSize);
int partition(int arr[],int low,int high);
void quickSort(int arr[],int left,int right);
#endif

// 冒泡 排序
void bubbleSort(int arr[],int arrSize) {
	int tmp=0;
	int swap=1;
	while (swap) {
		swap=0;
	for(int i=0;i<(arrSize-1);i++){
		if(arr[i]>arr[i+1]) {
		tmp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=tmp;
		swap=1;
		}
	}
}
return;
}

// 获取
void outArr(char *name,char *time,int arr[],int arrSize){
	printf("%s,%s is: \n",name,time);
	for (int i=0;i<arrSize;i++){
		printf("%d\t",arr[i]);
	}
printf("\n");





return;}
//插入排序
void binaryInsertSort(int arr[],int arrSize) {
	int tmp;
	int i=0;
	int j=0;
	int low=0;
	int high=0;
	for(int i;i<arrSize;i++){
		tmp=arr[0];
		low=0;
		high=i-1;
		while(low<=high){
			int mid=(low+high)/2;
			if(tmp<arr[mid]) {
				high=high-1;
			}else{
				low=low+1;
			}
		}
		for(j=i-1;j>=low;j--)
		{
			arr[j+1]=arr[j];
		}
		arr[low]=tmp;
	}
	return;
}

//选择插入
void selectSort(int arr[],int arrSize) {
	for(int i=0;i<arrSize;i++) {
		int index=i;
		for(int j=i+1;j<arrSize;j++){
			if(arr[j]<arr[index]) {
				index=j;
			}
		}
		if(index!=i) {
			int tmp=arr[index];
			arr[index]=arr[i];
			arr[i]=tmp;
		}
	}
	return;
}
//分开排序
int partition(int arr[],int low,int high) {
	int i=low;
	int j=high;
	int tmp=arr[low];
	while(i<j) {
		while(i<j && arr[j]>=tmp) {
		j--;
		}

if(i<j) {
arr[i]=arr[j];
i++;
while(i<j && arr[i]<=tmp) {
	i++;
}
if(i<j) {
	arr[j]=arr[i];
	j--;
}
}
}
arr[i]=tmp;
return i;
}
//快速排序
void quickSort(int arr[],int left,int right) {
	if(left<right) {
		int tmp=partition(arr,left,right);
		quickSort(arr,left,tmp-1);
		quickSort(arr,tmp+1,right);
	}
	return;
}

int main()
{
	int arr0[]={12,45,23,54,67,2,35,89,78};
	int arr1[]={12,45,23,54,67,2,35,89,78};
	int arr2[]={12,45,23,54,67,2,35,89,78};

	int arr3[]={12,45,23,54,67,2,35,89,78};

	int arr4[]={12,45,23,54,67,2,35,89,78};
	int *ptrArr[]={arr0,arr1,arr2,arr3,arr4};
	int arrSize=sizeof(arr0);
	outArr("bubbleSort","before", *(ptrArr +0),arrSize);
	bubbleSort(*(ptrArr+0),arrSize);
        outArr("bubbleSort","after", *(ptrArr+0),arrSize);


	outArr("binaryInsertSort","befor", *(ptrArr +2),arrSize);
	binaryInsertSort(*(ptrArr +2),arrSize);
	outArr("binaryInsertSort","after", *(ptrArr +2),arrSize);
	outArr("selectSort","befor", *(ptrArr +3),arrSize);
	selectSort(*(ptrArr +3),arrSize);
	outArr("selectSort","after", *(ptrArr +3),arrSize);
	outArr("quickSort","befor", *(ptrArr +4),arrSize);
	quickSort(*(ptrArr +4),0,arrSize - 1);
	outArr("quickSort","after", *(ptrArr +4),arrSize);
	
	return 0;
}


	










