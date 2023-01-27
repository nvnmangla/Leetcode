 #include <iostream>
 #include <string.h>

template<class T>
void print(T any){
    std::cout <<any<<"\n";
};

int sum_array(int array[]);

int main(){
    // 1.11 
    // Problem 3
    int intArray[] = {1,2,3},*p=intArray;
    std::cout<<sum_array(intArray);
    return 0;
}

// Sum of the array using pointers only
int sum_array(int array[]){
        int *p = array;
        int sum{};
        for(int i{};i<= (int)(sizeof(array)/sizeof(int)) ;i++){
            sum += *p++;
        }
        return sum;
    }
        