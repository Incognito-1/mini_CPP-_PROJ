#include<algorithm>
#include<iostream>

int main(){
	
std::cout<<"enter capacity"<<std::endl;

int N;
std::cin>> N;

std::cout<<"enter number 1 at a time"<<std::endl;
	
int arr[N], o;

for(int k=0; k<N; k++)
{ 
 std::cin>>o;
 arr[k] = o;

}
std::cout<<"The minimum and maximum values in this array are: ";
std::sort(arr, &arr[N]);
for(int i=0; i < N; i++){
	if(i==0 || i==N-1)
	{
		std::cout<<arr[i];
	}

if(i==0)
{std::cout<<"and";}

}
std::cout<<"respectively";

return 0;
}