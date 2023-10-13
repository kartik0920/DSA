    #include <iostream>
    using namespace std;
    void printArr(int arr[],int size){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" "<<endl;
        }
        cout<<"printing done";
    }
    int max(int arr[],int size){
        int max=arr[0];
        for(int i=0;i<size;i++){
            if(arr[i]>max){
                max=arr[i];
            }

        }
        return max;
    }
    int min(int arr[],int size){
        int min=arr[0];
        for(int i=0;i<size;i++){
            if(arr[i]<min){
                min=arr[i];
            }

        }
        return min;
    }
    int main ()
    {
        int arr[]={1,25,-3,4,7,12};
        int size=sizeof(arr)/sizeof(arr[0]);
        cout<<max(arr,size)<<endl;
        cout<<min(arr,size);
        return 0;
    }