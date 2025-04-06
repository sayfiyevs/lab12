#include <iostream>
using namespace std;
/*problem 3
void swap(int *a, int*b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}*/
/*problem 6
void square(int *a) {
    *a = *a * *a;
}*/
/*problem 17
void reverse(int arr[], int size) {
    int *point_f=&arr[0];
    int *point_l=&arr[size - 1];
    while (point_f<point_l) {
        int temp=*point_f;
        *point_f=*point_l;
        *point_l=temp;
        point_f++;
        point_l--;
    }

}*/
int main() {
    /*problem1
    int n=5;
    int *ptr=&n;
    cout<<n<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    */
    /*problem 2
    int n=5;
    cout<<n<<endl;
    int *ptr=&n;
    *ptr=10;
    cout<<n<<endl;
    */
    /*problem 3
    int a=5, b=6;
    swap(&a, &b);
    cout<<a<<" "<<b<<endl;
    */
    /*problem 4
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = &arr[0];
    for (int i = 0; i < 5; i++) {
        *p=*(p+i);
        cout<<*p;
    }
*/
    /*problem 5
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int *ptr=&arr[0];
    cout<<*(ptr+size/2);
*/
    /*problem 7
    int arr[5]={1,2,3,4,5};
    int *ptr=&arr[0];
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(ptr)<<endl;
*/
    /*problem 8
    int a=5;
    void *ptr=&a;

    cout<<*((int *)ptr)<<endl;
*/
    /*problem 9
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr=arr;
    int max=*ptr;
    for(int i=0;i<5;i++) {
        if(max<*ptr) {
            max=*ptr;
        }
        ptr++;
    }
    cout<<max<<endl;
    */
    /*problem 10
    int a,b;
    cin>>a>>b;
    int *ptrA=&a;
    int *ptrB=&b;
    cout<<*ptrA<<" "<<*ptrB<<endl;
*/
    /*problem 11
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int *maxptr = arr;

    for (int i = 0; i < size; i++) {
        if (arr[i] > *maxptr) {
            maxptr = &arr[i];
        }
    }
    cout << *maxptr << endl;
    cout << maxptr << endl;
*/
    /*problem 13
    int arr[5]={1,2,3,4,5};
    int *ptrArr=arr;
    for(int i=0;i<5;i++) {
        cout<<*(ptrArr+i)<<endl;
        cout<<ptrArr+i<<endl;
    }
*/
    /*problem 14
    int a=56:
    int *ptr=&a;
    cout<<*ptr<<endl;
    */
    /*problem 15
    int treasure[5]={10,20,30,40,50};
    int *ptr=treasure;
    for(int i=0;i<5;i++) {
        *ptr=*(ptr+i);
    }
    cout<<*ptr<<endl;
    */
    /*problem 16
    int score=75;
    int temp=75;
    int *score_ptr=&score;
    *score_ptr+=10;
    cout<<temp<<endl;
    cout<<score<<endl;
    */
    /*problem 17
    int arr[5]={1,2,3,4,5};
    reverse(arr, 5);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] <<" ";
    }
*/
    /*problem 18
    int scores[5]={78, 95, 85, 62, 88};
    int *largest_ptr=&scores[0];
    int *secondlargest_ptr=nullptr;
    int *thirdlargest_ptr=nullptr;
    for(int i=1;i<5;i++) {
       if (scores[i] > *largest_ptr) {
           thirdlargest_ptr = secondlargest_ptr;
           secondlargest_ptr = largest_ptr;
           largest_ptr = &scores[i];
       }
       else if(scores[i]>*secondlargest_ptr|| secondlargest_ptr == nullptr) {
           thirdlargest_ptr=secondlargest_ptr;
           secondlargest_ptr=&scores[i];
       }
       else if(scores[i]>*thirdlargest_ptr || thirdlargest_ptr == nullptr) {
           thirdlargest_ptr=&scores[i];
       }
        }
    cout<<*largest_ptr<<endl;
    cout<<*secondlargest_ptr<<endl;
    cout<<*thirdlargest_ptr<<endl;
    */


    return 0;
}